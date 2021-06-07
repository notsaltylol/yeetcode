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
    int x,n;
    cin>>x>>n;
    set<int> pos;
    multiset<int> dis;
    pos.insert(x);
    pos.insert(0);
    dis.insert(x);
    rep(i,0,n){
        int p;
        cin>>p;
        auto ub=pos.upper_bound(p);
        auto lb=ub; lb--;
        //cout<<p<<" "<<*ub<<" "<<*lb<<endl;
        dis.erase(dis.find(*ub-*lb));
        dis.insert(*ub-p);
        dis.insert(p-*lb);
        cout<<*(--dis.end())<<" ";
        pos.insert(p);
    }
 
    return 0;
}