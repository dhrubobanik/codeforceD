#include<bits/stdc++.h>
using namespace std;
void solve(){
               long long x,n;
               cin>>x>>n;

               if(x%2==0){
                             
                              int re=n%4; 
                              if(re==0){
                                             cout<<x<<endl;
                                             return;
                              }

                              if(re==3){
                                             cout<<x+1+n<<endl;
                                             return;
                              }
                              if(re==2){
                                             cout<<x+1<<endl;
                                             return;
                              }
                              if(re==1){
                                             cout<<x-n<<endl;
                                             return;
                              }
               }
               else{
                              
                              int re1=n%4;
                              if(re1==0){
                                             cout<<x<<endl;
                                             return;
                              }
                              if(re1==3){
                                             cout<<x-1-n<<endl;
                                             return;
                              }
                              if(re1==2){
                                             cout<<x-1<<endl;
                                             return;
                              }
                              if(re1==1){
                                             cout<<x+n<<endl;
                                             return;
                              }
               }
}
int main(){
               long long tc;
               cin>>tc;
               while(tc--){
                              solve();
               }
}