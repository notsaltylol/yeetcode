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
    ll sum=0;
    vi p;
    rep(i,0,n){
        cin>>in;
        p.pb(in);
        sum+=in;
    }
    int avg=sum/n;
    sort(all(p));
    sum=0;
    rep(i,0,n){
        sum+=abs(p[i]-avg);
    }
    cout<<sum;
    
}