#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i_change = 1;
    int j_change = 1;
    while(1){
        for(int i=1; i<=i_change; i++){
            for(int j=1; j<=j_change; j++){
                if(((i*i)+(j*j))%n==0){
                    cout<<i<<" "<<j;
                    break;
                }
                i_change++;
                j_change++;
            }
        }
    }
    return 0;
}