#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;cin>>tc;
               while(tc--){
                              long long n;cin>>n;
                              vector<vector<long long> > arr(n,vector<long long>(n));
                              set<long long> unique;
                              
                              for(long long i=0;i<n;i++){
                                             for(long long j=0;j<n;j++){
                                                            cin>>arr[i][j];
                                                            unique.insert(arr[i][j]);
                                             }
                              }
                              if(unique.size()<n) cout<<"NO"<<endl;
                              else cout<<"YES"<<endl;
                             

               }
}