# Sun's Conjecture: Primorial Discriminator Research

This repository contains structural analysis, exact scanners, computational outputs, and hostile audits for Sun's conjecture on primorial discriminators.

Let \(p_k\) be the \(k\)-th prime and \(P_k=\prod_{r=1}^k p_r\). For \(m>1\), let \(L(m)\) be the largest \(n\) such that \(P_1,\ldots,P_n\) are pairwise distinct modulo \(m\). Define

\[
D(n)=\min\{m>1:L(m)\ge n\}.
\]

Sun conjectures that \(D(n)\) is always prime.

## Status

**Open. Nothing in this repository is claimed to prove Sun's conjecture.**

The repository records proved lemmas, exact finite computations, failed proof routes, explicit counterexamples, and repaired reductions. The latest research note is [`docs/primorial_composite_progress_v5.md`](docs/primorial_composite_progress_v5.md).

## Current structural split

1. **Low-cut squarefree composites:** compare \(p_aQ_a(n)\) with \(Q(n)\).
2. **High-high squarefree composites:** compare \(p_np_{n+1}\) with \(Q(n)\).
3. **Nonsquarefree composites:** analyze the residual kernels surviving the exact final-block certificate.

Here \(Q(n)\) is the least prime discriminator and \(C(n)\) the least composite discriminator.

## Layout

- `docs/` — research notes, current status, hostile audits, and reproduction notes.
- `src/` — C++ exact scanners and analyzers.
- `results/` — raw outputs from documented runs.
- `checksums/` — historical and repository-wide hashes.
- `artifacts/` — a complete ZIP handoff of the source material.

## Evidence labels

- **PROVED** — supplied with a mathematical argument.
- **COMPUTATIONAL PASS** — exact within the stated finite range; not a proof.
- **OPEN** — unproved.
- **DISPROVED ROUTE** — rejected by counterexample or logical failure.

## Important failed routes

- The naive strengthened residual-kernel product bound double-counted radical factors; \(m=36\) is a counterexample.
- The proposed inequality \(c_q(n)\ge\pi(q)\) is false; \((n,q)=(8,19)\) gives \(c_{19}(8)=4<8\).
- Powers of two beyond \(4\) are not free; \(L(56)=5>L(7)=2\).

These failures are retained so they are not accidentally reused.

## Build

Most programs use:

```bash
g++ -O3 -std=c++17 src/<program>.cpp -o <program>
```

The large verifier uses OpenMP:

```bash
g++ -O3 -march=native -fopenmp -std=c++17 \
  src/primorial_runnerup_verify_14m.cpp -o verify
OMP_NUM_THREADS=5 ./verify
```
