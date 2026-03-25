#include<bits/stdc++.h>
using namespace std;
int main(){
               int n;
               cin>>n;
               while(true){
                              n++;
                              string s=to_string(n);
                              set<char> r(s.begin(),s.end());
                              if(r.size()==s.size()){ cout<<n<<endl;
                                             break;}
               }
}