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
    int n,x,in;
    cin>>n>>x;
    vi p;
    rep(i,0,n){
        cin>>in;
        p.pb(in);
    }
    int i=0;
    int j=sz(p)-1;
    int g=0;
    sort(all(p));
    while(i<=j){
        if(p[i]+p[j]<=x){
            g++;
            i++;
            j--;
        }else{
            g++;
            j--;
        }
    }
    cout<<g;
    return 0;
}