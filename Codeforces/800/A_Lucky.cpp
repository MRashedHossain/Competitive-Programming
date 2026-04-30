#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,p,q=6,q1,q2;
        vector<int>v;
        cin>>n;
        while (q--)
        {
            p=n%10;
            v.push_back(p);
            n=n/10;
        }
        q1=(v[0]+v[1]+v[2]);
        q2=(v[3]+v[4]+v[5]);
        if(q1==q2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        v.clear();
    }
}