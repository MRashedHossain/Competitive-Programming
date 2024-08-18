#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<ll> v;
        for (int i=0 ; i<n ; i++){
            ll a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll csum = 1, flag = 0;
        if (v[0]!=1)flag = 1;
        for (int i=1 ; i<n ; i++){
            if (csum<v[i]){
                flag = 1;
                break;
            }
            csum+=v[i];
        }
        cout << (flag?"NO":"YES") << endl;
    }

    return 0;
}
