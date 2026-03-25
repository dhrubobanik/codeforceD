#include<bits/stdc++.h>
using namespace std;
int main(){
               int t;cin>>t;
               while(t--){
                              int n;cin>>n;
                              vector<int> v(n);
                              for(int i=0;i<n;i++) cin>>v[i];
                              int target=n+1;
                              vector<int> result;
                              for(int i=0;i<n;i++){
                                             int add=0;
                                             add=target-v[i];
                                             result.push_back(add);
                              }
                              for(auto x:result) cout<<x<<" ";
                              cout<<endl;
               }
}