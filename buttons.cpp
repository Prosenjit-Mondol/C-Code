//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
int fact(int n){
    if (n<=1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
    
}
void solve(void)
{
    int n;
    cin>>n;
    ll r=fact(n);
    r++;
    cout<<r<<'\n';
}


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}