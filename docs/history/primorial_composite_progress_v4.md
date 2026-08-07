# Composite primorial discriminators — structural progress v4

## 0. Definitions

Let

\[
P_k=\prod_{r=1}^k p_r,
\qquad
L(m)=\max\{n:P_1,\ldots,P_n\text{ are pairwise distinct modulo }m\}.
\]

Let

\[
Q(n)=\min\{q\text{ prime}:L(q)\ge n\}.
\]

For \(1\le a<n\), define

\[
Q_a(n)=\min\{q\text{ prime}:P_a,\ldots,P_n
\text{ are pairwise distinct modulo }q\}.
\]

Since a prime \(q=p_b<p_n\) makes \(P_b\equiv P_{b+1}\equiv0\pmod q\)
inside every suffix that begins no later than \(b\), one has

\[
Q_a(n)\ge p_n.
\]

---

## 1. Exact squarefree block consequence

Let an odd squarefree modulus have prime factors

\[
q_1<\cdots<q_t,
\qquad t\ge2,
\]

and write its second-largest prime as

\[
q_{t-1}=p_a,
\qquad q_t=q.
\]

If this modulus discriminates \(P_1,\ldots,P_n\), then necessarily
\(q\ge p_n\). Inside the final pre-\(q\) block, beginning when \(p_a\)
enters, every earlier squarefree factor is already present in both primorials.
Consequently the factor \(q\) alone must discriminate

\[
P_a,\ldots,P_n.
\]

Therefore

\[
q\ge Q_a(n)
\]

and hence

\[
\boxed{m\ge p_aQ_a(n).}
\tag{1}
\]

The earlier prime factors only increase the modulus. Thus the lemma

\[
\boxed{p_aQ_a(n)>Q(n)\quad(2\le a<n)}
\tag{2}
\]

would eliminate **all odd squarefree record holders**, not merely semiprimes.
The stronger form

\[
\boxed{p_aQ_a(n)\ge2Q(n)}
\tag{3}
\]

would place every nonredundant odd squarefree discriminator at or above the
trivial composite runner-up \(2Q(n)\).

This removes the previously proposed extra step “prove that the least odd
squarefree discriminator is semiprime.” That step is unnecessary.

---

## 2. Exact semiprime prefix obstruction

The lower bound \(p_aQ_a(n)\) need not itself be a working semiprime once the
cut index \(a\) is large: the early prefix can still collide.

For \(a\ge2\), define the finite exceptional set

\[
\mathcal B_a=
\left\{
q>p_a\text{ prime}:
\exists\,1\le i<j<a\text{ with }
 p_aq\mid Q_{i,j}-1
\right\}.
\tag{4}
\]

Also define

\[
\widehat Q_a(n)=
\min\left\{
q\ge p_n\text{ prime}:
P_a,\ldots,P_n\text{ are distinct mod }q,
\ q\notin\mathcal B_a
\right\}.
\tag{5}
\]

### Exact semiprime theorem

The least odd semiprime discriminator whose smaller factor is \(p_a\) is
exactly

\[
\boxed{p_a\widehat Q_a(n).}
\tag{6}
\]

### Proof

Let \(m=p_aq\), where \(p_a<q\) are odd primes and \(q\ge p_n\).

* If \(i<a\le j\), the pair crosses \(p_a\), so collision is impossible.
* If \(a\le i<j\le n\), the factor \(p_a\) has already entered and imposes
  no squarefree condition. Collision modulo \(m\) is therefore equivalent to
  collision modulo \(q\).
* If \(1\le i<j<a\), neither factor divides \(P_i\), so collision occurs
  exactly when
  \[
  p_aq\mid Q_{i,j}-1.
  \]

These are precisely the two requirements in (5).

### Sparsity of the prefix obstruction

One has the unconditional bound

\[
\boxed{|\mathcal B_a|\le\binom{a-2}{3}.}
\tag{7}
\]

For a pair of span \(\ell=j-i\),

\[
0<Q_{i,j}-1<p_a^\ell.
\]

