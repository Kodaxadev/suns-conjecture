# Composite primorial discriminators — audit corrections and next reductions

## Definitions

Let

\[
P_k=\prod_{r=1}^k p_r,
\qquad
L(m)=\max\{n:P_1,\ldots,P_n\text{ are pairwise distinct modulo }m\}.
\]

Let

\[
Q(n)=\min\{q\text{ prime}:L(q)\ge n\},
\qquad
C(n)=\min\{m\text{ composite}:L(m)\ge n\}.
\]

Then \(D(n)=\min(Q(n),C(n))\).

---

## 1. Corrections to the external audits

### Grok table typo at \(n=7\)

The values

\[
Q(7)=29,
\qquad
C(7)=49
\]

do **not** satisfy \(C(7)=2Q(7)\), since \(49\ne58\). Thus \(n=7\) is one of the four exceptions

\[
n=3,4,6,7.
\]

### Grok's note about \(Q(n)\le p_n\) is false

If \(q=p_s\), then

\[
P_s\equiv P_{s+1}\equiv0\pmod q.
\]

Therefore

\[
L(q)\le s=\pi(q).
\]

Consequently,

\[
L(q)\ge n\implies q\ge p_n,
\]

and hence

\[
\boxed{Q(n)\ge p_n.}
\]

So \(Q(n)<p_n\) cannot occur.

Combined with the previously proved upper bound,

\[
\boxed{
p_n\le Q(n)\le p_{\,n+\binom n3+1}.
}
\]

---

## 2. Exact factorization sieve for a composite challenger

Let \(m\) be composite with \(L(m)\ge n\). Put

\[
q=P^+(m)=p_r,
\qquad
K=\frac{m}{\operatorname{rad}(m)}.
\]

The final-block unit bound gives

\[
n\le r+\varphi(K)-1,
\]

so necessarily

\[
\boxed{\varphi(K)\ge n-r+1.}
\tag{S1}
\]

This gives the following class-specific necessary conditions.

### Odd squarefree

Here \(K=1\), so \(r\ge n\), hence \(q\ge p_n\). Since an odd squarefree composite has another factor at least \(3\),

\[
\boxed{m\ge3p_n.}
\tag{S2}
\]

Therefore an odd squarefree counterexample to Sun's conjecture would require

\[
Q(n)>3p_n.
\]

### Odd nonsquarefree with at least two distinct prime factors

Here \(K>1\) is odd, so

\[
K\ge \max\{3,n-r+2\}.
\]

Also \(\operatorname{rad}(m)\ge3q\). Thus

\[
\boxed{
m\ge3p_r\max\{3,n-r+2\}.
}
\tag{S3}
\]

When \(r<n\), this simplifies to

\[
\boxed{m\ge3p_r(n-r+2).}
\]

### Odd prime powers

If \(m=q^a\), \(a\ge2\), then \(K=q^{a-1}\), and (S1) becomes

\[
\boxed{
q^{a-2}(q-1)\ge n-r+1.
}
\tag{S4}
\]

Thus every odd-prime-power challenger lies in an explicit finite list once \(n\) and an upper cutoff are fixed.

### Divisible by \(8\), with an odd prime factor

Now \(K\) is divisible by \(4\), and

\[
\varphi(K)\le K/2.
\]

Hence

\[
K\ge\max\{4,2(n-r+1)\}.
\]

Since \(\operatorname{rad}(m)\ge2q\),

\[
\boxed{
m\ge2p_r\max\{4,2(n-r+1)\}.
}
\tag{S5}
\]

When \(r<n\), this gives

\[
\boxed{m\ge4p_r(n-r+1).}
\]

### Pure powers of two

For \(m=2^a\),

\[
L(2^a)\le2^{a-2}.
\]

Therefore

\[
\boxed{
L(2^a)\ge n\implies2^a\ge4n.
}
\tag{S6}
\]

More precisely, the least possible pure power of two is the first \(2^a\ge4n\).

These inequalities do not prove the conjecture, but they form a rigorous factorization sieve: every proposed composite challenger must pass one of (S2)–(S6).

---

## 3. Exact structure of the dangerous \(3q\) family

Let \(q=p_s>3\). For every \(n\le s\),

\[
\boxed{
P_1,\ldots,P_n\text{ are distinct modulo }3q
\iff
P_2,\ldots,P_n\text{ are distinct modulo }q.
}
\tag{T1}
\]

