#include<bits/stdc++.h>
using namespace std;
int main(){
               int t;cin>>t;
               while(t--){
                              int n;cin>>n;
                              vector<int> v(n);
                              for(int j=0;j<n;j++) cin>>v[j];
                              int i,mx=0,count;
                              for(i=0;i<n;i++){
                                             if(v[i]==0){
                                                            count=0;
                                                            while(v[i]!=1 && i<n){
                                                                           count++;
                                                                           i++;
                                                            }  
                                                            mx=max(mx,count);
                                             }
                                           
                              }
                              cout<<mx<<endl;

               }
}