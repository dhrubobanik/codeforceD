#include<bits/stdc++.h>
using namespace std;
int main(){
               int t;cin>>t;
               while(t--){
                              int n;cin>>n;
                              vector<int> v(n);
                              for(int i=0;i<n;i++) cin>>v[i];
                              int plus=0,minus=0,operation=0;
                              for(auto x:v){
                                             if(x==1) plus++;
                                             else minus++;
                              }
                              while(plus<minus || minus%2!=0){
                                             plus++;
                                             minus--;
                                             operation++;
                              }
                              cout<<operation<<endl;

               }
}