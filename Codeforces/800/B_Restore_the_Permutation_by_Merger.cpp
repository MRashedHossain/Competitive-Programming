#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        vector<int> v;
        cin>>n;
        int a[2*n];
        for (int k=0; k<2*n; k++)cin>>a[k];
        for (int j=0; j<(2*n)-1; j++)
        {
            for (int i=j+1; i<2*n; i++)
            {
                if (a[j]==a[i])
                {
                    v.push_back(a[j]);
                    break;
                }
            }
        }
        for (int l=0; l<v.size(); l++)cout<<v[l]<<" ";
        cout<<endl;
    }
}