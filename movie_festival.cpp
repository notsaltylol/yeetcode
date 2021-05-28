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
    int n;
    cin>>n;
    vector<pi> m;
    rep(i,0,n){
        int a,b;
        cin>>a>>b;
        m.pb(mp(b,a));
    }
    sort(all(m));
    int i=1;
    int c=1;
    int t=m[0].first;
    while(i<n){
        if(t<=m[i].second){
            c++;
            t=m[i].first;
        }
        i++;
    }
    cout<<c;
    return 0;
}