#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        string s,k;
        cin>>k>>s;
        vector <int> v;
        int ans=0;
        for (int l=0; l<s.size(); l++)
        {
            for (int j=0; j<k.size(); j++)
            {
                if (s[l]==k[j])
                {
                    v.push_back(j+1);
                    break;
                }
            }
        }
        for (int i=0; i<(v.size()-1); i++)ans=ans+abs(v[i]-v[i+1]);
        cout<<ans<<endl;
    }
}