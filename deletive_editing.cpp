 #include<bits/stdc++.h>
using namespace std;
void solve(){
               string s,t;
               cin>>s>>t;
               vector<long long > occurrence_t(26,0);
               for(long long i=0;i<t.size();i++){
                              occurrence_t[t[i]-'A']++;

               }
               for(long long i=s.size()-1;i>=0;i--){
                              if(occurrence_t[s[i]-'A']>0){
                                             occurrence_t[s[i]-'A']--;
                              }else {
                                             s[i]='.';
                              }
               }
               string f_string="";
               for(long long i=0;i<s.size();i++){
                              if(s[i]!='.'){
                                             f_string+=s[i];
                              }
               }
               if(f_string==t) cout<<"YES"<<endl;
               else cout<<"NO"<<endl;

}
int main(){
               long long tc;
               cin>>tc;
               while(tc--){
                              solve();
               }
}