After one factor \(p_a\) has been consumed, this number can have at most
\(\ell-2\) distinct prime divisors greater than \(p_a\). There are
\(a-1-\ell\) prefix pairs of span \(\ell\). Hence

\[
|\mathcal B_a|
\le
\sum_{\ell=3}^{a-2}(a-1-\ell)(\ell-2)
=
\binom{a-2}{3}.
\]

Thus, for each fixed cut \(a\), the difference between \(Q_a(n)\) and the
exact semiprime quantity \(\widehat Q_a(n)\) is controlled by a fixed finite
set independent of \(n\).

In particular, once

\[
p_n>\max\mathcal B_a,
\]

one has

\[
\widehat Q_a(n)=Q_a(n).
\]

---

## 3. Collision-depth reformulation

For a prime \(q\ge p_n\), define its collision depth by

\[
c_q(n)=1+
\max\left\{
 i:\exists j>i\text{ with }P_i\equiv P_j\pmod q
\right\},
\tag{8}
\]

with \(c_q(n)=1\) when no collision exists.

Then

\[
P_a,\ldots,P_n\text{ are distinct modulo }q
\iff
c_q(n)\le a.
\tag{9}
\]

Consequently

\[
Q_a(n)=\min\{q\ge p_n\text{ prime}:c_q(n)\le a\}.
\tag{10}
\]

The squarefree runner-up inequality (3) is equivalent to the pointwise claim

\[
\boxed{
q\,p_{c_q(n)}\ge2Q(n)
\quad\text{for every prime }p_n\le q<Q(n).
}
\tag{11}
\]

This is an exact collision-graph version of the squarefree hard core:
small primes below \(Q(n)\) must have a collision whose left endpoint is deep
enough that the cheapest prime-index cut costs at least \(2Q(n)/q\).

For the original primality conjecture, the right side of (11) may be weakened
from \(2Q(n)\) to \(Q(n)\).

---

## 4. Finite cut-off for squarefree challengers

Since \(Q_a(n)\ge p_n\), any squarefree branch satisfying

\[
p_aQ_a(n)<2Q(n)
\]

must have

\[
\boxed{p_a<\frac{2Q(n)}{p_n}.}
\tag{12}
\]

Therefore only finitely many cut indices can matter for each \(n\):

\[
a\le \pi\!\left(\frac{2Q(n)}{p_n}\right).
\]

For the weaker record-holder target \(p_aQ_a(n)\le Q(n)\), replace \(2Q(n)\)
by \(Q(n)\).

In the exact computation through \(n=14334\), the largest observed value of
\(Q(n)/p_n\) was

\[
\frac{6860023}{131581}\approx52.13536
\]

at \(n=12291\). Hence only cuts with \(p_a<104.271\), namely \(a\le27\),
could possibly challenge \(2Q(n)\) in that entire verified range.

---

## 5. Kernel-support refinement for nonsquarefree moduli

Let

\[
q=P^+(m)=p_r,
\qquad
K=\frac{m}{\operatorname{rad}(m)}.
\]

The final-block state-space bound gives

\[
n\le r+\varphi(K)-1.
\tag{13}
\]

There is an additional constraint omitted by the cruder sieve:
all prime divisors of \(K\) also divide \(\operatorname{rad}(m)\). Therefore

\[
P^+(K)\le q
\]

and

\[
r\ge \pi(P^+(K)).
\]

Define

\[
R_K(n)=
\max\left\{
\pi(P^+(K)),\ n-\varphi(K)+1
\right\}.
\tag{14}
\]

Then necessarily

\[
q\ge p_{R_K(n)}.
\tag{15}
\]

### Odd mixed-factor case

If \(m\) is odd and has at least two distinct prime factors, then
\(\operatorname{rad}(m)\ge3q\), and therefore

\[
\boxed{
m\ge3Kp_{R_K(n)}.
}
\tag{16}
\]

### Multiples of 8 with an odd factor

If \(8\mid m\) and \(m\) has an odd prime factor, then
\(\operatorname{rad}(m)\ge2q\), so

\[
\boxed{
m\ge2Kp_{R_K(n)}.
}
\tag{17}
\]

