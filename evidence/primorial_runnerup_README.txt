Exact scan of primorial discriminator records and the least prime/composite discriminator functions.

Files:
- primorial_runnerup_scan.cpp
- primorial_runnerup_scan_m8e6.txt
- primorial_composite_progress.md

Build:
  g++ -O3 -std=c++17 primorial_runnerup_scan.cpp -o primorial_runnerup_scan

Run:
  ./primorial_runnerup_scan 8000000 > primorial_runnerup_scan_m8e6.txt

The scanner computes L(m) exactly by modular primorial iteration until the first repeated residue.
It separately records:
- Q(n): least prime q with L(q)>=n;
- C(n): least composite m with L(m)>=n;
- strict running records;
- composite ties with the running record.

Observed through m<=8,000,000:
- all strict record moduli are prime;
- the only composite running-record ties are 9, 10, and 22;
- C(n)=2Q(n) for every 8<=n<=9006;
- the only exceptions below 8 are n=3,4,6,7.

This is computational evidence only. The mathematical note contains independent rigorous lemmas, including the composite quarter bound and the cubic prime-escape bound.
