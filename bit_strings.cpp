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
    ll t=1;
    ll m=1;
    rep(i,0,9) m*=10;
    m+=7;
    rep(i,0,n) t=t*2%m;
    cout<<t<<endl;
    return 0;
}