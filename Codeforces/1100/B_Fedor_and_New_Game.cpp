#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,a,ans=0;
    cin>>n>>m>>k;
    vector <int> v[1010],ts;
    for (int i=0; i<=m; i++)
    {
        cin>>a;
        while (a>0)
        {
            v[i].push_back(a%2);
            a=a/2;
        }
        for (int j=v[i].size(); j<33; j++)v[i].push_back(0);
        ///reverse(v[i].begin(),v[i].end());
    }
    /**
        for (int i=0; i<=m; i++)
        {
            for (int j=0; j<v[i].size(); j++)cout<<v[i][j];
            cout<<endl;
        }
    */
    for (int i=0; i<m; i++)
    {
        int flag=0;
        for (int j=0; j<33; j++)
        {
            if (v[m][j] != v[i][j])flag++;
        }
        if (flag<=k)ans++;
    }
    cout<<ans<<endl;
    return 0;
}
/**
7 3 1
8
5
111
18
1000
101
1101111
10001
*/