These improve the earlier bounds that used only
\(r\ge n-\varphi(K)+1\). They remain state-space bounds, however, and can be
very loose because the primorial walk often repeats far before filling the
whole unit group modulo \(K\).

---

## 6. Exact two-prime-power block criterion

Let

\[
m=s^e q,
\qquad
s=p_a<q=p_b,
\qquad e\ge1.
\]

For \(i<j\), the exact collision requirements are:

1. **Prefix:** if \(i<j<a\), then
   \[
   P_i\equiv P_j\pmod m
   \iff
   s^eq\mid Q_{i,j}-1.
   \]

2. **Crossing the first cut:** if \(i<a\le j\), collision is impossible.

3. **Middle block:** if \(a\le i<j<b\), then
   \[
   P_i\equiv P_j\pmod m
   \iff
   s^{e-1}q\mid Q_{i,j}-1.
   \]

4. **Crossing the second cut:** if \(i<b\le j\), collision is impossible.

5. **Final block:** if \(b\le i<j\), then
   \[
   P_i\equiv P_j\pmod m
   \iff
   s^{e-1}\mid Q_{i,j}-1.
   \]

This exactly explains the isolated computational challenger families
\(3^2q\) and \(2^eq\): the repeated small prime supplies a fixed collision
mask, while the large prime only has to separate the middle block edges that
survive that mask.

When \(q\ge p_n\), the final block has at most one relevant term. The least
working \(q\) is then the least prime at least \(p_n\) avoiding an explicit
masked product of interval factors selected by the conditions
\(s^e\mid Q_{i,j}-1\) in the prefix and
\(s^{e-1}\mid Q_{i,j}-1\) in the middle block.

---

## 7. Extended exact computation

A fresh parallel scan performed the following two tasks independently:

1. computed \(Q(n)\) from every prime \(q\le7,000,000\), obtaining
   \[
   Q(14334)=6,860,023;
   \]
2. tested every nonredundant composite
   \[
   m\le13,720,045=2Q(14334)-1,
   \]
   where “nonredundant” means \(m\) is odd or \(8\mid m\).

The scan tested

\[
7,681,956
\]

such composites and found no \(m\) and \(n\ge8\) satisfying

\[
L(m)\ge n,
\qquad
m<2Q(n).
\]

Therefore the strengthened runner-up identity has now been checked through

\[
\boxed{C(n)=2Q(n)\qquad(8\le n\le14334).}
\tag{18}
\]

Together with the known small exceptions, the complete exception set in this
range remains

\[
n=3,4,6,7.
\]

This is computational evidence, not a proof. The verifier uses exact modular
arithmetic and a complete modulus scan over the stated interval.

---

## 8. Current proof targets

### Squarefree target

Prove either

\[
p_aQ_a(n)>Q(n)
\]

for every \(2\le a<n\), which eliminates all squarefree composite record
holders, or the stronger

\[
p_aQ_a(n)\ge2Q(n),
\]

which proves the runner-up lower bound for every squarefree composite.

Equivalently, prove the collision-depth inequality (11).

### Nonsquarefree target

Replace the coarse final-block quantity \(\varphi(K)\) by a rigorous upper
bound for the actual self-avoiding length of the consecutive-prime
multiplicative walk modulo \(K\), while retaining the kernel-support condition
\(P^+(K)\le q\).

### Two-prime-power target

Use the exact criterion in Section 6 to prove that the savings obtained by the
mask \(s^{e-1}\) can never compensate for the multiplier \(s^e\) below
\(2Q(n)\).

---

## 9. Honest boundary

The squarefree side is now reduced to a pointwise collision-depth inequality.
The nonsquarefree side is reduced to residual kernels and explicit masked
interval products. Neither remaining inequality has been proved.

The current genuinely new structural facts are:

* the exact semiprime prefix obstruction and its cubic finite bound;
* the observation that the shifted inequality eliminates all squarefree
  composites, making a separate semiprime-envelope lemma unnecessary;
* the kernel-support refinement involving \(P^+(K)\);
* the exact two-prime-power block criterion;
* the complete computational extension of \(C(n)=2Q(n)\) through \(n=14334\).
