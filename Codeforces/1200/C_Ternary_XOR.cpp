#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    string s;
    int n,val;
    cin>>n>>s;
    int flg=n;
    vector<int> a,b;
    for(int i=0; i<n; i++)
    {
        val = s[i] - '0';
        if (val==2)
        {
            a.push_back(1);
            b.push_back(1);
        }
        else if (val==0)
        {
            a.push_back(0);
            b.push_back(0);
        }
        else
        {
            a.push_back(1);
            b.push_back(0);
            flg=i+1;
            break;
        }
    }
    for (int i=flg; i<n; i++)
    {
        val = s[i] - '0';
        a.push_back(0);
        b.push_back(val);
    }
    for (int i=0; i<a.size(); i++)cout<<a[i];
    cout<<endl;
    for (int i=0; i<b.size(); i++)cout<<b[i];
    cout<<endl;
    return;
}
 
int main()
{
    int tc;
    cin>>tc;
       while(tc--)
    {
        solve();
    }
 
    return 0;
}