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
    int n,a,b;
    cin>>n;
    vi val(n), idx(n);
    rep(i,0,n){
        cin>>val[i];
        idx[val[i]--]=i;
    }
    int c=1;
    rep(i,1,n){
        c+=idx[i]<idx[i-1].second;
    }
    int a,b;
    set<pi> s;
    while(m--){
        cin>>a>>b;
        a--;b--;
        if(val[a]>0) s.insert(mp(val[a]-1,val[a]));
        if(val[b]>0) s.insert(mp(val[b]-1,val[b]));
        if(val[a]<n-1) s.insert(mp(val[a],val[a]+1));
        if(val[b]<n-1) s.insert(mp(val[b],val[b]+1));
        for(pi swap:s) c-= idx[swap.first]>idx[swap.second];
        swap(val[a],val[b]);
        swap(idx[val[a]],idx[val[b]]);
        idx[val[a]]=a;
        idx[val[b]]=b;
        for(pi swap:s) c+= idx[swap.first]>idx[swap.second];
    }
}