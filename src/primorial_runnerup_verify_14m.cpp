#include <bits/stdc++.h>
#include <omp.h>
using namespace std;
int main(){
 const int PRIME_MAX=7000000; const int S=14000050;
 vector<char> isp(S+1,1); isp[0]=isp[1]=0; vector<int> ps;
 for(int i=2;i<=S;i++) if(isp[i]){ps.push_back(i); if(1LL*i*i<=S) for(long long j=1LL*i*i;j<=S;j+=i) isp[(int)j]=0;}
 vector<int> seenQ(PRIME_MAX+1); int stamp=0,qmax=0; vector<int> Q(2,0);
 for(int q:ps){ if(q>PRIME_MAX)break; ++stamp; long long x=1; int L=0; for(int p:ps){x=x*(p%q)%q;int r=(int)x;if(seenQ[r]==stamp)break;seenQ[r]=stamp;++L;} if(L>qmax){Q.resize(L+1);for(int n=qmax+1;n<=L;n++)Q[n]=q;qmax=L;}}
 int M=2*Q[qmax]-1; cerr<<"qmax="<<qmax<<" Q="<<Q[qmax]<<" M="<<M<<" threads="<<omp_get_max_threads()<<"\n";
 atomic<int> minBad(M+1); minBad.store(M+1); atomic<long long> tested(0);
 #pragma omp parallel
 {
   vector<int> seen(M+1,0); int st=0;
   #pragma omp for schedule(dynamic,2000)
   for(int m=8;m<=M;m++){
     if(isp[m])continue; int v2=__builtin_ctz((unsigned)m); if(!(m&1) && v2<3)continue;
     ++st; long long x=1; int L=0;
     for(int k=0;k<qmax;k++){int p=ps[k];x=x*(p%m)%m;int r=(int)x;if(seen[r]==st)break;seen[r]=st;++L;}
     tested.fetch_add(1, memory_order_relaxed);
     int n=min(L,qmax); if(n>=8 && m < 2*Q[n]) {int cur=minBad.load(); while(m<cur&&!minBad.compare_exchange_weak(cur,m)){} }
   }
 }
 cout<<"tested="<<tested.load()<<" minBad="<<minBad.load()<<" qmax="<<qmax<<" M="<<M<<"\n";
}
