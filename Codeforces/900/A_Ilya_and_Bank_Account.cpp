#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if (s[0]!='-')cout<<s;
    else
    {
        if (s.size()==3 && s[2]=='0')cout<< "0"<<endl;
        else if (s[s.size()-1]>=s[s.size()-2])
        {
            for (int i=0; i<s.size()-1; i++)cout<<s[i];
        }
        else
        {
            for (int i=0; i<s.size()-2; i++)cout<<s[i];
            cout<<s[s.size()-1];
        }
    }
}