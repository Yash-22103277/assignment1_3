#include<bits/stdc++.h>

using namespace std;

int main(){

  string s;
  cout<<"Enter the string: ";
  cin>>s;

  string res="";
  for(int i=s.size(); i>=0; i--){
    res = res+s[i];
  }
    cout<<"\n"<<res;
}
