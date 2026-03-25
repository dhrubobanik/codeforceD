#include<bits/stdc++.h>
using namespace std;
int main(){
               int t;cin>>t;
               while(t--){
                              int n,k,x;
                              cin>>n>>k>>x;
                              if(x!=1){
                                             cout<<"YES"<<endl;
                                             cout<<n<<endl;
                                             for(int i=1;i<=n;i++){
                                                            cout<<"1"<<" ";
                                             }
                                             cout<<endl;
                              }else{
                                             if(k==1)cout<<"NO"<<endl;
                                             else if(k==2){
                                                            if(n%2==0){
                                                                           cout<<"YES"<<endl;
                                                                           cout<<n/2<<endl;
                                                                           for(int i=1;i<=n/2;i++){
                                                                                          cout<<2<<" ";
                                                                           }
                                                                           cout<<endl;
                                                            }else cout<<"NO"<<endl;
                                             }else{
                                                            if(n%2==0){
                                                                           cout<<"YES"<<endl;
                                                                           cout<<n/2<<endl;
                                                                           for(int i=1;i<=n/2;i++) cout<<"2"<<" ";
                                                                           cout<<endl;
                                                            }else{
                                                                           cout<<"YES"<<endl;
                                                                           int d=(n-3)/2;
                                                                           vector<int> v;
                                                                           for(int i=1;i<=d;i++) v.push_back(2);
                                                                           v.push_back(3);
                                                                           cout<<v.size()<<endl;
                                                                           for(auto x:v) cout<<x<<" ";
                                                                           cout<<endl;
                                                            }
                                             }
                              }

               }

}