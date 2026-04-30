#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a,b,x,y,d,ans1,ans2;
 
void clean()
{
    a=0;
    b=0;
    x=0;
    y=0;
    d=0;
    ans1=0;
    ans2=0;
    return;
}
 
ll find_ans1()
{
    ll m,p;
    if (abs(a-x)>=d)m = (a-d)*b;
    else
    {
        p = (a-x);
        p=d-p;
        if (abs(b-y)>=p)m = ((b-p)*x);
        else m = x*y;
    }
    return m;
}
ll find_ans2()
{
    ll n,q;
    if (abs(b-y)>=d)n = (b-d)*a;
    else
    {
        q = b-y;
        q=d-q;
        if (abs(a-x)>=q)n = (a-q)*y;
        else n = x*y;
    }
    return n;
}
 
ll solve()
{
 
    cin>>a>>b>>x>>y>>d;
    ans1 = find_ans1();
    ans2 = find_ans2();
    ///cout<<ans1<<" "<<ans2<<endl;
    ll ans = min(ans1,ans2);
    return ans;
}
 
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        clean();
        cout<<solve()<<endl;
    }
    return 0;
}