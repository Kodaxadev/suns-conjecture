#include <bits/stdc++.h>
using namespace std;
int main(int argc,char**argv){
 int M=argc>1?atoi(argv[1]):10000000;
 int S=max(5000000,M+100);
 vector<bool> isp(S+1,true); isp[0]=isp[1]=false; vector<int> primes;
 for(int i=2;i<=S;i++) if(isp[i]){primes.push_back(i); if(1LL*i*i<=S) for(long long j=1LL*i*i;j<=S;j+=i) isp[(int)j]=false;}
 vector<int> seen(M+1,0); int stamp=0;
 vector<int> Q(1,0),C(1,0); int qmax=0,cmax=0,maxL=0;
 vector<pair<int,int>> strict; int running=0; vector<pair<int,int>> compties;
 for(int m=2;m<=M;m++){
   ++stamp; long long x=1; int L=0; bool done=false;
   for(int p:primes){x=x*(p%m)%m;int r=(int)x;if(seen[r]==stamp){done=true;break;}seen[r]=stamp;++L;}
   if(!done){cerr<<"insufficient primes at m="<<m<<" L="<<L<<"\n";return 2;}
   maxL=max(maxL,L);
   bool prime=isp[m];
   if(prime && L>qmax){if((int)Q.size()<=L)Q.resize(L+1);for(int n=qmax+1;n<=L;n++)Q[n]=m;qmax=L;}
   if(!prime && L>cmax){if((int)C.size()<=L)C.resize(L+1);for(int n=cmax+1;n<=L;n++)C[n]=m;cmax=L;}
   if(L>running){running=L;strict.push_back({m,L});} else if(L==running&&!prime) compties.push_back({m,L});
 }
 int upto=min(qmax,cmax), firstbad=-1; vector<tuple<int,int,int>> exceptions;
 for(int n=1;n<=upto;n++) if(C[n]!=2*Q[n]){exceptions.push_back({n,Q[n],C[n]});if(n>=8&&firstbad<0)firstbad=n;}
 cout<<"M="<<M<<" maxL="<<maxL<<" qmax="<<qmax<<" cmax="<<cmax<<" strict="<<strict.size()<<" composite_record_ties="<<compties.size()<<"\n";
 cout<<"C(n)=2Q(n) checked through n="<<upto<<"; first failure n>=8: "<<firstbad<<"\n";
 cout<<"all exceptions:";for(auto [n,q,c]:exceptions)cout<<" "<<n<<":"<<q<<":"<<c;cout<<"\n";
 cout<<"last 30 strict records:";for(int i=max(0,(int)strict.size()-30);i<(int)strict.size();i++)cout<<" "<<strict[i].first<<":"<<strict[i].second;cout<<"\n";
 cout<<"composite record ties:";for(auto [m,l]:compties)cout<<" "<<m<<":"<<l;cout<<"\n";
}
