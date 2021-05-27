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
    vi a,b;
    int ai,bi;
    rep(i,0,n){
        cin>>ai>>bi;
        a.pb(ai);
        b.pb(bi);
    }
    sort(all(a));
    sort(all(b));
    int c=0;
    int maxc=-1;
    ai=0;
    bi=0;
    while(ai<n&&bi<n){
        if(a[ai]<b[bi]){
            ai++;
            c++;
        }
        else{
            bi++;
            c--;
        }
        maxc=max(maxc,c);
    }
    cout<<maxc;
    return 0;
}