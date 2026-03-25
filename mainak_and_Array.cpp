#include<bits/stdc++.h>
using namespace std;
int main(){
               long long tc;
               cin>>tc;
               while(tc--){
                              long long n;
                              cin>>n;
                              vector<long long> v(n);
                              for(auto &x:v)cin>>x;
                              long long mn=*min_element(v.begin(),v.end());
                              long long mx=*max_element(v.begin(),v.end());
                              long long res=mx-mn;
                              cout<<res<<endl;
               }

}