#include<bits/stdc++.h>
using namespace std;
int main(){
               int n;
               cin>>n;
               while(n--){
                              int x;
                              cin>>x;
                              bool result =0;
                              for(int i=2;i<x/2;i++){
                                             if(i%3!=0 && (x-i-1)%3!=0 && (x-i-1)>1) {
                                                            int z=1;
                                                            cout<<"YES"<<endl;
                                                            cout<<z<<" "<<i<<" "<<x-i-1<<endl;
                                                            result=1;
                                                            break;
                                             }
                              }
                              if(!result){
                                             cout<<"NO"<<endl;
                              }
                              
               }
}