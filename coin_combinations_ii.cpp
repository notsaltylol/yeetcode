#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair
#define rep(i,a,b) for (int i = a; i < b; i++)
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m=pow(10,9)+7;
    int n,x;
    cin>>n>>x;
    vi coins;
    rep(i,0,n){
        int c;
        cin>>c;
        coins.pb(c);
    }
    vector<ll> c(x+1);
    c[0]=1;
    for(int coin:coins){
        for(int i=1;i<=x;i++){  
            if(i-coin>=0){
                c[i]+=c[i-coin];
                c[i]%=m;
            }
        }
    }
    cout<<c[x];
    return 0;
}