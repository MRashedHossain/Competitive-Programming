#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,flag=0,ans=101;
        string s;
        cin>>s;
        n=s[s.size()-1]-'0';
 
        if (n%2==0){cout<<"0"<<endl;continue;}
        for (int i=0; i<s.size(); i++)
        {
            n=s[i]-'0';
            if (n%2==0)
            {
                ans=i;
                if (ans==0)break;
                //break;
            }
        }
        if (ans==101 )cout<<"-1"<<endl;
        else if (ans==0 && s.size()>1)cout<<"1"<<endl;
        else if (ans==s.size()-1)cout<<"0"<<endl;
        else cout<<"2"<<endl;
    }
}