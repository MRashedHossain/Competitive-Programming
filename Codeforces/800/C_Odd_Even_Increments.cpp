#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
bool solve()
{
    int n,a[100],ee=0,eo=0,oe=0,oo=0;
    vector<int> even,odd;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if (i%2)odd.push_back(a[i]);
        else even.push_back(a[i]);
    }
    for(int i=0; i<even.size(); i++)
    {
        if(even[i]%2)eo++;
        else ee++;
    }
    for(int i=0; i<odd.size(); i++)
    {
        if(odd[i]%2)oo++;
        else oe++;
    }
    ///cout<<ee<< " "<<eo<< " "<<oe<< " "<<oo<<endl;
    if((ee==0 || eo==0) && (oe==0 || oo==0))return true;
    return false;
 
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
 
 