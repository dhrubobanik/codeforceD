#include<bits/stdc++.h>
using namespace std;
int main(){
               int t;cin>>t;
               while(t--){
                              int s_x,s_y,d_x,d_y,moves=0;
                              cin>>s_x>>s_y>>d_x>>d_y;
                              if(d_y<s_y){
                                             cout<<"-1"<<endl;
                                             continue;
                              }
                              moves=d_y-s_y;
                              s_x+=moves;
                              if(s_x<d_x){
                                             cout<<"-1"<<endl;
                                             continue;
                              }
                              moves+=s_x-d_x;
                              cout<<moves<<endl;


               }
}