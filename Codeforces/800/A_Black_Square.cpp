#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[8],p,sum=0;
    string s;
    cin>>a[1]>>a[2]>>a[3]>>a[4]>>s;
    for (int i=0;i<s.size();i++)
    {
        p=s[i]-'0';
        sum+=a[p];
    }
    cout<<sum<<endl;
}