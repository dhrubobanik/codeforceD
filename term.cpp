#include<bits/stdc++.h>
using namespace std;
int main(){
               int n;
               cin>>n;
               int max=0,current=0;
               while(n--){
                              int exit,enter;
                              cin>>exit>>enter;
                              current=enter-exit+current;
                              if(current>max) max=current;
               }
               cout<<max<<endl;
}