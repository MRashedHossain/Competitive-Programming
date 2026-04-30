#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long int x;
    cin>>x;
    if (x%2==0){
        x=x/2;
    }
    else {
        x=((x-1)/2)-x;
    }
    cout<<x;
}
 