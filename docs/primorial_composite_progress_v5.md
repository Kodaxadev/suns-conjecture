# Composite primorial discriminators — structural progress v5

## 1. Correction to v4: the high–high squarefree branch

Let an odd squarefree modulus have prime factors
\[
q_1<\cdots<q_t,
\]
and let its second-largest factor be \(q_{t-1}=p_a\).

The v4 reduction \(m\ge p_aQ_a(n)\) is valid only when \(a<n\). If
\(a\ge n\), then the suffix \(P_a,\ldots,P_n\) is empty or a singleton,
so it imposes no shifted-discriminator condition on the largest factor.
This omitted branch is real: for example
\[
437=19\cdot23,
\qquad L(437)=9.
\]
Both prime factors are at least \(p_8=19\), and their collision sets are
complementary enough to discriminate nine primorials.

### Complete squarefree lower envelope

If \(a<n\), the final pre-largest-prime block forces the largest factor to
discriminate \(P_a,\ldots,P_n\), hence
\[
m\ge p_aQ_a(n).
\]
If \(a\ge n\), the two largest distinct prime factors are at least
\(p_n,p_{n+1}\), hence
\[
m\ge p_np_{n+1}.
\]
Therefore every odd squarefree composite discriminator satisfies
\[
\boxed{
 m\ge
 \min\left\{
 p_np_{n+1},
 \min_{2\le a<n}p_aQ_a(n)
 \right\}.
}
\tag{SF}
\]

To eliminate all odd squarefree record holders it is sufficient to prove both
\[
p_np_{n+1}>Q(n)
\]
and
\[
p_aQ_a(n)>Q(n)\qquad(2\le a<n).
\]
For the stronger runner-up statement \(C(n)=2Q(n)\), replace \(Q(n)\) by
\(2Q(n)\) in both inequalities.

Thus the collision-depth inequality from v4 handles only the low-cut branch;
the high–high branch requires the separate bound \(p_np_{n+1}\ge2Q(n)\).

In the exact data through \(n=14334\),
\[
\frac{p_np_{n+1}}{2Q(n)}\ge\frac{19\cdot23}{2\cdot37}
=\frac{437}{74}>5.90
\qquad(n\ge8),
\]
but no proof for all \(n\) is known here.

---

## 2. Exact residual-kernel final-block theorem

Let \(m\) be nonsquarefree and define its residual kernel
\[
K=\frac{m}{\operatorname{rad}(m)}>1.
\]
Let
\[
s=s(K)=\pi(P^+(K)).
\]
For \(j\ge s\), define the consecutive-prime walk modulo \(K\) by
\[
U_s=1,
\qquad
U_j=\prod_{k=s+1}^{j}p_k\pmod K.
\]
Define
\[
\rho_K(n)=
\max\left(
 s,
 1+\max\{i:s\le i<j\le n,\ U_i=U_j\}
\right),
\tag{1}
\]
where the inner maximum is omitted when no repeated pair exists.

Equivalently, \(\rho_K(n)\) is the least index \(r\ge s\) for which
\[
U_r,U_{r+1},\ldots,U_n
\]
are pairwise distinct modulo \(K\).

### Theorem

If \(m\) discriminates \(P_1,\ldots,P_n\), has residual kernel \(K\), and
its largest prime factor is \(p_r\), then
\[
\boxed{r\ge\rho_K(n).}
\tag{2}
\]
Consequently
\[
\boxed{
 m\ge F_K(n):=
 K\operatorname{rad}(K)
 \begin{cases}
 1,&\rho_K(n)=s,\\
 p_{\rho_K(n)},&\rho_K(n)>s.
 \end{cases}
}
\tag{3}
\]

### Proof

Every prime divisor of \(K\) has entered the primorial by index \(s\). In the
final block beginning at the largest prime factor \(p_r\), collisions satisfy
\[
P_i\equiv P_j\pmod m
\iff
K\mid\prod_{k=i+1}^{j}p_k-1
\iff
U_i=U_j\pmod K
\qquad(r\le i<j\le n).
\]
Thus the suffix \(U_r,\ldots,U_n\) must be injective, forcing
\(r\ge\rho_K(n)\).

