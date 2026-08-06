Exact nonredundant-composite runner-up verification

Source: primorial_runnerup_verify_14m.cpp
Compiler example:
  g++ -O3 -march=native -fopenmp -std=c++17 primorial_runnerup_verify_14m.cpp -o verify
Run example:
  OMP_NUM_THREADS=5 ./verify

The program:
1. sieves primes;
2. computes Q(n) using every prime q <= 7,000,000;
3. obtains qmax=14334 and Q(14334)=6,860,023;
4. tests every composite m <= 13,720,045 that is odd or divisible by 8;
5. reports a violation if m < 2 Q(L(m)) for the capped range.

Why this tests all n <= 14334:
If L(m) >= n and m < 2Q(n), monotonicity of Q implies the program's test at
min(L(m),14334) also flags m. Moduli with v2=1 or 2 are excluded because their
collision relation equals that of their odd part, so they cannot beat 2Q(n).

Observed output:
  tested=7681956 minBad=13720046 qmax=14334 M=13720045

Here minBad=M+1 means no violating modulus was found.
This is a reproducible exhaustive computation, not a mathematical proof.
