# Sun's Conjecture: Primorial Discriminator Research

This repository contains the structural analysis, exact scanners, computational outputs, reproducibility notes, and hostile audits developed while studying Sun's conjecture for primorial discriminators.

Let \(p_k\) be the \(k\)-th prime and \(P_k=\prod_{r=1}^k p_r\). For \(m>1\), let \(L(m)\) be the largest \(n\) such that \(P_1,\ldots,P_n\) are pairwise distinct modulo \(m\). Define

\[
D(n)=\min\{m>1:L(m)\ge n\}.
\]

Sun conjectures that \(D(n)\) is always prime.

## Status

**Open. Nothing in this repository is claimed to prove the conjecture.**

The work includes proved structural reductions, finite computational verification, explicit failed proof routes, and counterexamples to several tempting but false lemmas.

## Complete handoff

The complete corpus is stored in `artifacts/` as three Base64 text segments representing a checksummed `tar.xz` archive. See [`artifacts/README.md`](artifacts/README.md) for Linux/macOS and PowerShell reconstruction commands.

The archive contains:

- research notes through structural progress v4;
- all available C++ scanners and verifiers;
- nonempty recorded output files;
- reproducibility instructions;
- SHA-256 manifests.

Compiled executables, temporary checkpoints, and zero-byte interrupted outputs were excluded.

## Important rejected routes

- The naive strengthened residual-kernel product bound double-counts radical factors; \(m=36\) is a counterexample.
- The proposed inequality \(c_q(n)\ge\pi(q)\) is false; \((n,q)=(8,19)\) gives \(c_{19}(8)=4<8\).
- Powers of two beyond \(4\) are not free; \(L(56)=5>L(7)=2\).

These failures are retained to prevent accidental reuse.