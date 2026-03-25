#include<bits/stdc++.h>
using namespace std;
int main(){
               long tc;cin>>tc;
               while(tc--){
                              long long n;
                              cin>>n;
                              list<long long> l;
                              for(int i=0;i<n;i++) {
                                             long long x;
                                             cin>>x;
                                             l.push_back(x);
                              }
                              long long mx=*max_element(l.begin(),l.end());
                              long long mn=*min_element(l.begin(),l.end());
                              if(mx==mn)cout<<"NO"<<endl;
                              else{
                                              l.sort();
                                            //  l.remove(l.back());
                                              l.pop_back();
                                             l.push_front(mx);
                                             cout<<"YES"<<endl;
                                             for(auto &p:l)cout<<p<<" ";
                                             cout<<endl;
                              }

               }
}