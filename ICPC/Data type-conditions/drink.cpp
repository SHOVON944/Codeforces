#include<iostream>
using namespace std;

int main()
{
    float n;
    float sum=0;
    cin >> n;
    float arr[100];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
        sum=sum+arr[i];
        }
        float avrg=sum/n;
        cout<<avrg;
        return 0;
}