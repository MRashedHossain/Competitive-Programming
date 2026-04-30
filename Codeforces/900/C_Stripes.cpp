#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
void solve()
{
    ///cout<<endl;
    string s[10];
    int n;
    for (int i=0; i<8; i++)cin>>s[i];
    for (int i=0; i<8; i++)
    {
        int ans=0;
        for (int j=0; j<8; j++)
        {
            if (s[i][j] != 'R')ans++;
        }
        if (ans==0)
        {
            cout<<"R"<<endl;
            return;
        }
    }
    for (int i=0; i<8; i++)
    {
        int ans=0;
        for (int j=0; j<8; j++)
        {
            if (s[j][i] != 'B')ans++;
        }
        if (ans==0)
        {
            cout<<"B"<<endl;
            return;
        }
    }
}
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
 
 