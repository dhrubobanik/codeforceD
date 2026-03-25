#include<bits/stdc++.h>
using namespace std;
int main(){
               int t;cin>>t;
               while(t--){
                              int n;cin>>n;
                              vector<int> a(n);
                              for(int i=0;i<n;i++) cin>>a[i];
                              vector<int> b,c;
                              int mx=*max_element(a.begin(),a.end());
                              for(int i=0;i<n;i++) 
                                 {if(a[i]==mx) c.push_back(mx);
                                 else b.push_back(a[i]);
                              }
                              if(c.size()== a.size()) cout<<"-1"<<endl;
                              else{
                                             cout<<b.size()<<" "<<c.size()<<endl;
                                             for(auto x:b) cout<<x<<" ";
                                             cout<<endl;
                                             for(auto x:c) cout<<x<<" ";
                                             cout<<endl;
                              }
                              
               }
}