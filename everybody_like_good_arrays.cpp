//Inefficient_solution, But I invested huge efforts to make it accepted !!!
#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;cin>>tc;
               while(tc--){
                              long long n;cin>>n;
                              vector<long long> v;
                              for(int i=0;i<n;i++){
                                             long long x;
                                             cin>>x;
                                             v.push_back(x);
                              
                              }
                              int count=0,i;
                            for(int i=0;i<v.size()-1;i++){

                                             if((v[i]%2==0 && v[i+1]%2==0) || (v[i]%2==1 &&v[i+1]%2==1)){
                                                            v[i]=v[i]+1;
                                                            v.erase(v.begin()+(i+1));
                                                            count++;
                                                            i--;

                                             }
                              }
                              cout<<count<<endl;
                             
               }

}