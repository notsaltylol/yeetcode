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
    int n,x;
    cin>>n>>x;
    multimap<int,int> a;
    int in;
    rep(i,0,n){
        cin>>in;
        a.insert(mp(in,i+1));
    }
    auto tail=a.end();
    auto head=a.begin();
    for(auto it=a.begin();it!=a.end();it++){
        auto p=a.find(x-it->first);
        if(p!=a.end()&&it!=p){
            cout<<it->second<<" "<<p->second;
            return 0;
        }
    }
    cout<<"IMPOSSIBLE";



    return 0;
}