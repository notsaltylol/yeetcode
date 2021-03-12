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
    rep(i,1,n+1){
        ll t = i*i;
        cout<<t*(t-1)/2-(i-1)*(i-2)*4<<endl; 
    }
    return 0;
}