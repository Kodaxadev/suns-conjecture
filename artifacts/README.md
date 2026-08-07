# Complete research corpus

The complete Sun's-conjecture handoff is stored as Base64 text segments because the GitHub connector accepts UTF-8 file content.

The original `part00` upload failed its Git blob integrity comparison and is intentionally not used. The four `part00a`–`part00d` replacements and `part01`–`part02` were verified against their local Git blob hashes.

## Reconstruct on Linux/macOS

From the repository root:

```bash
cat \
  artifacts/suns-conjecture-corpus.tar.xz.b64.part00a \
  artifacts/suns-conjecture-corpus.tar.xz.b64.part00b \
  artifacts/suns-conjecture-corpus.tar.xz.b64.part00c \
  artifacts/suns-conjecture-corpus.tar.xz.b64.part00d \
  artifacts/suns-conjecture-corpus.tar.xz.b64.part01 \
  artifacts/suns-conjecture-corpus.tar.xz.b64.part02 \
  | base64 --decode \
  > artifacts/suns-conjecture-corpus.tar.xz

cd artifacts
sha256sum -c suns-conjecture-corpus.tar.xz.sha256
cd ..
mkdir -p corpus
tar -xJf artifacts/suns-conjecture-corpus.tar.xz -C corpus
```

## Reconstruct on PowerShell

```powershell
$names = @(
  'part00a','part00b','part00c','part00d','part01','part02'
)
$text = ($names | ForEach-Object {
  Get-Content "artifacts/suns-conjecture-corpus.tar.xz.b64.$_" -Raw
}) -join ''
[IO.File]::WriteAllBytes(
  'artifacts/suns-conjecture-corpus.tar.xz',
  [Convert]::FromBase64String($text)
)
```

Expected SHA-256:

```text
3c772ae6e906be6f6755672a0b441600cbb1edd0cb224060470a7d94132318f3
```

The archive contains the research notes through v4, all available C++ scanners, nonempty recorded outputs, reproducibility notes, and historical checksum manifests. Compiled executables and temporary checkpoints were excluded.