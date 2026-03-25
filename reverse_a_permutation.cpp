#include<bits/stdc++.h>
using namespace std;
int main(){
               int t;
               cin>>t;
               while(t--){
                              int n,l,r,w=0;
                              cin>>n;
                              vector<int> p(n);
                              for(int i=0;i<n;i++){
                                             cin>>p[i];
                              }
                              int num=n;
                              for(int i=0;i<n;i++){
                                             if(p[i]!=num){
                                                            l=i; 
                                                            w=1;
                                                            break; 
                                             }
                                             num--;
                              }
                              if(w==1){
                                             for(int i=0;i<n;i++){
                                                            if(p[i]==num){
                                                                           r=i;
                                                            }
                                             }
                                             if(l<=r){
                                             reverse(p.begin()+l,p.begin()+r+1);}
                              }
                              for(auto i:p) cout<<i<<" ";
                              cout<<endl;
                            
                              
               }
}