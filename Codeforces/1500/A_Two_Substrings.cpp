#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int ab=0,ba=0;
    for (int i=s.size()-1; i>=1; i--)
    {
        if (s[i-1]=='A' && s[i]=='B')
        {
            if (ba!=1)i--;
            ba=1;
        }
        else if (s[i-1]=='B' && s[i]=='A')
        {
            if (ab!=1)i--;
            ab=1;
        }
    }
    if (ab==1 && ba==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 
///BACFAB
///ABABAB
///ABAXXXAB
int main()
{
    solve();
}