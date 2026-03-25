#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;cin>>tc;
               while(tc--){
                              long long n,q;
                              cin>>n>>q;
                              vector<long long> v(n);
                              for(auto &x:v)cin>>x;
                                  while(q--){

                                             long long l,r,k;
                                             cin>>l>>r>>k;
                                             bool lr=((r-l+1)%2);
                                             bool kp=(k*(r+1-l))%2;
                                             bool res=(lr || kp);
                                             long long eo=0;

                                            for(long long i=0;i<n;i++){
                                                            if(l<=(i+1) && (i+1)<=r) continue;
                                                            if(v[i]%2!=0) eo+=1;
                                                            else eo+=2;
                                             }

                                             if(res || (eo%2))cout<<"YES"<<endl;
                                             else cout<<"NO"<<endl;
                              }
                              
                            
               }
}