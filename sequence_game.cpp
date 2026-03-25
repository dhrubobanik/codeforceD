#include<bits/stdc++.h>
using namespace std;
int main(){
               int t;cin>>t;
               while(t--){
                              int n;cin>>n;
                              vector<int> vec(n);
                              for(int i=0;i<n;i++)cin>>vec[i];
                              vector<int> res;
                              for(int i=0;i<n-1;i++){
                                             res.push_back(vec[i]);
                                             if(vec[i]>vec[i+1]){ 
                                          //    res.push_back(vec[i]);
                                              res.push_back(1);
                              }
                              
                              }
                              res.push_back(vec[n-1]);
                              cout<<res.size()<<endl;
                              for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
                              cout<<endl;

               }
}
