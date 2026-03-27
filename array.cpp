#include<bits/stdc++.h>
using namespace std;
void solve(){
               long long n;
               cin>>n;
               vector<long long> v(n);
               vector<long long> re;
               for(auto &x:v)cin>>x;
               for(long long i=0;i<n;i++){
                              long long b_count=0,s_count=0;
               
                              for(long long k=i+1;k<n;k++){
                                            
                                             if((v[i])>(v[k])) s_count++;
                                             else if(v[i]<v[k])b_count++;
                              }
                              if(b_count>s_count)cout<<b_count<<" ";
                              else cout<<s_count<<" ";

               }
               cout<<endl;
}
int main(){
               long long tc;
               cin>>tc;
               while(tc--){
                              solve();
               }
}