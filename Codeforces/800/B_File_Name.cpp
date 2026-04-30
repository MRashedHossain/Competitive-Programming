#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,mx=0;
    string s;
    cin>>n>>s;
    for (int i=0; i<n; i++)
    {
        if (s[i]=='x')ans++;
        else ans=0;
        if (ans==3)
        {
            mx++;
            ans--;
        }
    }
    cout<<mx<<endl;
}
/**
10
xxxxxxxxxx
0
*/