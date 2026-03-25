#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;
               cin>>tc;
               while(tc--){
                              long long n,q;
                              cin>>n>>q;
                              vector<long long> v(n+1,0);
                              for(long long i=1;i<=n;i++){
                                             cin>>v[i];

                              }
                              long long sum=0;
                              for(long long i=1;i<=n;i++){
                                             sum+=v[i];
                                             v[i]=sum;
                              }
                              while(q--){
                                             long long l,r,k;
                                             cin>>l>>r>>k;
                                             long long res=0;
                                             if(r-l+1!=n){
                                                            res=v[l-1]+((r-l+1)*k)+(v[n]-v[r]);
                                                            if(res%2)cout<<"YES"<<endl;
                                                            else cout<<"NO"<<endl;
                                             }else{
                                                            if((n*k)%2) cout<<"YES"<<endl;
                                                            else cout<<"NO"<<endl;

                                             }
                              }
               }
}