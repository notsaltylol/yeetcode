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
    ll n,a,b;
    cin>>n;
    rep(i,0,n){
        cin>>a>>b;
        if(2*a-b>=0 && (2*a-b)%3==0 && 2*b-a>=0 && (2*b-a)%3==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;    
    }
    return 0;
}