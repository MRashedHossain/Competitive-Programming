#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    int i=0,j=0,ans=1;
    cin>>s>>t;
    while (true)
    {
        if (s[i]==t[j])
        {
            ans++;
            i++;
            j++;
        }
        else j++;
        if (j==t.size())break;
    }
    cout<<ans<<endl;
}