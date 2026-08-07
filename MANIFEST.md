# Artifact manifest

This handoff contains the meaningful text and source artifacts produced during the primorial-discriminator investigation on 2026-08-06.

## Included

- `README.md` — project overview and evidence policy;
- `docs/current-status.md` — corrected current state;
- `docs/hostile-audit-longcat.md` — counterexamples and audit findings;
- `docs/primorial_composite_progress_v5.md` — latest structural note;
- `docs/history/` — progress notes v1 through v4;
- `src/` — six C++ scanners and verifiers;
- `results/` — five nonempty raw outputs;
- `evidence/` — build/run instructions and historical SHA-256 manifests.

## Intentionally excluded

- compiled native binaries, because they are platform-specific and reproducible from source;
- temporary checkpoint files `tmp_8500000.txt` and `tmp_9000000.txt`;
- zero-byte incomplete outputs `primorial_runnerup_scan_m8_5e6.txt` and `primorial_runnerup_scan_m1e7.txt`.

## Caveat

Some historical checksum manifests mention intermediate files that were not present in the final working directory. They are retained as provenance records, not as claims that every referenced intermediate artifact is included.
