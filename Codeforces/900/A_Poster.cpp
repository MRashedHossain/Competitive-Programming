#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " = " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
 
void solve(int tc)
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(n-k > k-1)
    {
        while(k>1)
        {
            cout<<"LEFT"<<endl;
            k--;
        }
        for(int i=0; i<n; i++){
            cout<<"PRINT "<<s[i]<<endl;
            cout<<((i == n-1?" ":"RIGHT"))<<endl;
        }
    }
    else
    {
        while(k<n)
        {
            cout<<"RIGHT"<<endl;
            k++;
        }
        for(int i=n-1; i>=0; i--){
            cout<<"PRINT "<<s[i]<<endl;
            cout<<((i == 0?" ":"LEFT"))<<endl;
        }
    }
}
signed main()
{
    RASHED
    int TC = 1;
    //cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
/**
CASES:
 
*/