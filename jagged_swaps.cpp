#include<bits/stdc++.h>
using namespace std;
int main(){
               int t;
               cin>>t;
               while(t--){
                              int n;cin>>n;
                              vector<int> v(n);
                              for(int i=0;i<n;i++) cin>>v[i];
                              int min=*min_element(v.begin(),v.end());
                              if((v[0]==min)) cout<<"YES"<<endl;
                              else cout<<"NO"<<endl;
               }
}