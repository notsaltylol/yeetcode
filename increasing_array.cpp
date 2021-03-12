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

int main(){
    int n,x,m;
    ll t=0;
    cin>>n;
    cin>>x;
    for(int i=1;i<n;i++){
        cin>>m;
        if(m<x) t+=x-m;
        else x=m;
    }
    cout<<t;
    return 0;
}