#include<bits/stdc++.h>
using namespace std;
 
bool solve()
{
    int n,even=0,odd=0,a[100];
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        if (a[i]%2)odd++;
        else even++;
    }
    if (even%2!=odd%2)return false;
    else
    {
        if (even%2==0)return true;
        else
        {
            for (int i=0; i<n-1; i++)
            {
                for (int j=i; j<n; j++)
                {
                    if (a[i]%2 != a[j]%2 && abs(a[i]-a[j])==1)return true;
                }
            }
        }
        return false;
    }
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
 