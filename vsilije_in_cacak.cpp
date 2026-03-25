#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;
               cin>>tc;
               while(tc--){
                              long long n,k,x;
                              cin>>n>>k>>x;
                              long long min_sum=0,max_sum=0;
                              min_sum=(k*(k+1))/2;
                              max_sum=(n*(n+1))/2-((n-k)*(n-k+1))/2;
                              if(max_sum>=x && min_sum<=x) cout<<"YES"<<endl;
                              else cout<<"NO"<<endl;


               }

}