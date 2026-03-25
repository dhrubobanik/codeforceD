#include<bits/stdc++.h>
using namespace std;
void solve(){
               long long a,b,c;
               cin>>a>>b>>c;
               long long new_a=b-(c-b);
               if(new_a>=a && new_a%a==0 ){
                              cout<<"YES"<<endl;
                              return;
               }
               long long new_b=a+(c-a)/2;
               if(new_b>=b && new_b%b==0&& (c-a)%2==0 ){
                              cout<<"YES"<<endl;
                              return;
               }
               long long new_c=b+(b-a);
               if(new_c>=c && new_c%c==0){
                              cout<<"YES"<<endl;
                              return;
               }
               cout<<"NO"<<endl;
               return ;
}
int main(){
               ios_base::sync_with_stdio(false);
               cin.tie(0);cout.tie(0);
               long long tc;
               cin>>tc;
               while(tc--){
                              solve();
               }
}