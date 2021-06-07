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
    multiset<int> k;
    rep(i,0,n){
        int in;
        cin>>in;
        k.insert(in);
        auto it = k.upper_bound(in);
        if(it!=k.end()){
            k.erase(it);
        }
    }
    cout<<k.size();
    return 0;
}