#include<bits/stdc++.h>
using namespace std;
 
string solve()
{
    int n;
    string s,t;
    cin>>n>>s;
    t=s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='U')t[i]='D';
        else if (s[i]=='D')t[i]='U';
    }
    return t;
}
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        cout<<solve()<<endl;
    }
}