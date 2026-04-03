#include<bits/stdc++.h>
using namespace std;
int main(){
               string word;
               cin>>word;
               int upper=0,lower=0;
               for(char ch:word){
                              if(isupper(ch)) upper++;
                              else lower++;
               }
               if(upper>lower) {
                              for(char ch:word){
                                             cout<<(char)toupper(ch);
                              }
               }else {
                              for(char ch:word){
                                             cout<<(char)tolower(ch);
                              }
               }

}