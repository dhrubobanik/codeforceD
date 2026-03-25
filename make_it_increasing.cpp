#include<bits/stdc++.h>
using namespace std;
void solve(){
               long long n;
               cin>>n;
               vector<long long>v(n);
               for(auto &x:v)cin>>x;
               long long count=0;
               for(long long i=n-1;i>0;i--){
                              for(long long i=n-1;i>0;i--){
                                             if(v[i]==0){
                                                            cout<<"-1"<<endl;
                                                            return;
                                             }
                              }
                              while(v[i-1]>=v[i] && v[i-1]>0 ){
                                             v[i-1]=v[i-1]/2;
                                             count++;

                              }
               } 
               cout<<count<<endl;
}
int main(){
               long long tc;
               cin>>tc;
               while(tc--){
                              solve();
               }
}