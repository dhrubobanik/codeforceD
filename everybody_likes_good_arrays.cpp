#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;cin>>tc;
               while(tc--){
                              long long n;cin>>n;
                              vector<long long> v(n);
                              for(long long i=0;i<n;i++) cin>>v[i];
                              long long count=0;
                              for(int i=0;i<n-1;i++){
                                             if(v[i]%2==0 && v[i+1]%2==0|| v[i]%2==1 && v[i+1]%2==1) count++;
                              }
                              cout<<count<<endl;
               }
}