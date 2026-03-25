#include<bits/stdc++.h>
using namespace std;
int main(){
               long long t;cin>>t;
               while(t--){
                              long long n;cin>>n;
                              vector<long long> v(n+1);
                              for(int i=1;i<=n;i++) cin>>v[i];
                              int count=0;
                              for(int i=1;i<=n;i++){
                                             if(v[i]==2) count++;
                              }
                              if(count%2==1) cout<<"-1"<<endl;
                              else{
                                             if(count==0) cout<<"1"<<endl;
                                             else{
                                                            int target=count/2;
                                                            int reach=0,c=0;
                                                            for(int i=1;i<=n;i++){
                                                                           if(v[i]==2){
                                                                                          reach++;
                                                                                          if(reach==target){
                                                                                                         c=i;
                                                                                                         break;
                                                                                                        }
                                                                           }
                                                            }
                                                            cout<<c<<endl;
                                             }
                              }

               }
}