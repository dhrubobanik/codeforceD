#include<bits/stdc++.h>
using namespace std;
void solve(){
               long long n;cin>>n;
               vector<long long>v(n);
               for(auto &x:v)cin>>x;
               map<long ,long> mp;
               long curr_freq=0,opp=0;
               for(auto x:v){
                              mp[x]++;
               }
               for(auto x:mp){
                              curr_freq=max(curr_freq,x.second);
               }
               while(curr_freq<n){
                              opp++;
                              if(curr_freq*2<=n){
                                             opp+=curr_freq;
                                             curr_freq*=2;

                              }else{
                                             opp+=n-curr_freq;
                                             curr_freq=n;
                              }
               }
               cout<<opp<<endl;
              
}
int main(){
               long long tc;
               cin>>tc;
               while(tc--){
                              solve();
               }
}