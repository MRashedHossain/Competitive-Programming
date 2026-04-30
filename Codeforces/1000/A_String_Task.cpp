#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<char>v;
    cin>>s;
    for (int i=0; i<s.size(); i++)if (s[i]>=65 && s[i]<=90)s[i]=s[i]+32;
    for (int i=0; i<s.size(); i++)
    {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' || s[i]=='u' || s[i]=='y')continue;
        else v.push_back(s[i]);
    }
 
    for (int i=0; i<v.size(); i++)cout<<"."<<v[i];
}