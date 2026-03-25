#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;
               cin>>tc;
               while(tc--){
                              long long n;
                              cin>>n;
                              vector<long long> v(n+1);
                              for(long long i=1;i<=n;i++){
                                             cin>>v[i];
                              }
                              long long ans=v[n]-v[1];
                              for(long long i=1;i<=n;i++){
                                             ans=max(ans,v[i]-v[i+1]);
                              }
                              for(long long i=1;i<n;i++){
                                             ans=max(ans,v[n]-v[i]);
                              }
                              for(long long i=2;i<=n;i++){
                                             ans=max(ans,v[i]-v[1]);
                              }
                              cout<<ans<<endl;
               }
}