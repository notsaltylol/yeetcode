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

    int n, x;
    cin>>n>>x;
    vi h(n);
    vi s(n);
    rep(i,0,n){
        cin>>h[i];
    }
    rep(i,0,n){
        cin>>s[i];
    }
    int K[n+1][x+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=x;j++){
            if(i==0||j==0) K[i][j]=0;
            else if (h[i-1]<=j)
            {
                K[i][j]=max(s[i-1]+K[i-1][j-h[i-1]], K[i-1][j]);
            }
            else{
                K[i][j]=K[i-1][j];
            }
            cout<<K[i][j]<<" ";
            
        }
        cout<<endl;
    }
    cout<<K[n][x];
    
    
    return 0;
}