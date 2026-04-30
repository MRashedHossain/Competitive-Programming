#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
bool solve()
{
    ll red,blue,dif,cmp;
    cin>>red>>blue>>dif;
    if (dif>=abs(red-blue))return true;
    else
    {
        ll mx = max(red,blue);
        ll mn = min(red,blue);
        if(mx%mn)cmp=(mx/mn)+1;
        else cmp=(mx/mn);
        cmp--;
        ///cout<<mx<<" "<<mn<<" "<<cmp<<endl;
        if (cmp>dif)return false;
        else return true;
    }
}
 
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        cout<<(solve()?"YES":"NO")<<endl;
    }
    return 0;
}