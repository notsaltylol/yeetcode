#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,x,m;
    cin>>n;
    string st=" ";
    if(n==1){
        cout<<1;
    }
    else if(n<=3){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        for(int i=1;i<=n;i++){
            if(i%2==0){
                cout<<i<<" ";
            }
            else{
                st+=to_string(i)+" ";
            }
        }
        cout<<st;
    }
    return 0;
}