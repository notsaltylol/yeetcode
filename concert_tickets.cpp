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
    int n,m,in;
    cin>>n>>m;
    // vi h,t;
    // rep(i,0,n){
    //     cin >> in;
    //     h.pb(in);
    // }
    // rep(i,0,m)
    //     cin>>in;
    //     t.pb(in);
    // }
    // sort(all(h));
    // rep(i,0,m){
    //     int maxn = -1;
    //     int maxi = -1;
    //     // rep(j,0,n){
    //     //     if(t[i]==h[j]){
    //     //         maxi=j;
    //     //         maxn=h[j];
    //     //         break;
    //     //     }
    //     //     else if(t[i]>h[j] && maxn<h[j]){
    //     //         maxn=h[j];
    //     //         maxi=j;
    //     //     }
    //     // }
    //     // if(maxi<0){
    //     //     cout<<-1<<endl;
    //     // }
    //     // else{
    //     //     cout<<maxn<<endl;
    //     //     h.erase(h.begin()+maxi);
    //     // }

    // }

    multiset<int, greater <int>> h;
    int x;
    rep(i,0,n){
        cin>>x;
        h.insert(x);
    }
    rep(i,0,m){
        cin>>x;
        auto z=h.lower_bound(x);
        if(z!=h.end()){
            cout<<(*z)<<endl;
            h.erase(z);
        }
        else{
            cout<<-1<<endl;
        }
        
    }
    



    return 0;
}