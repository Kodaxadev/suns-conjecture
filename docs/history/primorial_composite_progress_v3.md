# Composite primorial discriminators — structural progress v3

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

For \(1\le a<n\), define the shifted prime discriminator

\[
Q_a(n)=\min\{q\text{ prime}:P_a,\ldots,P_n
\text{ are pairwise distinct modulo }q\}.
\]

For \(n>a\), necessarily \(Q_a(n)\ge p_n\).

---

## 1. Stronger factor-sensitive size bounds

Let \(m\) be composite, let

\[
q=P^+(m)=p_r,
\qquad
K=\frac{m}{\operatorname{rad}(m)}.
\]

The final-block argument gives

\[
L(m)\le \pi(q)+\varphi(K)-1.
\tag{1}
\]

### 1.1 Odd composites with at least two distinct prime factors

Let \(s=P^-(m)\). Apart from \(m=15,21,35\),

\[
\boxed{L(m)\le \frac{m}{2s}.}
\tag{2}
\]

#### Squarefree case

Here \(K=1\), so \(L(m)\le\pi(q)\). For \(q\ge11\),

\[
\pi(q)\le\frac{q-1}{2}.
\]

Since \(m\ge sq\),

\[
L(m)\le\frac{q-1}{2}<\frac{sq}{2s}\le\frac m{2s}.
\]

The squarefree cases with \(q<11\) reduce to \(15,21,35,105\). Directly,
\(15,21,35\) violate (2), while \(L(105)\le\pi(7)=4<105/6\).

#### Nonsquarefree case

Now \(K\ge3\), \(q\ge5\), and \(m\ge sKq\). From (1),

\[
L(m)\le \frac{q+1}{2}+K-1=\frac{q-1}{2}+K.
\]

Since

\[
q-1\le K(q-2)
\qquad(K\ge3,q\ge5),
\]

we get

\[
L(m)\le\frac{Kq}{2}\le\frac m{2s}.
\]

### Consequences

If \(3\mid m\), then, except for \(15,21\),

\[
L(m)\le \frac m6.
\]

If \(P^-(m)\ge5\), then, except for \(35\),

\[
L(m)\le \frac m{10}.
\]

Thus among odd composites with several distinct prime factors, the only
structurally competitive family has smallest prime factor \(3\).

---

### 1.2 Odd prime powers with base at least 5

For \(m=q^a\), \(q\) odd prime, \(a\ge2\),

\[
L(q^a)\le \pi(q)+q^{a-2}(q-1)-1.
\tag{3}
\]

Using (3), together with direct checks for \(25,125,49\), one obtains

\[
\boxed{L(q^a)\le\frac{q^a}{6}
\qquad(q\ge5,a\ge2).}
\tag{4}
\]

Details:

- \(q\ge11\): the case \(a=2\) is the worst one under (3), and
  \((3q-5)/2\le q^2/6\).
- \(q=7\): check \(49\) directly; (3) proves all \(a\ge3\).
- \(q=5\): check \(25,125\) directly; (3) proves all \(a\ge4\).

The powers \(3^a\) remain a separate family. The elementary state-space bound
only yields

\[
L(3^a)\le 1+2\cdot3^{a-2}.
\tag{5}
\]

It does not prove a universal \(3^a/6\) bound.

---

### 1.3 Moduli divisible by 8 and by an odd prime

Suppose \(8\mid m\) and \(m\) has an odd prime factor. Then \(K\) is divisible
by \(4\), so

\[
\varphi(K)\le\frac K2.
\]

Also \(\operatorname{rad}(m)\ge2q\), hence \(m\ge2Kq\). Therefore

\[
L(m)\le\frac{q+1}{2}+\frac K2-1
=\frac{q+K-1}{2}.
\]

For \(K\ge4,q\ge3\),

\[
2(q-1)\le K(q-2),
\]

and consequently

\[
\boxed{L(m)\le\frac m8.}
\tag{6}
\]

Pure powers of two retain only the earlier bound

\[
L(2^a)\le 2^{a-2}=\frac{2^a}{4}.
\tag{7}
\]

### Candidate classification for \(n\ge8\)

A hypothetical composite least discriminator must be one of:

1. \(3^a\), with \(3^a\ge \frac92(n-1)\) from (5);
2. an odd composite not a power of \(3\), with \(m\ge6n\);
3. a pure power of two, with \(m\ge4n\);
4. a multiple of \(8\) having an odd factor, with \(m\ge8n\).

If the odd candidate has smallest prime at least \(5\), then \(m\ge10n\),
apart from the irrelevant small modulus \(35\).

---

## 2. Exact peeling lemma

Let \(s=p_a=P^-(m)\), the smallest prime divisor of \(m\). For \(i\ge a\), put

\[
T_i=\frac{P_i}{s}.
\]

Then:

- if \(i<a\le j\), \(P_i\not\equiv P_j\pmod m\), because the pair crosses \(s\);
- if \(a\le i<j\),

\[
P_i\equiv P_j\pmod m
\iff
T_i\equiv T_j\pmod{m/s}.
\tag{8}
\]

