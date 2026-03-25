#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;
               cin>>tc;
               while(tc--){
                              long long n; cin>>n;
                              string s;
                              cin>>s;
                              char l=s[0];
                              long long count=1,res=1;
                              for(long long i=1;i<n;i++){
                                             if(s[i]!=l){
                                                            l=s[i];
                                                            res=max(count,res);
                                                            count=1;
                                                            continue;
                                             }
                                             count++;
                                             res=max(count,res);

                              }
                              cout<<res +1<<endl;
               }
}