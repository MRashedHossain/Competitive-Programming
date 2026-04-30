#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cap=0;
    for (int i=0;i<s.size();i++){
        if (s[i]>='A' && s[i]<='Z')cap++;
    }
    if (cap==s.size()){
        for (int i=0;i<s.size();i++)s[i]+=32;
    }
    else if (cap==(s.size()-1) && s[0]>='a' && s[0]<='z'){
        s[0]-=32;
        for (int i=1;i<s.size();i++)s[i]+=32;
    }
    cout<<s<<endl;
}