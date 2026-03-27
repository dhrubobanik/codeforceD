#include<bits/stdc++.h>
using namespace std;
void solve(){
               long long n,c,k;
               cin>>n>>c>>k;
               vector<long long> v(n); 
               for(auto &x:v )cin>>x;
               sort(v.begin(),v.end());
               for(long long i=0;i<n;i++){
                              if(v[i]>c) break;
                              long long mn=min(k,c-v[i]);
                              k-=mn;
                              c+=v[i]+mn;
               }
               cout<<c<<endl;

}
int main(){
               long long tc;
               cin>>tc;
               while(tc--){
                              solve();
               }
}