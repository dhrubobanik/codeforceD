#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;cin>>tc;
               while(tc--){
                              long long n;cin>>n;
                              vector<long long> v(n);
                              for(int i=0;i<n;i++) cin>>v[i];
                              long long mx=*max_element(v.begin(),v.end());
                              long long mn=*min_element(v.begin(),v.end());
                              if(mx==mn) cout<<"NO"<<endl;
                              else{
                                             sort(v.begin(),v.end(),greater<long long>());
                                             cout<<"YES"<<endl;
                                             for(auto &x:v) cout<<x<<" ";
                                             cout<<endl;
                              }
               }
}