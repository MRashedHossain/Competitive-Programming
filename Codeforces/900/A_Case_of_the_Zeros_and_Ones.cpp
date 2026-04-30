#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt1=0,cnt0=0;
    string s;
    cin>>n>>s;
    for (int i=0;i<n;i++){if (s[i]=='1')cnt1++;else cnt0++;}
    cout<<n-(2*min(cnt0,cnt1))<<endl;
}