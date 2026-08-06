# Hostile audit of the LongCat blank-folder attempt

LongCat reconstructed much of the elementary framework but proposed three false headline claims.

## 1. False strengthened residual-kernel theorem

Claimed:

\[
m\ge K\operatorname{rad}(K)p_{n-\varphi(K)+1}.
\]

Counterexample: \(m=36\), \(K=6\), \(n=3\). Since \(L(36)=3\), the claimed bound would require \(36\ge108\). The proof double-counted a prime already present in \(\operatorname{rad}(K)\).

A valid coarse correction is piecewise. Let

\[
t=\max\{1,n-\varphi(K)+1\},\qquad b=\pi(P^+(K)).
\]

Then

\[
m\ge
\begin{cases}
K\operatorname{rad}(K),&t\le b,\\
K\operatorname{rad}(K)p_t,&t>b.
\end{cases}
\]

The latest v5 note replaces this coarse bound by the exact residual-walk quantity \(F_K(n)\).

## 2. False collision-depth lemma

Claimed:

\[
c_q(n)\ge\pi(q).
\]

Counterexample: for \(n=8\), modulo \(19\),

\[
P_1,\ldots,P_8\equiv2,6,11,1,11,10,18,0.
\]

The sole collision starts at index \(3\), so under

\[
c_q(n)=1+\max\{i:\exists j>i, P_i\equiv P_j\pmod q\},
\]

we have \(c_{19}(8)=4<8=\pi(19)\).

The proof made a quantifier error: one collision does not imply divisibility of the gcd of all suffix differences.

## 3. False divisible-by-eight reduction

Claimed that powers of two beyond \(4\) were free. Counterexamples:

\[
L(56)=5>L(7)=2,
\]

and

\[
L(136)=8, 136<8Q(8)=296.
\]

Only

\[
L(u)=L(2u)=L(4u)
\]

is valid for odd \(u\).

## Secondary revision errors

The revised LongCat report still:

- misstated \(c_{19}(8)\) as \(6\) instead of \(4\);
- gave an incomplete proof of the quarter bound;
- omitted the exceptional \(27\) case in the generic prime-power estimate;
- incorrectly asserted \(\pi(q)+\varphi(K)-1\le q-1\) for odd mixed-factor moduli;
- claimed an \(a\ge5\) lemma would eliminate all squarefree composites, leaving \(a=2,3,4\) untreated;
- conflated the shifted-discriminator lower bound with the separate early-prefix obstruction set.

## Benchmark conclusion

The model produced a coherent research-shaped report from a blank folder, but it required an external hostile referee to reject attractive invalid arguments and to detect errors introduced during revision.
