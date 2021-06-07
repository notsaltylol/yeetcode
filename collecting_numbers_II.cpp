#include<bits/stdc++.h>
#define ar array 
using namespace std ;
signed main(){
  int n,m ;
  cin >> n >> m ;
  vector<int>a(n),b(n) ;
  for(int &x:a)
    cin >> x ,x-- ;
  for(int i=0;i<n;i++)
    b[a[i]]=i  ;
  int ans =1;
  for(int i=1;i<n;i++)
    ans+=b[i]<b[i-1] ;
  set<ar<int,2>> c ;
  auto add = [&](int i){
    if(a[i]>0)
      c.insert({a[i]-1,a[i]}) ;
    if(a[i]<n-1)
      c.insert({a[i],a[i]+1}) ;
  } ;
  while(m--){
    int i,j ; cin >> i >> j ;--i;--j ;
    add(i);  add(j) ;
    for(ar<int,2> x:c)
      ans-=b[x[1]]<b[x[0]] ; 
    swap(a[i],a[j]) ;swap(b[a[i]],b[a[j]]) ;
    for(ar<int,2> x:c)
      ans+=b[x[1]]<b[x[0]] ;
    cout << ans  << '\n' ; c.clear() ;
  }
}