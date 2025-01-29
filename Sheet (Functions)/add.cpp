#include<iostream>
using namespace std;

int add(int x, int y){
    int sum = x+y;
    return sum;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int sum = add(a,b);
    cout<<sum;
    return 0;
}