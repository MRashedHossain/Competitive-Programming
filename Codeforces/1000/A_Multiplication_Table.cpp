#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,ans=0;
    cin>>n>>k;
     for (int i=1; i<=n; i++)
        {
            if (k%i==0){
                if (k/i<=n)ans++;
            }
        }
        cout<<ans<<endl;
}