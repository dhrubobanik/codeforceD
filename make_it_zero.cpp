#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;cin>>tc;
               while(tc--){
                              long long n;cin>>n;
                              long long x;
                              for(int i=1;i<=n;i++) cin>>x;
                              if(n%2==0){
                                             cout<<"2"<<endl;
                                             cout<<"1"<<" "<<n<<endl;
                                             cout<<"1"<<" "<<n<<endl;
                              }else{
                                             cout<<4<<endl;
                                             cout<<1<<" "<<n-1<<endl;
                                             cout<<1<<" "<<n-1<<endl;
                                             cout<<n-1<<" "<<n<<endl;
                                             cout<<n-1<<" "<<n<<endl;
                              }

               }
}