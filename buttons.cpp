#include<bits/stdc++.h>
using namespace std;
int main(){
               int t;cin>>t;
               while(t--){
                              vector<int> v(3);
                              for(int i=0;i<3;i++) cin>>v[i];
                              bool res=true;
                              if(v[2]%2==0) res =false;
                              if(v[0]==v[1]) {
                                             if(res) cout<<"First"<<endl;
                                             else cout<<"Second"<<endl;
                              }
                              else if(v[0]>v[1]) cout<<"First"<<endl;
                              else cout<<"Second"<<endl;

               }
}
