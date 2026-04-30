#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;
    int a[200];
    cin>>s;
    // for (int i=0;i<s.size();i++)
    int i=0,x=0;
    while(i<s.size())
    {
        if (s[i]=='.')
        {
            cout<<"0";
            x++;
            i++;
            continue;
        }
        else if (s[i]=='-'    && s[i+1]=='.')
        {
            cout<<"1";
            x++;
            i=i+2;
            continue;
        }
        else if(s[i]=='-' && s[i+1]=='-')
        {
            cout<<"2";
            x++;
            i=i+2;
            continue;
        }
    }
 
}
 