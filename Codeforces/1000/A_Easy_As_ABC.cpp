#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define RASHED ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///#define int long long int
int dx[] = {-1,-1,-1,0,0,1,1,1};
int dy[] = {-1,0,1,-1,1,-1,0,1};
bool valid(int x,int y) {
    return (x>=0 && x<3 && y>=0 && y<3);
}
bool val_id(int m,int n,int p,int q) {
    return (m != p || n != q);
}
signed main() {
    RASHED
    string s[3];
    cin>>s[0]>>s[1]>>s[2];
    vector<string> vv;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            for(int k=0; k<8; k++) {
                int u = i+dx[k],v = j+dy[k];
                if(valid(u,v)) {
                    for(int l=0; l<8; l++) {
                        int x = u+dx[l],y = v+dy[l];
                        if(valid(x,y) && val_id(x,y,i,j)) {
                            string res = "";
                            res+=s[i][j];
                            res+=s[u][v];
                            res+=s[x][y];
                            vv.push_back(res);
                        }
                    }
                }
            }
        }
    }
    sort(vv.begin(),vv.end());
    ///cout<<endl;
    ///for(auto i:vv)cout<<i<<endl;
    ///cout<<endl;
    cout<<vv[0]<<endl;
    return 0;
}
/**
ACC
CCC
CCB
*/