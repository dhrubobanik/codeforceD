#include<bits/stdc++.h>
using namespace std;
int main(){
               int n;
               cin>>n;
               bool result=false;
               while(n--){
                              int x;
                              cin>>x;
                              if(x==1) {cout<<"HARD"<<endl;
                                             result=true;
                              break;}
               }
               if(!result) cout<<"EASY"<<endl;
}