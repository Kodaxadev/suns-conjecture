#include <bits/stdc++.h>
using namespace std;
int main(int argc,char**argv){
 int M= argc>1?atoi(argv[1]):1000000;
 int S=5000000;
 vector<bool> isp(S+1,true); isp[0]=isp[1]=false;
 vector<int> primes;
 for(int i=2;i<=S;i++) if(isp[i]){primes.push_back(i); if(1LL*i*i<=S) for(long long j=1LL*i*i;j<=S;j+=i) isp[(int)j]=false;}
 vector<int> seen(M+1,0); int stamp=0;
 int best=-1; vector<pair<int,int>> strict; vector<pair<int,int>> compties;
 vector<int> Lsmall(M+1);
 for(int m=2;m<=M;m++){
   ++stamp; long long x=1; int L=0;
   bool done=false;
   for(int k=0;k<(int)primes.size();k++){
     x = (x * (primes[k]%m)) % m;
     int r=(int)x;
     if(seen[r]==stamp){done=true; break;}
     seen[r]=stamp; L++;
     if(L>m){cerr<<"impossible m="<<m<<"\n";return 2;}
   }
   if(!done){cerr<<"not enough primes m="<<m<<" L="<<L<<"\n"; return 3;}
   Lsmall[m]=L;
   if(L>best){best=L; strict.push_back({m,L});}
   else if(L==best){
      bool prime = m<=S?isp[m]:false;
      if(!prime) compties.push_back({m,L});
   }
 }
 cerr<<"M="<<M<<" best="<<best<<" strict="<<strict.size()<<" composite_ties="<<compties.size()<<"\n";
 cout<<"strict:"; for(auto [m,l]:strict) cout<<" "<<m<<":"<<l; cout<<"\n";
 cout<<"composite_ties:"; for(auto [m,l]:compties) cout<<" "<<m<<":"<<l; cout<<"\n";
 vector<int> qs={3,13,39,23}; for(int q:qs) if(q<=M) cout<<"L("<<q<<")="<<Lsmall[q]<<"\n";
}
