#include<bits/stdc++.h>
using namespace std;
int main(){
               long tc;cin>>tc;
               while(tc--){
                              long long n,a,b;
                              cin>>n>>a>>b;
                             
               
                                             if(n==a && n==b){
                                             cout<<"Yes"<<endl;
                                             continue;
                                             }
                              
                             
                              if(a+b+2<=n) cout<<"Yes"<<endl;
                              else cout<<"No"<<endl;
               }
}