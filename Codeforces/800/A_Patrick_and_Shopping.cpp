#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
void solve()
{
 
}
 
int main()
{
    ll shop1,shop2,shop12;
    cin>>shop1>>shop2>>shop12;
    ll ans1 = shop1+shop2+shop12;
    ll ans2 = (2*shop1)+(2*shop2);
    ll ans3 = (2*shop1)+(2*shop12);
    ll ans4 = (2*shop2)+(2*shop12);
    ll ans = min (ans1,min(ans2,min(ans3,ans4)));
    cout<<ans<<endl;
 
 
    return 0;
}
 
 