#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;cin>>tc;
               while(tc--){
                              long long n;
                              cin>>n;
                              bool flag =true;
                              long long count=1;
                              for(long long i=2;flag;i++){
                                             if(n%i!=0){
                                                            flag=false;
                                                            break;
                                             }
                                             count++;
                              }
                              cout<<count<<endl;
               }
}