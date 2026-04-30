#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    vector <int> v;
    while (tc--)
    {
        long long int a,b,k,ans=0;
        cin>>a>>b>>k;
        if (k%2==0)ans=(a*(k/2)-b*(k/2));
        else ans=a*((k+1)/2)-b*(k/2);
        //v.push_back(ans);
        cout<<ans<<endl;
    }
    //for (int i=0;i<v.size();i++)cout<<v[i]<<endl;
}