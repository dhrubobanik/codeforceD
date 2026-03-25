#include<bits/stdc++.h>
using namespace std;
int main(){
               long long t;cin>>t;
               while(t--){
                             long long n;cin>>n;
                             string s; cin>>s;
                             if(!(s[0]=='1'&& s.back()=='0' || s[0]=='0' && s.back()=='1')){
                                             cout<<s.size()<<endl;
                             }
                           
                                             

                             while(s[0]=='1'&& s.back()=='0' || s[0]=='0' && s.back()=='1'){
                              s.erase(0,1);
                              s.pop_back();
                              if(!(s[0]=='1'&& s.back()=='0' || s[0]=='0' && s.back()=='1')){
                                             cout<<s.size()<<endl;
                                             break;

                              }
                             } 
               }
}