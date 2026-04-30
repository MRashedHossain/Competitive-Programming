#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x;
    char s;
    cin>>x;
    for (int i=1;i<=x;i++){
        if (i==x){
            if (i%2==0)cout<<"I love it"<<" ";
            else cout<<"I hate it";
        }
        else if (i%2==0)cout<<"I love that"<<" ";
        else if (i%2==1)cout<<"I hate that"<<" ";
    }
}
 