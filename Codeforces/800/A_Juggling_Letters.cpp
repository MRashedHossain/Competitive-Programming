#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        set <char> ss;
        //vector <char> v;
        int n,ans,flag=0;
        cin>>n;
        string s[n],t;
        for (int i=0; i<n; i++)
        {
            cin>>s[i];
            //for (int j=0; j<s[i].size(); j++)ss.insert(s[j]);
            if (i==0)continue;
            else s[0]=s[0]+s[i];
        }
        t=s[0];
        //copy(ss.begin(),ss.end(),back_insert(v));
        //for (int i=0; i<v.size(); i++)cout<<v[i]<< " ";
        //cout<<t<<endl;
        for (int i=0; i<t.size(); i++)ss.insert(t[i]);
        //for (int i=0; i<ss.size(); i++)cout<<ss[i]<< " ";
        //copy(ss.begin(),ss.end(),back_insert(v));
        vector <char> v{ss.begin(),ss.end()};
        //for (int i=0; i<v.size(); i++)cout<<v[i]<< " ";
        for (int i=0; i<v.size(); i++)
        {
            ans=0;
            for (int j=0; j<t.size(); j++)
            {
                if (v[i]==t[j])ans++;
            }
            if (ans%n!=0)
            {
                flag=1;
                break;
            }
        }
        if (flag==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}