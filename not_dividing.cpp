#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;
               cin>>tc;
               while(tc--){
                              long long n;
                              cin>>n;
                              vector<long long> v(n+1,0);
                              for(long long i=1;i<=n;i++){
                                             cin>>v[i];
                              }
                              for(long long i=1;i<=n;i++){
                                             if(v[i]==1)v[i]++;
                              }
                              for(long long i=1;i<n;i++){
                                             if(v[i+1]%v[i]==0){
                                                            v[i+1]++;
                                             }
                              }
                              for(long long i=1;i<=n;i++){
                                             cout<<v[i]<<" ";
                              }
                              cout<<endl;


               }
}