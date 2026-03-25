#include<bits/stdc++.h>
using namespace std;
vector<bool> prime(1000,false);
bool sieve(int n){
               for(int i=2;i<=n;i++){
                              for(int j=i*i;j<=n;j+=i){
                                             if(prime[j]==false){
                                                            prime[j]=true;
                                             }
                              }
               }
}
int diff(int n){
              int y=n;
               if(!prime[y]){
                              y++;
               }
               return y-n;
}
int main(){
               int r,c;
               cin>>r>>c;
               vector<vector<int>> m(r,vector<int>(c));
               for(int i=0;i<=r;i++){
                              for(int j=0;j<=c;j++){
                                             cin>>m[i][j];
                              }
               }
               int ans=INT_MAX;
               //row wise
               for(int i=0;i<r;i++){
                              int sum=0;
                              for(int j=0;j<c;j++){
                                             
                                                            sum+=diff(m[i][j]);

                                             
                              }
                            ans= min(ans,sum);
               }
               //col wise
               for(int i=0;i<c;i++){
                              int sum=0;
                              for(int j=0;j<r;j++){
                                             
                                                            sum+=diff(m[j][i]);
                                             
                              }
                              ans=min(ans,sum);
               }
               cout<<ans<<endl;
               

}