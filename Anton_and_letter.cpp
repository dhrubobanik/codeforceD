#include<bits/stdc++.h>
using namespace std;
int main(){
               string s;
               getline(cin,s);
               set<char> m;
               for(char ch: s){
                              if(ch =='{'||ch=='}'||ch==','||ch==' ') continue;
                              else m.insert(ch);
               }
               cout<<m.size()<<endl;

}