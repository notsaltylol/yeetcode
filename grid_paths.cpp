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
    vector<vi> g(n,vi(n,0));
    string s;
    int m=pow(10,9)+7;
    rep(i,0,n){
        cin>>s;
        rep(j,0,n){
            if(s[j]=='*'){
                g[i][j]=0;
            }else{
                if(i==0&&j==0){
                    g[0][0]=1;
                }
                else if(i==0&&j>0){
                    g[i][j]=g[i][j-1];
                }
                else if(i>0&&j==0){
                    g[i][j]=g[i-1][j];
                }
                else{
                    g[i][j]=(g[i][j-1]+g[i-1][j])%m;
                }
            }
        }
    }
    cout<<g[n-1][n-1];
    return 0;
}