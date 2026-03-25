#include<bits/stdc++.h>
using namespace std;
int main(){
               int n;
               cin>>n;
               while(n--){
                              int x;
                              cin>>x;
                              if(x%2!=0) cout<<"NO"<<endl;
                              else {
                                             cout<<"YES"<<endl;
                                             int i=0;
                                             while(x){
                                                            if(i%2==0){
                                                                           cout<<"AA";
                                                                           i=1;
                                                            }else{
                                                                           cout<<"BB";
                                                                           i=0;
                                                            }
                                                            x=x-2;
                                             }
                              }
                              cout<<endl;
               }
}