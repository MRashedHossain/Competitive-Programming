#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p,q,r,s,t,ot;
    int flag=0;
    cin>>ot;
    cin>>p>>q>>r>>s>>t;
    if (p[0]==ot[0] || p[1]==ot[1])flag++;
    else if (q[0]==ot[0] || q[1]==ot[1])flag++;
    else if (r[0]==ot[0] || r[1]==ot[1])flag++;
    else if (s[0]==ot[0] || s[1]==ot[1])flag++;
    else if (t[0]==ot[0] || t[1]==ot[1])flag++;
    if (flag==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}