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
    int n,m;
    cin>>n;
    set<int> s;
    rep(i,0,n){
        cin>>m;
        s.insert(m);
        //if(s.find(m)==s.end()) s.insert(m);
    }
    cout<<s.size();
    return 0;
}