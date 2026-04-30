#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n;
        string s;
        cin>>n>>s;
        int i=0,j=n-1,x=n/2;
        while (x--)
        {
            if (s[i]==s[j])break;
            else
            {
                i++;
                j--;
            }
        }
        cout<<j-i+1<<endl;
    }
}