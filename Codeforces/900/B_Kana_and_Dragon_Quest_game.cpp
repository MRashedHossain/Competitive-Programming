#include<bits/stdc++.h>
using namespace std;
 
bool solve()
{
    int x,n,m;
    cin>>x>>n>>m;
    for (int i=0; i<n; i++)
    {
        if(x<=10)break;
        x/=2;
        x+=10;
    }
    for (int i=0; i<m; i++)
    {
        x-=10;
        if (x<=0)return true;
    }
    return false;
}
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        cout<<(solve()?"YES":"NO")<<endl;
    }
    return 0;
}