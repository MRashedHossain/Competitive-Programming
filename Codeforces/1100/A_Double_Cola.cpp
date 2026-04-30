#include<bits/stdc++.h>
using namespace std;
 
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
 
#define show(x) cout << #x << " : " << x << endl
#define inf (int)1e17
#define maxn 100010
 
#define F first
#define S second
bool Sheldon(int n)
{
    int now = 1;
    while(true)
    {
        int spos = ((now-1)*5LL)+1,epos = ((now-1)*5LL)+now;
        if(spos>n && epos>n)return false;
        if(n>=spos && n<=epos)return true;
        now*=2;
    }
}
bool Leonard(int n)
{
    int now = 1;
    while(true)
    {
        int spos = ((now-1)*5LL)+1+(1*now),epos = ((now-1)*5LL)+now+(1*now);
        if(spos>n && epos>n)return false;
        if(n>=spos && n<=epos)return true;
        now*=2;
    }
}
bool Penny(int n)
{
    int now = 1;
    while(true)
    {
        int spos = ((now-1)*5LL)+1+(2*now),epos = ((now-1)*5LL)+now+(2*now);
        if(spos>n && epos>n)return false;
        if(n>=spos && n<=epos)return true;
        now*=2;
    }
}
bool Rajesh(int n)
{
    int now = 1;
    while(true)
    {
        int spos = ((now-1)*5LL)+1+(3*now),epos = ((now-1)*5LL)+now+(3*now);
        if(spos>n && epos>n)return false;
        if(n>=spos && n<=epos)return true;
        now*=2;
    }
}
bool Howard(int n)
{
    int now = 1;
    while(true)
    {
        int spos = ((now-1)*5LL)+1+(4*now),epos = ((now-1)*5LL)+now+(4*now);
        if(spos>n && epos>n)return false;
        if(n>=spos && n<=epos)return true;
        now*=2;
    }
}
void solve(int tc)
{
    int n;
    cin>>n;
    if(Sheldon(n))cout<<"Sheldon"<<endl;
    if(Leonard(n))cout<<"Leonard"<<endl;
    if(Penny(n))cout<<"Penny"<<endl;
    if(Rajesh(n))cout<<"Rajesh"<<endl;
    if(Howard(n)) cout<<"Howard"<<endl;
}
signed main()
{
    RASHED
    int TC = 1;
    ///cin>>TC;
    for(int i=1; i<=TC; i++)solve(i);
    return 0;
}
 
 
 
 