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
    ll t=n*(n+1)/2;
    string str1="";
    string str2="";
    int s1=0;
    if(t%2==0){
        rep(i,1,n/4){
            str1+=to_string(i)+" ";
        }
        rep(i,1,n/4){
            str1+=to_string(i)+" ";
        }
        cout<<"YES"<<endl<<n/2<<endl<<str1<<endl<<n/2<<str2<<endl;
    }else cout<<"NO";
    return 0;
}