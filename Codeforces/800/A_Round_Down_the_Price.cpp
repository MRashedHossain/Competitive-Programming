#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <long long> v{1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000};
    int tc;
    cin>>tc;
    while (tc--)
    {
        long long n;
        cin>>n;
        for (int i=0; i<10; i++)
        {
            if (n>=v[i] && n<v[i+1])
            {
                n=n-v[i];
                break;
            }
        }
        cout<<n<<endl;
    }
}