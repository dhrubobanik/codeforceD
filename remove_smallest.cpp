#include<bits/stdc++.h>
using namespace std;
int main(){
               int n;
               cin>>n;
               repeat:
               while(n--){
                              int t;
                              cin>>t;
                              vector<int> v(t);
                              for(int i=0;i<t;i++) cin>>v[i];
                              sort(v.begin(),v.end());
                              for(int i=0;i<t-1;i++){
                                             if(v[i+1]-v[i]>1){
                                                            cout<<"NO"<<endl;
                                                            goto repeat;
                                             }
                              }
                              cout<<"YES"<<endl;
               }
}
