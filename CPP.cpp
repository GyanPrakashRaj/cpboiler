#include <bits/stdc++.h>
using namespace std ;
#define  ll  long long int
#define  ull unsigned long long int
#define  f float
#define  d double
#define  ld long double
#define EPS 1e-6
void init()
{
    cin.tie(0) ;
    cin.sync_with_stdio(0) ;
}
ll n = 1000000 ; 
vector<ll> divisors (n+9,0) ;
int div(int n1)
{
  int cnt = 0 ;
  for(int i = 1 ;i*i<=n1;i++)
  {
      if(n1%i == 0 )
       cnt += 2 ;
  }
    return cnt ;
}
int main() {
    init();
for(int i = 1 ;i<=n;i++)
{
    divisors[i] = div(i) ;
}
int t , n1 , n2;
cin>>t ;
for(int i = 1 ;i<=t;i++)
{
    cin>>n1>>n2 ;
    cout<<divisors[__gcd(n1,n2)] ;
    if(i!=t) cout<<"\n" ;
}
     return 0;
}