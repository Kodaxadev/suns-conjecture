# Complete research corpus

The complete Sun's-conjecture handoff is stored as three Base64 text segments because the GitHub connector only accepts UTF-8 file content.

## Reconstruct

From the repository root:

```bash
cat artifacts/suns-conjecture-corpus.tar.xz.b64.part* \
  | base64 --decode \
  > artifacts/suns-conjecture-corpus.tar.xz

sha256sum -c artifacts/suns-conjecture-corpus.tar.xz.sha256
mkdir -p corpus
tar -xJf artifacts/suns-conjecture-corpus.tar.xz -C corpus
```

On PowerShell:

```powershell
$parts = Get-ChildItem artifacts/suns-conjecture-corpus.tar.xz.b64.part* | Sort-Object Name
$text = ($parts | ForEach-Object { Get-Content $_ -Raw }) -join ''
[IO.File]::WriteAllBytes('artifacts/suns-conjecture-corpus.tar.xz', [Convert]::FromBase64String($text))
```

Expected SHA-256:

```text
3c772ae6e906be6f6755672a0b441600cbb1edd0cb224060470a7d94132318f3
```

The archive contains the research notes through v4, all available C++ scanners, nonempty recorded outputs, reproducibility notes, and historical checksum manifests. Compiled executables and temporary checkpoints were excluded.