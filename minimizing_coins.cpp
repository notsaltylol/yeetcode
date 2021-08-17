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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x;
    cin>>n>>x;
    vector<ll> s(x+1);
    s[0]=0;
    vi coins;
    rep(i,0,n){
        int c;
        cin>>c;
        coins.pb(c);
    }
    for(int i=1;i<=x;i++){
        s[i]=INT_MAX;
        for(int c:coins){
            if(i-c>=0)
                s[i]=min(s[i],s[i-c]+1);
        }
    }
    if(abs(s[x])>9999999){
        cout<<-1;
    }
    else
        cout<<s[x];
    return 0;
}