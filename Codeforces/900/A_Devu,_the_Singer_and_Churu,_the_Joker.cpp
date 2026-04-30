#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n,d;cin>>n>>d;
    vector<int> v(n);
    int sum = 0,ans = 0;
    for(auto &i:v)cin>>i;
    for(int i:v)sum += i;
    if(sum+((n-1)*10) > d)cout<<-1<<endl;
    else{
        ans += (n-1)*2;
        ans += (d - (sum+((n-1)*10)))/5;
        cout<<ans<<endl;
    }
 
}
 
int main()
{
    int tc=1;
    //cin>>tc;
    while(tc--)solve();
}
 