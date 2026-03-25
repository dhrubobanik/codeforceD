#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;
               cin>>tc;
               while(tc--){
                              long long n;
                              cin>>n;
                              if(n%4!=0 && n%6!=0){
                                             cout<<"-1"<<endl;
                                             continue;
                              }
                              if(n%6==0 && n%4==0){
                                             
                                                            cout<<n/6<<" "<<n/4<<endl;
                                                            continue;
                                             
                              }
                              if(n%4==0 &&n%6!=0){
                                             
                                                            long long re=n%6;
                                                            if(re<0){
                                                                           cout<<n/4<<" "<<n/4<<endl;
                                                                           continue;
                                                            }
                                                            if(re/4==0){
                                                                           cout<<(((n-re)/6)+1)<<" "<<n/4<<endl;
                                                                           continue;

                                                            }
                                                            if(re%4==0)
                                                            
                                                                           cout<<(((n-re)/6)+re/4)<<" "<<n/4<<endl;
                                                                           continue;
                                                            

                                             
                              }
                              if(n%4!=0 && n%6==0){
                                               long long re=n%4;
                                               if(re/6==0){
                                                             cout<<n/6<<" "<<(((n-re)/4)+1)<<endl;
                                                                           continue;

                                               }
                                                            
                                                            if(re%6==0){
                                                                           cout<<n/6<<" "<<(((n-re)/4)+re/6)<<endl;
                                                                           continue;
                                                            }
                              }

               }
}