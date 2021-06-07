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
    set<int> ks;
    queue<int> kq;
    int ret=0;
    rep(i,0,n){
        int k;
        cin>>k;
        if(ks.find(k)==ks.end()){
            ks.insert(k);
            kq.push(k);
        }
        else{
            ret=max((int)kq.size(),ret);
            kq.pop();
        }
    }
    if(ret==0)cout<<n;
    else cout<<ret;
 
    return 0;
}