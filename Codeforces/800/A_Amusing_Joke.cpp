#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans=0;
    string s,t,u;
    cin>>s>>t>>u;
    s=s+t;
    sort (s.begin(),s.end());
    sort (u.begin(),u.end());
    /*
    for (int i=0; i<s.size(); i++)cout<<s[i]<<" ";
    cout<<endl;
    for (int i=0; i<u.size(); i++)cout<<u[i]<<" ";
    cout<<endl;
    */
    if (s.size()!=u.size())cout<<"NO"<<endl;
    else{
        for (int i=0; i<s.size(); i++){if (s[i]!=u[i])ans=1;}
        if (ans==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
 
    /*
    //cout<<s<<endl;
    set <char> ss;
    set <char> uu;
    for (int i=0; i<s.size(); i++)ss.insert(s[i]);
    for (int i=0; i<u.size(); i++)uu.insert(s[i]);
    vector<char> w{ss.begin(),ss.end()};
    vector<char> x{uu.begin(),uu.end()};
    for (int i=0;i<w.size();i++)cout<<w[i]<<" ";
    cout<<endl;
    for (int i=0;i<x.size();i++)cout<<x[i]<<" ";
    //if(ss.size()==uu.size())cout<<"YES"<<endl;
    //else cout<<"NO"<<endl;
    */
}
 