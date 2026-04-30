#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool solve()
{
    string s;
    char c;
    cin>>s>>c;
    for (int i=0; i<s.size(); i++)
    {
        int x = i+1;
        if (s[i] == c && x%2)return true;
    }
    return false;
}
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        cout<<(solve()?"YES":"NO")<<endl;
    }
}