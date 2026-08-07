# Structural progress on composite primorial discriminators

## Definitions

Let

\[
P_k=\prod_{r=1}^k p_r,
\qquad
L(m)=\max\{n:P_1,\ldots,P_n\text{ are pairwise distinct mod }m\}.
\]

Define the least prime and least composite discriminators by

\[
Q(n)=\min\{q\text{ prime}:L(q)\ge n\},
\qquad
C(n)=\min\{m\text{ composite}:L(m)\ge n\}.
\]

Then

\[
D(n)=\min(Q(n),C(n)).
\]

Sun's conjecture is equivalent to `Q(n) < C(n)` for every `n`.

---

## 1. Exact collision criterion

For `i<j`, put

\[
Q_{i,j}=P_j/P_i=\prod_{r=i+1}^j p_r.
\]

Since

\[
P_j-P_i=P_i(Q_{i,j}-1),
\]

and, with

\[
R_i=\gcd(m,P_i)=\prod_{\substack{q\mid m\\q\le p_i}}q,
\]

we have

\[
\gcd(P_i/R_i,m/R_i)=1,
\]

it follows that

\[
\boxed{P_i\equiv P_j\pmod m
\iff
m/R_i\mid Q_{i,j}-1.}
\]

If `q^a || m` and `q=p_s`, a collision is impossible whenever `i<s<=j`. Hence the prime-divisor indices of `m` are impermeable block boundaries.

---

## 2. Final-block unit bound

Write

\[
m=\prod_{h=1}^t q_h^{a_h},\qquad q_1<\cdots<q_t,
\]

and set

\[
q=q_t=P^+(m),\qquad r=\pi(q),\qquad K=m/\operatorname{rad}(m).
\]

For `i>=r`, define

\[
Y_i=P_i/\operatorname{rad}(m).
\]

Every `Y_i` is a unit modulo `K`, and for `r<=i<j`,

\[
P_i\equiv P_j\pmod m
\iff
Y_i\equiv Y_j\pmod K.
\]

There are only `phi(K)` units, so

\[
\boxed{L(m)\le \pi(P^+(m))+\varphi(m/\operatorname{rad}(m))-1.}
\tag{A}
\]

For squarefree `m`, this reduces to

\[
L(m)\le \pi(P^+(m)).
\]

---

## 3. Universal factor-four reduction

For every `i<j`, the quotient `Q_{i,j}` is odd. Therefore `Q_{i,j}-1` is even, while `P_i` is even, so

\[
\boxed{4\mid P_j-P_i\quad\text{for every }i<j.}
\]

Consequently, for odd `u`,

\[
\boxed{L(2u)=L(4u)=L(u).}
\tag{B}
\]

Thus a divisibility-minimal composite discriminator cannot have 2-adic valuation 1 or 2. A composite value of `D(n)` would have to be odd or divisible by 8.

---

## 4. Composite quarter bound

### Theorem

For every composite integer `m` other than `6,9,10`,

\[
\boxed{L(m)\le m/4.}
\tag{C}
\]

The three exceptions are

\[
L(6)=2,\qquad L(9)=3,\qquad L(10)=3.
\]

### Proof: odd moduli with at least two distinct prime factors

Let `q=P^+(m)` and `K=m/rad(m)`. Since `m` is odd and has at least two distinct prime divisors,

\[
\operatorname{rad}(m)\ge 3q,
\qquad
m\ge 3Kq.
\]

Also

\[
\pi(q)\le(q+1)/2,
\qquad
\varphi(K)\le K.
\]

Using (A),

\[
L(m)\le(q+1)/2+K-1.
\]

For `q>=5` and `K>=1`,

\[
(q+1)/2+K-1\le 3Kq/4\le m/4.
\]

### Proof: odd prime powers

Let `m=q^a`, where `q` is odd and `a>=2`. From (A),

\[
L(q^a)\le \pi(q)+q^{a-2}(q-1)-1.
\]

Using `pi(q)<=(q+1)/2`, this is at most

\[
(q-1)(q^{a-2}+1/2).
\]

For `q>=5`, this is at most `q^a/4`. For `q=3`, the same inequality holds for `a>=4`. The case `m=27` is checked exactly:

\[
P_1,\ldots,P_6\pmod{27}=2,6,3,21,15,6,
\]

so `L(27)=5<=27/4`. The remaining case `m=9` is the listed exception.

### Proof: moduli divisible by 4

If `m=2^a`, `a>=2`, then (A) gives

\[
L(m)\le\varphi(2^{a-1})=m/4.
\]

Suppose an odd prime divides `m`. Again write `K=m/rad(m)` and `q=P^+(m)`.

If `K=2`, then

\[
L(m)\le\pi(q)\le q\le m/4.
\]

If `K>=4`, then `rad(m)>=2q`, and

\[
L(m)\le q+K-1\le Kq/2\le m/4.
\]

### Proof: moduli congruent to 2 modulo 4

Write `m=2u`, with `u` odd. By (B), `L(m)=L(u)`.

If `u` is composite, the odd cases above apply, including the direct case `u=9`.

