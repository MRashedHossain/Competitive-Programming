#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,k;
        vector<int> v,w;
        cin>>n>>k;
        int a[n],b[n];
        for (int j=0; j<n; j++)
        {
            cin>>a[j];
            v.push_back(a[j]);
        }
        for (int j=0; j<n; j++)
        {
            cin>>b[j];
            w.push_back(b[j]);
        }
        for (int j=0; j<v.size(); j++)
        {
            for (int i=0; i<v.size(); i++)
            {
                if (k>=v[i])
                {
                    k=k+w[i];
                    //v.erase(v.begin()+i);
                    //w.erase(w.begin()+i);
                    v[i]=0;
                    w[i]=0;
                }
            }
        }
        cout<<k<<endl;
    }
}