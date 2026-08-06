#include <bits/stdc++.h>
using namespace std;
int main(int argc,char**argv){int M=argc>1?atoi(argv[1]):500000;int A=argc>2?atoi(argv[2]):8;int S=max(M+100,2000000);vector<bool> isp(S+1,true);isp[0]=isp[1]=false;vector<int> ps;for(int i=2;i<=S;i++)if(isp[i]){ps.push_back(i);if(1LL*i*i<=S)for(long long j=1LL*i*i;j<=S;j+=i)isp[j]=false;}
 vector<vector<int>> Qa(A+1,vector<int>(2)); vector<int> mx(A+1,1);
 vector<vector<int>> seen(A+1, vector<int>(M+1)); int stamp=0;
 for(int qi=0;qi<(int)ps.size() && ps[qi]<=M;qi++){
  int q=ps[qi], b=qi+1; ++stamp; vector<char> active(A+1,0); vector<int>L(A+1); int activeCount=0; long long x=1;
  for(int i=1;i<=b+1;i++){
   x=x*(ps[i-1]%q)%q; int r=x;
   if(i<=A){active[i]=1;L[i]=i-1;activeCount++;}
   for(int a=1;a<=A && a<=i;a++) if(active[a]){
    if(seen[a][r]==stamp){active[a]=0;activeCount--;}
    else {seen[a][r]=stamp;L[a]=i;}
   }
   if(i>=A && activeCount==0)break;
  }
  for(int a=1;a<=A && a<=b;a++) if(L[a]>mx[a]){if((int)Qa[a].size()<=L[a])Qa[a].resize(L[a]+1);for(int n=mx[a]+1;n<=L[a];n++)Qa[a][n]=q;mx[a]=L[a];}
 }
 int N=mx[1];cout<<"M="<<M<<" A="<<A<<" Qmax="<<N<<"\n";long long B=1;
 for(int a=1;a<=A;a++){
  if(a>=2)B*=ps[a-1];int upto=min(mx[1],mx[a]);double minSemi=1e100,minPrefix=1e100;int argS=0,argP=0;
  for(int n=max(8,a);n<=upto;n++){double rs=1.0*ps[a-1]*Qa[a][n]/Qa[1][n];double rp=1.0*B*Qa[a][n]/Qa[1][n];if(rs<minSemi){minSemi=rs;argS=n;}if(rp<minPrefix){minPrefix=rp;argP=n;}}
  cout<<"a="<<a<<" p_a="<<ps[a-1]<<" B="<<B<<" max="<<mx[a]<<" min_pQa/Q="<<setprecision(12)<<minSemi<<"@"<<argS<<" min_BQa/Q="<<minPrefix<<"@"<<argP<<"\n";
 }
}