If `u=q` is prime, then `L(q)<=pi(q)`. For `q>=11`, `pi(q)<=(q-1)/2=m/4`; `q=7` is checked directly. The cases `q=3,5` give the exceptions `m=6,10`.

This completes the proof.

### Consequences

For every `n>=4`, any composite modulus discriminating `P_1,...,P_n` satisfies

\[
\boxed{m\ge4n.}
\tag{D}
\]

If `m` is odd and squarefree, then

\[
L(m)\le\pi(P^+(m))\le(P^+(m)+1)/2\le(m+3)/6,
\]

so

\[
\boxed{m\ge6n-3.}
\tag{E}
\]

---

## 5. A rigorous prime-escape bound

For fixed `n`, define

\[
H_n=\prod_{1\le i<j\le n}(Q_{i,j}-1).
\]

For a prime `q>p_n`, none of `P_1,...,P_n` is divisible by `q`, so

\[
q\text{ fails to discriminate }P_1,...,P_n
\iff q\mid H_n.
\]

For an interval of length `ell=j-i`,

\[
Q_{i,j}-1<p_{n+1}^{\ell}.
\]

Therefore `Q_{i,j}-1` has at most `ell-1` distinct prime divisors greater than `p_n`. Summing over all intervals,

\[
\sum_{\ell=1}^{n-1}(n-\ell)(\ell-1)=\binom n3.
\]

Hence at most `binom(n,3)` primes greater than `p_n` fail. Among the next `binom(n,3)+1` primes, at least one discriminates. Thus

\[
\boxed{Q(n)\le p_{n+\binom n3+1},}
\tag{F}
\]

and unconditionally

\[
\boxed{D(n)\le p_{n+\binom n3+1}.}
\]

This is only cubic-order and does not approach Sun's conjectured `D(n)<n^2`, but it is a proof rather than a heuristic.

---

## 6. Exact CRT-cover formulation

For each prime power `q^a`, define the collision set

\[
\mathcal C_{q^a}(n)=\{(i,j):1\le i<j\le n,\ q^a\mid P_j-P_i\}.
\]

If

\[
m=\prod_hq_h^{a_h},
\]

then

\[
\mathcal C_m(n)=\bigcap_h\mathcal C_{q_h^{a_h}}(n).
\]

Therefore `m` discriminates exactly when

\[
\boxed{\bigcap_h\mathcal C_{q_h^{a_h}}(n)=\varnothing.}
\tag{G}
\]

If `m=D(n)` is composite, every prime layer is essential. For each `q|m`, there is a private witness pair `(i_q,j_q)` satisfying

\[
m/q\mid P_{j_q}-P_{i_q},
\qquad
m\nmid P_{j_q}-P_{i_q}.
\]

Equivalently,

\[
v_q(P_{j_q}-P_{i_q})=v_q(m)-1
\]

and all other prime-power requirements of `m` are met. Private witnesses for distinct primes are necessarily distinct pairs.

This gives an exact weighted-set-cover or empty-intersection search formulation for finite certification.

---

## 7. Exact `3q` filtering identity

Let `q>3` be prime. Since the factor 3 creates a block boundary after `P_1`,

\[
\boxed{L(3q)=\max\{N:P_2,\ldots,P_N\text{ are pairwise distinct mod }q\}.}
\tag{H}
\]

Thus multiplication by 3 deletes every collision involving `P_1` while preserving all collisions entirely inside the tail. This explains the genuine CRT synergy at

\[
L(39)=6>L(13)=3.
\]

It also identifies `3q` as a natural hostile family for counterexample construction.

---

## 8. Strengthened computational conjecture

Define `Q(n)` and `C(n)` as above. Since `Q(n)` is odd for `n>=2`, (B) gives

\[
C(n)\le2Q(n).
\]

An exact scan through `m<=8,000,000` found

\[
\boxed{C(n)=2Q(n)\quad(8\le n\le9006).}
\]

The only exceptions through that range are

\[
\begin{array}{c|c|c}
n&Q(n)&C(n)\\\hline
3&5&9\\
4&11&21\\
6&23&39\\
7&29&49
\end{array}
\]

The cases `n=1,2,5` satisfy `C(n)=2Q(n)` as well.

This suggests the stronger conjecture

\[
\boxed{C(n)=2Q(n)\quad\text{for every }n\ge8.}
\tag{I}
\]

Conjecture (I) implies Sun's conjecture immediately and identifies the exact composite runner-up, not merely the winning prime.

Evidence status: reproducible single-implementation computational pass, not proof-checked independent verification.

---

## 9. Current counterexample constraints

A hypothetical composite value `m=D(n)` with `n>=4` must satisfy all of the following:

1. `m` is odd or `8|m`.
2. `m>=4n`.
3. If `m` is odd squarefree, `m>=6n-3`.
4. Every prime layer of `m` has a distinct private witness pair.
5. The prime-power collision sets have empty total intersection but every proper subcollection has nonempty intersection.
6. `m<Q(n)<=p_{n+binom(n,3)+1}`.

These conditions do not settle the conjecture, but they eliminate the simplest composite shapes and turn the remaining problem into a sharply specified CRT-intersection problem.
