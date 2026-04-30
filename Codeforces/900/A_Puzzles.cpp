#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,ans=1000,a[100],x;
    cin>>k>>n;
    for (int i=0;i<n;i++)cin>>a[i];
    sort (a,a+n);
    ///cout<<a[k-1]-a[0]<<endl;
    /**/
    for (int i=0;i<n-k+1;i++){
        x=a[i+k-1]-a[i];
        if (x<ans)ans=x;
    }
    cout<<ans<<endl;
 
}
/**
4 6
10 12 10 7 5 22
5 7 10 10 12 22
 
2 2
4 4
 
2 10
4 5 6 7 8 9 10 11 12 12
*/