Also \(\operatorname{rad}(m)\) must contain \(\operatorname{rad}(K)\). If
\(\rho_K(n)>s\), it must additionally contain a prime of index at least
\(\rho_K(n)\), whose least possible value is \(p_{\rho_K(n)}\). Since
\(m=K\operatorname{rad}(m)\), (3) follows.

The bound is exact with respect to support and the final block: the integer
\[
K\operatorname{rad}(K)
\]
or
\[
K\operatorname{rad}(K)p_{\rho_K(n)}
\]
has residual kernel \(K\) and the least possible radical that clears the
final-block obstruction. Earlier blocks may still collide, so \(F_K(n)\) is a
necessary lower bound, not a sufficient discriminator criterion.

### Relation to the old totient bound

The old argument used only
\[
\rho_K(n)\ge n-\varphi(K)+1.
\]
The new quantity records the actual consecutive-prime walk modulo \(K\) and
can be dramatically larger. It also automatically includes the support
condition \(\rho_K(n)\ge s(K)\).

The function \(F_K(n)\) is nondecreasing in \(n\).

---

## 3. Finite kernel certificate

For a nonredundant composite challenger, \(m\) is odd or divisible by \(8\).
Hence its residual kernel satisfies
\[
K\text{ odd}\quad\text{or}\quad4\mid K.
\]

If \(m<T\), then \(K<T/2\), because \(m=K\operatorname{rad}(m)\) and
\(\operatorname{rad}(m)\ge2\). Therefore a nonsquarefree challenger below a
threshold \(T\) must satisfy the finite conditions
\[
K<T/2,
\qquad
K\text{ odd or }4\mid K,
\qquad
F_K(n)<T.
\tag{4}
\]

This is a complete factorization-and-final-block certificate. Only the kernels
passing (4) require the harder masked earlier-block analysis.

---

## 4. Exact certificate through \(n=14334\)

The exact table \(Q(n)\) was recomputed from every prime through \(7,000,000\),
giving
\[
Q(14334)=6,860,023.
\]
There are 88 record starts for \(Q(n)\) in \(8\le n\le14334\). Since both
\(Q(n)\) and \(2Q(n)\) are constant on each plateau while \(F_K(n)\) is
nondecreasing, it is sufficient to test the plateau starts.

All admissible kernels
\[
K\le6,860,022,
\qquad
K\text{ odd or }4\mid K
\]
were enumerated.

The old support-plus-totient lower bound left:

* 1,073 kernels capable of lying below \(Q(n)\) at some record start;
* 1,991 kernels capable of lying below \(2Q(n)\).

Replacing the totient estimate by the exact \(F_K(n)\) reduced the unions to:

### Possible residual kernels below \(Q(n)\)

\[
\boxed{K\in\{3,4,5,7,8,9,16\}.}
\tag{5}
\]

### Possible residual kernels below \(2Q(n)\)

\[
\boxed{K\in\{3,4,5,7,8,9,12,16,27,32\}.}
\tag{6}
\]

These are necessary-kernel lists, not candidate moduli and not proofs that any
listed kernel works. Extra squarefree support can still be present, and all
earlier block collision conditions remain to be checked.

Nevertheless, in the verified range, every nonsquarefree counterexample to
Sun's conjecture would have to arise from one of seven tiny residual kernels;
every counterexample to the stronger runner-up identity would have to arise
from one of ten.

---

## 5. Revised hard core

The problem now has three genuinely separate branches.

### A. Low-cut squarefree composites

Prove
\[
p_aQ_a(n)>Q(n)
\quad(2\le a<n),
\]
or the stronger \(\ge2Q(n)\).

### B. High–high squarefree composites

Prove
\[
p_np_{n+1}>Q(n),
\]
or the stronger
\[
p_np_{n+1}\ge2Q(n).
\]
This branch was missing from v4 and cannot be discarded without such an
inequality.

### C. Nonsquarefree composites

For each residual kernel surviving \(F_K(n)<Q(n)\), analyze the explicit
masked collision conditions in the earlier support blocks. In the exact range
through \(14334\), only
\[
K=3,4,5,7,8,9,16
\]
can matter for the primality conjecture.

The new residual-kernel theorem converts an unbounded factorization search
into a small-kernel masked-prime problem, while the repaired squarefree split
prevents the collision-depth reduction from being overstated.
