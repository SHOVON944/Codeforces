#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    long long n,sum;
    cin>>n;
    if (n % 2 == 0) {
        sum = n / 2;
    } else {
        sum = -(n + 1) / 2;
    }
        cout<<sum;
}