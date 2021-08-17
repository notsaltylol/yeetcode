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

    int n;
    cin>>n;
    vi d(n+1,1e6);
    d[0]=0;
    for(int i=0;i<=n;i++){
        string s=to_string(i);
        for(int j=0;j<s.length();j++){
            d[i]=min(d[i], d[i-(s[j]-'0')]+1);
            //cout<<i<<" "<<d[i]<<endl;
        }
    }
    cout<<d[n];
    return 0;
}