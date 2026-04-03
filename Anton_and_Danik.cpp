#include<bits/stdc++.h>
using namespace std;
int main(){
               int n;
               cin>>n;
               string s;
               cin>>s;
               int Acount=0,Dcount=0;
               for(char ch:s){
                              if(ch=='A') Acount++;
                              if(ch=='D') Dcount++;
               }
               if(Acount<Dcount) cout<<"Danik"<<endl;
               else if(Acount>Dcount) cout<<"Anton"<<endl;
               else cout<<"Friendship"<<endl;
}