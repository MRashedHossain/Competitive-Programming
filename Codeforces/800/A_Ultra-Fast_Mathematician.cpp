#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string p,q,r;
    cin>>p>>q;
    r=p;
    for (int i=0; i<p.size(); i++)
    {
        if (p[i]==q[i])r[i]='0';
        else r[i]='1';
       // cout<<r[i];
    }
    cout<<r;
}