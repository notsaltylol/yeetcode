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
#include <set>

int main(){
    
    int n,m,k,in,r;
    cin>>n>>m>>k;
    vi a,b;
    rep(i,0,n){
        cin>>in;
        a.emplace_back(in);
    }
    rep(i,0,m){
        cin>>in;
        b.emplace_back(in);
    }
    r=0;
    sort(all(a));
    sort(all(b));
    int as = a.size();
    int bs = b.size();
    int i=0;
    int j=0;
    int it =0;
    while(i<as && j<bs){
        if(abs(a[i]-b[j])<=k){
            i++;
            j++;
            r++;
        }else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
        it++;
    }
    cout<<r;
    return 0;
}