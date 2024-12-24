#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        long long n1,n2;
        cin>>n1>>n2;
        long long sum=0;
        if(n1>n2){
            swap(n1,n2);
        }
        for(int i=n1+1; i<n2; i++){
            if(i%2!=0){
                sum+=i;
            }
        }
        cout <<sum<< endl;
    }
    return 0;
}