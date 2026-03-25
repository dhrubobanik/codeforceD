#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;cin>>tc;
               while(tc--){
                              long n,k;
                              cin>>n>>k;
                              string palindrome;
                              cin>>palindrome;
                              vector<long long> freq(26,0);
                              for(int i=0;i<n;i++){
                                             freq[palindrome[i]-'a']++;
                              }
                              long long cnt_odd_freq=0;
                              for(int i=0;i<26;i++){
                                             cnt_odd_freq+=freq[i]%2;
                              }
                              if(cnt_odd_freq>k+1) cout<<"NO"<<endl;
                              else cout<<"YES"<<endl;
               }
}