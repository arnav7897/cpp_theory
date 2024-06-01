#include<iostream>
#include<string>
using namespace std;
int main(){
  char f[26]={0};
  string a;
  cin>>a;
  for(i=0;i<a.length();i++){
    int indx = tolower(a[i]) - 'a' ;
    f[indx]++;
  }
//  for checking maximum 
  int maxi = -1;
  for(i=0;i<26;i++){
    maxi = max(maxi,a[i]);}
  cout<<'a'+maxi;
return 0;
}
