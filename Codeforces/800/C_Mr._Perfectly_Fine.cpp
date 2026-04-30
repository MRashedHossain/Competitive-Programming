#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        vector<int> p,q,r;
        int n;
        cin>>n;
        for (int i=0; i<n; i++)
        {
            int x;
            string s;
            cin>>x>>s;
            if (s=="11")r.push_back(x);
            else if (s=="10")p.push_back(x);
            else if (s=="01")q.push_back(x);
        }
        sort(p.begin(),p.end());
        sort(q.begin(),q.end());
        sort(r.begin(),r.end());
        if (r.size()==0)
        {
            if (p.size()==0 || q.size()==0)cout<<"-1"<<endl;
            else cout<<p[0]+q[0]<<endl;
        }
        else
        {
            if (p.size()==0 || q.size()==0)cout<<r[0]<<endl;
            else
            {
                if (p[0]+q[0]>r[0])cout<<r[0]<<endl;
                else cout<<p[0]+q[0]<<endl;
            }
        }
    }
}
 