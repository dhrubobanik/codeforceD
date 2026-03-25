#include<bits/stdc++.h>
using namespace std;
int main(){
               int t;cin>>t;
               while(t--){
                              int n,m;cin>>n>>m;
                              string x,s;cin>>x>>s;
                              int count=0;
                              while(x.find(s)==string::npos&&count<=5){
                                            x+=x;
                                             count++;
                              }
                              if(x.find(s)!=string::npos) cout<<count<<endl;
                              else cout<<-1<<endl;

               }
}