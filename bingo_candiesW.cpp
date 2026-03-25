#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;cin>>tc;
               while(tc--){
                              long long n;cin>>n;
                              vector<vector<long long>>v(n,vector<long long >(n));
                              for(int i=0;i<n;i++){
                                             for(int j=0;j<n;j++){
                                                            cin>>v[i][j];
                                             }
                              }
                              bool flag =true;
                              vector<long long > res(n*n+1,0);
                              for(int i=0;i<n;i++){
                                             for(int j=0;j<n;j++){
                                                            res[v[i][j]]++;
                                                            if(res[v[i][j]]>(n*(n-1))) {
                                                                           cout<<"NO"<<endl;
                                                                           flag =false;
                                                            }
                                                            if(!flag)break;
                                             }
                                             if(!flag) break;
                              }
                              if(flag)cout<<"YES"<<endl;

               }
}