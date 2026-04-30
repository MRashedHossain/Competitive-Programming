#include<bits/stdc++.h>
using namespace std;
 
bool solve()
{
    string s;
    cin>>s;
    int zero=0,one=0;
    for (int i=0; i<s.size(); i++)
    {
        if (s[i]=='0')zero++;
        else one++;
    }
    ///cout<<zero<< " "<<one<<endl;
    if (zero == 0 || one==0)return false;
    if ((min(zero,one))%2)return true;
    else return false;
}
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        cout<<(solve()?"DA":"NET")<<endl;
    }
}
 