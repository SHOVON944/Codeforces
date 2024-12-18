#include<iostream>
using namespace std;

int main()
{
    int n,m;
    while(1){
        cin>>n>>m;
        if(m<=0 || n<=0 ){
            break;
        }
         if (n > m) {
            swap(n, m);
        }
        int sum = 0;
        for(int i=n; i<=m; i++){
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"sum ="<<sum<<endl;
    }
    return 0;
}