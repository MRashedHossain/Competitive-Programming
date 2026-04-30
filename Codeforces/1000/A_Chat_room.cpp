#include<bits/stdc++.h>
using namespace std;
int main()
{
    string t="hello",s;
    cin>>s;
    int ans=0,p=0;
    for (int i=0;i<t.size();i++)
    {
        for (int j=p;j<s.size();j++)
        {
            if (t[i]==s[j]){ans++;p=j+1;break;}
        }
    }
    if (ans==5)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}