//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int n,k;
    cin>>n>>k;
    if (k!=0)
    {
        for (int i = 1; i <=n; i++)
        {
            cout<<i<<" ";
        }
        
    }
    else
    {
        for (int i = n; i>0; i--)
        {
            cout<<i<<" ";
        }
    }
    cout<<'\n';
    
}


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}