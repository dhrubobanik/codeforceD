#include<bits/stdc++.h>
using namespace std;
int main(){
               int t;
               cin>>t;
               while(t--){
                              int n;
                              cin>>n;
                              bool result=false;
                              for(int i=2;i<n/2;i++){
                                             if(i%3!=0 && (n-i-1)%3!=0 && (n-i-1)>0){
                                                            cout<<"YES"<<endl;
                                                            cout<<"1"<<" "<<i<<" "<<n-i-1<<endl;
                                                            result=true;
                                                            break;
                                             }
                              }
                              if(!result)cout<<"NO"<<endl;
               }
}