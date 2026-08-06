Exact scan of L(m) for 2 <= m <= 1,000,000.

Definition:
L(m) is the largest n such that the first n primorials are pairwise distinct modulo m.

Build:
g++ -O3 -std=c++17 primorial_L_scan.cpp -o primorial_L_scan

Run:
./primorial_L_scan 1000000 > primorial_L_scan_m1e6.txt

The program reports every strict record modulus and every composite modulus tying the running record.
It also reports L(3), L(13), L(39), and L(23).

Observed result:
- all 74 strict record moduli through 1,000,000 are prime;
- the only composite ties are 9, 10, and 22;
- L(3)=2, L(13)=3, L(39)=6, L(23)=6.

This is computational evidence only, not a proof of Sun's conjecture.
