# Current corrected status

## Proved structural facts

- Exact collision criterion:
  \[
  P_i\equiv P_j\pmod m
  \iff
  \frac{m}{\gcd(m,P_i)}\mid \frac{P_j}{P_i}-1.
  \]
- Prime divisors of \(m\) create collision-independent index blocks.
- With \(q=P^+(m)=p_r\) and \(K=m/\operatorname{rad}(m)\),
  \[
  L(m)\le r+\varphi(K)-1.
  \]
- For squarefree \(m\), \(L(m)\le\pi(P^+(m))\).
- Every primorial difference is divisible by \(4\), so for odd \(u\),
  \[
  L(u)=L(2u)=L(4u).
  \]
- The prefix-obstruction set satisfies
  \[
  |\mathcal B_a|\le\binom{a-2}{3}.
  \]
- The latest residual-kernel final-block theorem and finite-kernel certificate are in `primorial_composite_progress_v5.md`.

## Computational evidence

The strongest recorded exact verifier found no nonredundant composite below \(2Q(n)\) through \(n=14334\). This supports

\[
C(n)=2Q(n)\qquad(n\ge8),
\]

with small exceptions \(n=3,4,6,7\). This is finite evidence only.

## Open branches

### Low-cut squarefree

Prove either

\[
p_aQ_a(n)>Q(n)
\]

for primality, or the stronger

\[
p_aQ_a(n)\ge2Q(n).
\]

### High-high squarefree

The v4 note omitted the branch where the second-largest factor has index \(a\ge n\). It requires a separate comparison using

\[
m\ge p_np_{n+1}.
\]

### Nonsquarefree

Use the exact residual walk \(\rho_K(n)\) and lower envelope \(F_K(n)\), then analyze the earlier masked blocks for the small kernels that survive.

## Rejected statements

- \(c_q(n)\ge\pi(q)\) — false.
- \(L(2^ak)=L(k)\) for \(a\ge3\) — false.
- The unconditional product \(K\operatorname{rad}(K)p_{n-\varphi(K)+1}\) — false without checking whether the required prime is already supported.
- Any use of \(Q(n)\sim n\log n\) — unsupported here.
