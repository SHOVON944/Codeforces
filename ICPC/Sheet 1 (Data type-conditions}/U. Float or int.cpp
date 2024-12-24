#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    float x;
    cin>>x;
    float desimal_checker = x - (int)x;
    if(desimal_checker == 0) cout<<"int "<<x;
    else cout<<"float "<<fixed << setprecision(3)<<(int)x<<" "<<desimal_checker;
    return 0;
}