Thus the smallest prime factor performs two exact operations:

1. it separates the prefix \(P_1,\ldots,P_{a-1}\) from the tail;
2. it replaces the tail problem by a normalized tail modulo \(m/s\).

This is an exact recursion, not a heuristic. Composite CRT synergy is therefore
"prefix isolation plus a cheaper discriminator for a normalized tail."

For \(s=3\), the prefix has one term, so every odd multiple of \(3\) is governed
entirely by the normalized tail after \(P_1\).

---

## 3. Exact gcd of a primorial suffix

For \(1\le a<n\), define

\[
G_{a,n}=\gcd\{P_j-P_i:a\le i<j\le n\}.
\]

Then

\[
\boxed{
G_{a,n}
=P_a\,\gcd(p_{a+1}-1,p_{a+2}-1,\ldots,p_n-1).
}
\tag{9}
\]

### Proof

Every suffix difference is divisible by \(P_a\). After division by \(P_a\),
the pairs \((a,j)\) give \(Q_{a,j}-1\), so the total gcd cannot exceed

\[
g=\gcd_{j>a}(Q_{a,j}-1).
\]

For arbitrary \(a\le i<j\),

\[
\frac{P_j-P_i}{P_a}
=Q_{a,i}(Q_{i,j}-1)
=Q_{a,j}-Q_{a,i},
\]

which is divisible by \(g\). Hence the gcd after division by \(P_a\) is exactly
\(g\).

Finally, using

\[
Q_{a,k+1}-1-p_{k+1}(Q_{a,k}-1)=p_{k+1}-1,
\]

one obtains

\[
g=\gcd(p_{a+1}-1,\ldots,p_n-1).
\]

For \(a=1\), this recovers

\[
G_{1,n}=4
\qquad(n\ge2).
\]

This explains exactly why adjoining factors \(2\) or \(4\) never changes the
original collision relation.

More generally, factors already contained in \(G_{a,n}\) are free in the
corresponding suffix state. This gives a canonical way to strip redundant
prime powers during recursive composite searches.

---

## 4. Shifted prime discriminators

For \(q>p_n\), define

\[
H_{a,n}=\prod_{a\le i<j\le n}(Q_{i,j}-1).
\]

Then

\[
q\text{ discriminates }P_a,\ldots,P_n
\iff q\nmid H_{a,n}.
\tag{10}
\]

Let \(N=n-a+1\), the number of terms in the suffix. The same large-prime-factor
count used for the original sequence gives

\[
\boxed{
p_n\le Q_a(n)
\le p_{\,n+\binom{N}{3}+1}.
}
\tag{11}
\]

The upper bound follows because at most \(\binom N3\) primes greater than
\(p_n\) can divide the suffix collision product.

### One-row deletion recursion

We have

\[
H_{a,n}=H_{a+1,n}R_{a,n},
\qquad
R_{a,n}=\prod_{j=a+1}^n(Q_{a,j}-1).
\tag{12}
\]

A prime \(q>p_n\) that becomes admissible when \(P_a\) is deleted must divide
\(R_{a,n}\). The number of such newly admissible primes is at most

\[
\boxed{\binom{n-a}{2}.}
\tag{13}
\]

Indeed, the factor with span \(\ell=j-a\) has at most \(\ell-1\) distinct prime
divisors greater than \(p_n\), and

\[
\sum_{\ell=1}^{n-a}(\ell-1)=\binom{n-a}{2}.
\]

Thus deleting one primorial changes the prime-admissibility set only through
one explicitly identified row of interval products.

---

## 5. Exact prefix-isolating families

Let

\[
B_a=\prod_{r=2}^a p_r=\frac{P_a}{2},
\qquad 2\le a<n.
\]

For a prime \(q\ge p_n\),

\[
\boxed{
B_aq\text{ discriminates }P_1,\ldots,P_n
\iff
q\text{ discriminates }P_a,\ldots,P_n.
}
\tag{14}
\]

The consecutive factors \(3,5,\ldots,p_a\) make every earlier block a
singleton. Inside the remaining block beginning at \(a\), all of \(B_a\) is
already present in each primorial, so only the factor \(q\) remains active.

Therefore the least discriminator in this exact family is

\[
\boxed{B_aQ_a(n).}
\tag{15}
\]

The case \(a=2\) is the previously identified family

\[
3Q_2(n).
\]

---

## 6. Odd semiprime lower envelope

Let \(m=p_aq\), where \(p_a<q\) are odd primes, and suppose \(m\) discriminates
\(P_1,\ldots,P_n\). The factor \(p_a\) separates the prefix from the suffix,
but inside the suffix the factor \(q\) must work by itself. Consequently,

\[
q\ge Q_a(n),
\]

and hence

\[
\boxed{m\ge p_aQ_a(n).}
\tag{16}
\]

Thus every odd semiprime challenger satisfies

\[
\boxed{
m\ge
\min_{2\le a<n}p_aQ_a(n).
}
\tag{17}
\]

