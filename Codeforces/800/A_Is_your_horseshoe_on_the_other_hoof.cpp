#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a[4],b,c,d;
    int ans=0;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    for (int i=0; i<4; i++)
    {
        for (int j=i+1; j<4; j++)
        {
            if (a[i]==a[j])
            {
                ans++;
                break;
            }
        }
    }
    cout<<ans;
    /*
    if (a==b || a==c || a==d)ans++;
    if (b==c || b==d)ans++
       if ()
    */
}
 