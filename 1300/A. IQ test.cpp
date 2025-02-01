#include<iostream>
using namespace std;

int main()
{
    int n,x,even_position,odd_position;
    int even = 0;
    int odd = 0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>x;
        if(x%2==0){
            even++;
            even_position = i;
        } else{
            odd++;
            odd_position = i;
        }
    }
    if(even == 1) cout<< even_position;
    else cout<<odd_position;
}