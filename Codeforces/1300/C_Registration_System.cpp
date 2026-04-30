#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    map<string,int> mp;
    int tc;
    cin>>tc;
    while (tc--)
    {
        string s;
        cin>>s;
        if (mp[s]==0) {
            cout<<"OK"<<endl;
            mp[s]++;
        }
        else {
            cout<<s<<mp[s]<<endl;
            mp[s]++;
        }
    }
}