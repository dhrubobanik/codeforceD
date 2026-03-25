#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;
               cin>>tc;
               while(tc--){
                              long long n;
                              cin>>n;
                              if(n%2==1 || n<4) {
                                             cout<<"-1"<<endl;
                                             continue;
                              }else {
                
                                           
                                           if(n%6!=0){
                                             cout<<n/6+1<<" "<<n/4<<endl;
                                             continue;
                                           

                                           }
                                             cout<<n/6<<" "<<n/4<<endl;
                              }
               }
}