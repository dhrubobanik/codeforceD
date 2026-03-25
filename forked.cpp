#include<bits/stdc++.h>
using namespace std;
int C_x[]={1,1,-1,-1};int C_y[]={1,-1,1,-1};
int main(){
               long long tc;cin>>tc;
               while(tc--){
                              long long a,b;cin>>a>>b;
                              long long X_king,Y_king;
                              cin>>X_king>>Y_king;
                              long long X_queen,Y_queen;
                              cin>>X_queen>>Y_queen;
                              set<pair<int,int>> d_king,d_queen;
                              for(int i=0;i<4;i++){
                                             d_king.insert({X_king+C_x[i]*a,Y_king+C_y[i]*b});
                                             d_king.insert({X_king+C_x[i]*b,Y_king+C_y[i]*a});
                                             d_queen.insert({X_queen+C_x[i]*a,Y_queen+C_y[i]*b});
                                             d_queen.insert({X_queen+C_x[i]*b,Y_queen+C_y[i]*a});
                              }
                              long long count=0;
                              for(auto match:d_king){
                                             if(d_queen.find(match)!=d_queen.end()) count++;
                              }
                              cout<<count<<endl;
               }


}