### Proof

- \(P_1=2\not\equiv0\pmod3\), while every \(P_i\), \(i\ge2\), is divisible by \(3\). Thus \(P_1\) can never collide modulo \(3q\) with a later primorial.
- For \(2\le i<j\le n\), both primorials are divisible by \(3\), and \(q\ne3\). Hence

\[
3q\mid P_j-P_i
\iff
q\mid P_j-P_i.
\]

This proves (T1).

Define the shifted length

\[
\Lambda_2(q)=\max\{n\le s:P_2,\ldots,P_n\text{ are pairwise distinct modulo }q\}.
\]

Since \(P_s\) and \(P_{s+1}\) are both zero modulo \(3q\), (T1) gives the exact formula

\[
\boxed{L(3q)=\Lambda_2(q).}
\tag{T2}
\]

By contrast,

\[
L(q)=\Lambda_1(q),
\]

where \(\Lambda_1(q)\) includes \(P_1\).

Therefore the CRT synergy in \(3q\) has a precise meaning:

> multiplying by \(3\) deletes all collision constraints involving \(P_1\), but it does not repair any collision wholly inside \(P_2,P_3,\ldots\).

In particular,

\[
L(3q)>L(q)
\]

can occur only when the earliest collision modulo \(q\) involves \(P_1\).

Example: for \(q=13\),

\[
P_1\equiv P_4\pmod{13},
\]

while the shifted sequence beginning at \(P_2\) remains distinct through the index of \(13\). Hence \(L(13)=3\) but \(L(39)=6\).

---

## 4. General semiprime block formula

Let \(p=p_a<q=p_b\) be odd primes. The modulus \(pq\) splits the indices into

\[
1,\ldots,a-1;
\qquad
a,\ldots,b-1;
\qquad
b,b+1,\ldots.
\]

Pairs in different blocks are automatically separated. Inside the middle block,

\[
P_i\equiv P_j\pmod{pq}
\iff
P_i\equiv P_j\pmod q.
\]

Thus a semiprime \(pq\) can outperform \(q\) only by deleting collisions that cross the index \(a\), or by using the extra factor \(p\) to repair a collision wholly before \(a\). It cannot repair a collision wholly inside the middle block.

For \(p=3\), the initial block has one term, so no early collision is possible and formula (T2) is exact without qualifications.

---

## 5. Computational clue, not theorem

In the exact scan through \(m\le4,000,000\), the first twenty composites closest to the previous global record were all of the form

\[
3q
\]

with \(q\) prime. The first examples were

\[
141=3\cdot47,
\quad
5241=3\cdot1747,
\quad
57711=3\cdot19237,
\quad
5853=3\cdot1951.
\]

This does not prove that \(3q\) is the only dangerous family. It does justify treating the shifted-prime problem as the first focused subproblem.

---

## 6. Focused lemmas worth attacking next

### Shifted-prime domination lemma

For every \(n\ge8\), let

\[
Q_2(n)=\min\{q\text{ prime}:P_2,\ldots,P_n\text{ are pairwise distinct modulo }q\}.
\]

Prove

\[
\boxed{Q(n)<3Q_2(n).}
\tag{L1}
\]

By (T1), this would exclude every modulus of the form \(3q\) from being a record.

### Semiprime domination lemma

If \(p<q\) are odd primes and \(pq\) discriminates the first \(n\) primorials, prove that some prime \(r<pq\) also discriminates them.

This would eliminate every odd squarefree semiprime, including the empirically strongest challenger family.

### Factorization-sieve completion lemma

Show that every modulus satisfying one of (S3)–(S6) and lying below \(2Q(n)\) has a proper prime or semiprime replacement with at least the same \(L\)-value.

Together with the semiprime lemma, this would prove

\[
C(n)=2Q(n)
\]

for \(n\ge8\).

---

## Current evidence status

- Collision criterion and block decomposition: **proved**.
- Factor-four reduction: **proved**.
- Composite quarter bound: **proved**.
- Prime bracket \(p_n\le Q(n)\le p_{n+\binom n3+1}\): **proved**.
- Factorization sieve (S1)–(S6): **proved**.
- Exact \(3q\) shifted-sequence formula: **proved**.
- \(C(n)=2Q(n)\) through the scanned range: **computationally reported; independently reproducible artifact available**.
- Shifted-prime domination and semiprime domination: **open**.
- Sun's conjecture: **open**.
