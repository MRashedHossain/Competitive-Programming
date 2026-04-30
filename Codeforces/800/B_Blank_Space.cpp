#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,x,ans=0;
        vector<int> v;
        cin>>n;
        for (int i=0; i<n; i++)
        {
            cin>>x;
            if (x==0)ans++;
            else ans=0;
            v.push_back(ans);
        }
        sort(v.begin(),v.end());
        int p=v.size()-1;
        cout<<v[p]<<endl;
    }
}
 