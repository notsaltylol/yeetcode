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
    ll m=INT_MIN;
    ll c=0;
    vector<ll> x;
    for(int i=0;i<n;i++){
        c+=(cin>>in);
        m=max(m,c);
        if(c<0) c=0;
    }
    cout<<m;
    return 0;
}