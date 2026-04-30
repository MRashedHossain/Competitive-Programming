#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        string s;
        cin>>s;
        cout<<s[0];
        for (int i=1; i<s.size()-1; i++)
        {
            if (i%2==0)continue;
            else cout<<s[i];
        }
        cout<<s[s.size()-1];
        cout<<endl;
    }
}
 