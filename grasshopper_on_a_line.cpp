#include<bits/stdc++.h>
using namespace std;
int main(){
               int t;cin>>t;
               while(t--){
                              int x,k;
                              cin>>x>>k;
                              vector<int> v;
                              int sum=0;
                              int add =0;
                              for(int i=x;i>0;i--){
                                             if(i%k!=0){ v.push_back(i);
                                                               sum=x-i;
                                                               add+=i;
                                                            if(sum!=0){
                                                                           v.push_back(sum);
                                                                           add+=sum;
                                                            }
                                                            if(add==x) break;
                                             }
                              }
                              cout<<v.size()<<endl;
                              for(auto x:v) cout<<x<<" ";
                              cout<<endl;
               }
}
