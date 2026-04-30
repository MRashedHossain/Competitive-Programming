#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    string s,t;
    cin>>s>>t;
    if (s==t)
    {
        cout<<"="<<endl;
        return;
    }
    else
    {
        if (s[s.size()-1]==t[t.size()-1])
        {
            int count_sx=0,count_tx=0;
            if(s[s.size()-1]=='L')
            {
                for(int i=0; i<s.size(); i++)if(s[i]=='X')count_sx++;
                for(int i=0; i<t.size(); i++)if(t[i]=='X')count_tx++;
                if(count_sx>count_tx)cout<<">"<<endl;
                else cout<<"<"<<endl;
            }
            else
            {
                for(int i=0; i<s.size(); i++)if(s[i]=='X')count_sx++;
                for(int i=0; i<t.size(); i++)if(t[i]=='X')count_tx++;
                if(count_sx>count_tx)cout<<"<"<<endl;
                else cout<<">"<<endl;
            }
        }
        else
        {
            if(s[s.size()-1]=='L')cout<<">"<<endl;
            else if (s[s.size()-1]=='M')
            {
                if(t[t.size()-1]=='S')cout<<">"<<endl;
                ///else if(t[t.size()-1]=='L')cout<<"<"<<endl;
                else cout<<"<"<<endl;
            }
            else cout<<"<"<<endl;
        }
    }
}
 
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}