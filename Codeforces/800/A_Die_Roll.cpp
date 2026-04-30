#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,w,d,mx;
    cin>>y>>w;
    if (y>=w)mx=y;
    else mx=w;
    d=7-mx;
    if (d%6==0)cout<<d/6<<"/"<<"1"<<endl;
    else if (d%3==0)cout<<d/3<<"/"<<"2"<<endl;
    else if (d%2==0)cout<<d/2<<"/"<<"3"<<endl;
    else cout<<d<<"/"<<"6"<<endl;
}