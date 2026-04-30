#include<bits/stdc++.h>
using namespace std;
 
bool solve()
{
    int n,zero=0,one=0;
    string s;
    cin>>n>>s;
    if (n<3)
    {
        if (s=="00" || s=="11")return false;
        return true;
    }
    else return false;
}
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        cout<<(solve()?"YES":"NO")<<endl;
    }
}