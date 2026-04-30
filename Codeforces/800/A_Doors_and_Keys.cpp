#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
bool solve()
{
    string s;
    int rkey=0,gkey=0,bkey=0;
    cin>>s;
    for (int i=0; i<6; i++)
    {
        if (s[i]=='r')rkey++;
        if (s[i]=='g')gkey++;
        if (s[i]=='b')bkey++;
        if (s[i]=='R')rkey--;
        if (s[i]=='G')gkey--;
        if (s[i]=='B')bkey--;
        if (rkey<0 || bkey<0 || gkey<0)return false;
    }
    return true;
 
}
 
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        cout<<(solve()?"YES":"NO")<<endl;
    }
    return 0;
}
 
 