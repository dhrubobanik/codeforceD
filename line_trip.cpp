#include<bits/stdc++.h>
using namespace std;
int main(){
               int t;
               cin>>t;
               while(t--){
                              int n,x;
                              cin>>n>>x;
                              vector<int> a(n+1);
                              a[0]=0;
                              for(int i=1;i<=n;i++) cin>>a[i];
                              int ans=INT_MIN;
                              for(int i=0;i<n;i++){
                                             ans=max(ans,a[i+1]-a[i]);

                              }
                              ans=max(ans,(x-a[n])*2);
                              cout<<ans<<endl;
               }
}