#include<bits/stdc++.h>
using namespace std;
int main(){
               string s;
               getline(cin,s);
               string result;
               for(char ch: s){
                              if(ch!='{'&& ch!='}'&& ch!=' '&& ch!=',') result+=ch;
               }
              set<char> m(result.begin(),result.end());
              cout<<m.size()<<endl;

}