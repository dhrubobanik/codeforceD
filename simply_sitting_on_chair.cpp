#include<bits/stdc++.h>
using namespace std;
void solve(){
               long long n;
               cin>>n;
               vector<long long > v(n);
               for(auto &x:v)cin>>x;
               vector<long long>r;
               long long count=0;
               for(int i=0;i<n;i++){
                             if(v[i]<=i+1)count++;
               }
               cout<<count<<endl;
}
int main(){
               long long tc;
               cin>>tc;
               while(tc--)solve();
}
