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
    string n;
    cin>>n;
    int map[26] = {};
    rep(i,0,n.length()){
        map[n[i]-65]++;
    }
    string r="";
    string l="";
    string m="";
    bool o=false;
    rep(i,0,26){
        if(map[i]%2!=0){
            if(o){
                cout<<"NO SOLUTION";
                return 0;
            }else{
                m=string(map[i],i+65);
                o=true;
            }
        }else{
            r=r+string(map[i]/2,i+65);
            l=string(map[i]/2,i+65)+l;
        }
    }
    cout<<l<<m<<r;
    return 0;
}