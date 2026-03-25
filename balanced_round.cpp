#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;cin>>tc;
               while(tc--){
                              long long n,k;
                              cin>>n>>k;
                              vector<long long> v(n);
                              for(auto &x:v) cin>>x;
                              sort(v.begin(),v.end());
                              vector<long long> diff;
                              for(long long i=0;i<n-1;i++){
                                             diff.push_back(v[i+1]-v[i]);
                              }
                              long long l=0,curr=0;
                              for(long long i=0;i<diff.size();i++){
                                             if(diff[i]>k) curr=0;
                                             else {
                                                            curr++;
                                             }
                                              l=max(curr,l);
                              }
                              
                              if(n==1) cout<<"0"<<endl;
                              else cout<<diff.size()-l<<endl;
               }
}