Conversely, \(p_aQ_a(n)\) is an actual discriminator whenever its early prefix
has no collision. A simple sufficient condition is

\[
p_aQ_a(n)>P_{a-1}-2,
\tag{18}
\]

because \(P_{a-1}-2\) is the largest difference among
\(P_1,\ldots,P_{a-1}\).

For \(n\ge8\), condition (18) is automatic for \(a=2,3,4\). Therefore

\[
3Q_2(n),\qquad5Q_3(n),\qquad7Q_4(n)
\]

are three exact semiprime candidate families, not merely lower bounds.

A sufficient lemma eliminating every odd semiprime below the trivial runner-up
would be

\[
\boxed{
p_aQ_a(n)\ge2Q(n)
\quad(2\le a<n,\ n\ge8).}
\tag{19}
\]

The weaker inequality \(p_aQ_a(n)>Q(n)\) would already eliminate odd
semiprime record holders.

---

## 7. Collision-graph interpretation

For a prime \(q\ge p_n\), define a graph \(G_q(n)\) on vertices
\(1,\ldots,n\), with an edge \(ij\) when

\[
P_i\equiv P_j\pmod q.
\]

Then \(p_aq\) deletes every edge crossing the cut

\[
\{1,\ldots,a-1\}\mid\{a,\ldots,n\}.
\]

It cannot repair an edge contained wholly in the suffix. Thus \(p_aq\) can
work only when the suffix induced subgraph is empty, exactly the condition
\(q\ge Q_a(n)\).

Examples:

- \(q=13\) has the edge \((1,4)\); the cut at \(a=2\) deletes it, giving
  \(3\cdot13=39\).
- For \(n=52\), \(q=271\) has the unique collision \((3,32)\); the cut at
  \(a=4\) deletes it, giving \(7\cdot271=1897\).

This gives a concrete counterexample-construction strategy: find a small prime
whose collision graph is emptied by a cheap prime-index cut. The computations
show that this mechanism is real, but so far its cost remains above the prime
record.

---

## 8. Computational reconnaissance

### Shift hierarchy

An exact prime scan through \(q\le1,000,000\), covering \(n\le4123\), computed
\(Q_a(n)\) for \(1\le a\le16\).

For every tested \(n\ge8\) and every \(2\le a\le16\),

\[
p_aQ_a(n)>2Q(n).
\]

The smallest observed ratio was

\[
\frac{3Q_2(10)}{Q(10)}
=\frac{87}{41}
\approx2.121951.
\]

The lower semiprime envelope was generated by \(3Q_2(n)\) throughout the range,
except for

\[
52\le n\le54,
\]

where

\[
7Q_4(n)=7\cdot271=1897
<3\cdot641=1923.
\]

### Nonredundant composite envelope

Call a composite nonredundant when it is odd or divisible by \(8\); this removes
the automatic copies \(2u\) and \(4u\).

An exact scan through \(m\le4,000,000\), complete through \(n=5031\), found
that the least nonredundant composite was of the form \(3q\) except for four
short ranges:

- \(n=21,22\): \(343=7^3\);
- \(n=52,53,54\): \(1897=7\cdot271\);
- \(239\le n\le245\): \(19161=3^2\cdot2129\);
- \(1173\le n\le1175\): \(329696=2^5\cdot10303\).

Across the complete range, the least nonredundant composite satisfied

\[
\frac{C_*(n)}{Q(n)}\ge\frac{87}{41}>2.
\]

This is computational evidence only. It suggests that the trivial composite
\(2Q(n)\) is not just the least composite, but is separated from every genuine
CRT construction by a positive margin.

---

## 9. Current sharp targets

### Semiprime shifted-domination lemma

Prove

\[
p_aQ_a(n)\ge2Q(n)
\qquad(2\le a<n,\ n\ge8).
\]

This eliminates every odd semiprime below \(2Q(n)\).

### Squarefree-semiprime envelope lemma

Prove that the least odd squarefree discriminator is always a semiprime. Then
it is governed by the shifted hierarchy (16)--(19).

### Residual-prime-power lemma

Use the peeling recursion (8), together with the free-factor gcd (9), to prove
that no state with a residual repeated prime factor can produce a modulus below
\(2Q(n)\). This targets the isolated observed families \(7^3\), \(3^2q\), and
\(2^eq\).

### Full peeling-cost lemma

For every smallest-prime branch \(s=p_a\), prove that the cost \(s\) of
isolating the prefix is at least the possible reduction in the least residual
discriminator of the normalized tail. A sufficiently strong version would give

\[
C(n)=2Q(n)
\qquad(n\ge8),
\]

and therefore settle Sun's conjecture.

---

## 10. Honest boundary

The new inequalities and exact reductions do not prove that a shifted prime
discriminator cannot fall by a factor large enough to compensate for its cut
prime. That is now the central unproved step.

The problem has nevertheless been reduced from arbitrary CRT synergy to a
structured competition among:

1. prime-index cuts;
2. shifted prime discriminators \(Q_a(n)\);
3. a small number of repeated-prime residual states under the peeling lemma.
