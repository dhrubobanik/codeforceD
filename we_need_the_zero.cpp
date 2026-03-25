#include<bits/stdc++.h>
using namespace std;
int main(){
               long long t;cin>>t;
               while(t--){
                              long long n;cin>>n;
                              vector<int> v(n);
                              for(int i=0;i<n;i++){
                                             cin>>v[i];
                              }
                              long long Xor=0;
                              for(int i=0;i<n;i++){
                                             Xor^=v[i];
                              }
                              if(n%2==1){
                                             cout<<Xor<<endl;
                              }else{
                                             if(Xor==0) cout<<Xor<<endl;
                                             else cout<<"-1"<<endl;
                              }
               }

}