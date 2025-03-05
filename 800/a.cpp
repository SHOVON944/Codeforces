#include<bits/stdc++.h>
using namespace std;

int main()
{
  int eye, mouth, body;
  cin>>eye>>mouth>>body;
  int store = 0;
  int case1 = min(eye, min(mouth, body));
  store = store + case1;
  
  if(body< eye  &&  body<mouth) cout<<body<<endl;

  eye = eye - store*2;
  mouth = mouth - store;
  body = body - store;

  if(eye>1  &&  mouth>0){
    store = store + min(eye/2, mouth);
    eye = eye - (min(eye/2, mouth))/2;
  }

  cout<<store<<endl;

  return 0;
}