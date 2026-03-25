//Inefficient solution !!
#include<bits/stdc++.h>
using namespace std;
int main(){
               int t;cin>>t;
               while(t--){
                              int n,k,i=1;
                              cin>>n>>k;
                              if(n%2==0) cout<<"YES"<<endl;
                              else{
                                           if(n%k==0) cout<<"YES"<<endl;
                                           else
                                           {  
                                             bool a=false;
                                             while(n>=k){
                                                            
                                              k=i*k;              
                                             int remain=n-k;
                                             if(remain%2==0) {cout<<"YES"<<endl;
                                                            a=true;
                                             break;}
                                             i++;
                                             }
                                             if(!a) cout<<"NO"<<endl;
                              }
                              
                                           
                              }

               }
}               