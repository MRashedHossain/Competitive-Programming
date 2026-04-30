#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    vector<int> v;
    while (tc--)
    {
        set<char> s;
        string t;
        int n,p;
        cin>>n>>t;
        for (int k=0;k<t.size();k++)s.insert(t[k]);
           p=t.size()-s.size();
        //cout<<(s.size()*2)+p<<endl;
        v.push_back((s.size()*2)+p);
    }
    for (int i=0;i<v.size();i++)cout<<v[i]<<endl;
}