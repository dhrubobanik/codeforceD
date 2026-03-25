#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;cin>>tc;
               while(tc--){
                              long long a,b,n;
                              cin>>a>>b>>n;
                              vector<long long> v(n);
                              for(auto &x:v)cin>>x;
                              long long ans=b;
                              for(int i=0;i<n;i++){
                                             ans+=min(v[i],a-1);
                              }
                              cout<<ans<<endl;
               }
}
