#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<int> h(n);
  vector<int> ans(n);
  for(int i=0; i<n; i++){
    cin>>h[i];
    }
    ans[0] = 0;
    ans[1]= abs(h[1]-h[0]);
    for(int i=2; i<n; i++){
      ans[i] = min(ans[i-1] + abs(h[i]-h[i-1]), ans[i-2] + abs(h[i]-h[i-2]));
    }
    cout<<ans[n-1]<<endl;

  return 0;
}