#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int a,b,c,x,y,ans;
    cin>>a>>b>>c;
    if (a>=b && a>=c && b>=c){
        x=a;
        y=c;
    }
    else if (a>=b && a>=c && c>=b){
        x=a;
        y=b;
    }
    else if (b>=a && b>=c && a>=c){
        x=b;
        y=c;
    }
    else  if (b>=a && b>=c && c>=a){
        x=b;
        y=a;
    }
    else if (c>=a && c>=b && a>=b){
        x=c;
        y=b;
    }
    else  if (c>=a && c>=b && b>=a){
        x=c;
        y=a;
    }
    ans=x-y;
    cout<<ans;
}
 