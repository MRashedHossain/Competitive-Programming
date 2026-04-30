#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
bool solve()
{
    int n,k,odd=0,even=0,sum=0;
    vector<int> v;
    cin>>n>>k;
    for (int i=0; i<n; i++)
    {
        int z;
        cin>>z;
        sum+=z;
        v.push_back(z);
        if (z%2)odd++;
        else even++;
    }
    if (odd==0)return false;
    if (sum%2==0 && n==k)return false;
    if (k%2)
    {
        if (odd>=k)return true;
        else if(even>=(k-odd))return true;
    }
    else
    {
        if (odd>=k && even>0)return true;
        else if (odd<k && even>0)return true;
    }
    return false;
}
 
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        cout<<(solve()?"Yes":"No")<<endl;
    }
}