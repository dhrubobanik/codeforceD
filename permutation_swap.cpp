#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;
               cin>>tc;
               while(tc--){
                              long long n;cin>>n;
                              vector<long long >v(n);
                              for(auto &x:v)cin>>x;
                              long long k=0;
                              for(long long i=1;i<=n;i++){
                                             if(v[i-1]!=i){
                                                           k= __gcd(k,(abs(v[i-1]-i)));
                                             }
                              }
                             // for(auto &x:r)cout<<x<<" ";
                              //cout<<endl;
                            // long long f=*min_element(r.begin(),r.end());
                             cout<<k<<endl;
               }
}