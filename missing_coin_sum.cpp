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
    int n,in;
    cin>>n;
    vi x;
    rep(i,0,n){
        cin>>in;
        x.pb(in);
    }
    ll sum=1;
    sort(all(x));
    for(int i=0;i<n&&x[i]<=sum;i++){
        sum+=x[i];
    }
    cout<<sum;
}