#include<iostream>
using namespace std;

int main()
{
    float x;
    cin>>x;
    if((x>=0)  &&  (x<=25)) cout<<"Interval [0,25]";
    if((x>25)  &&  (x<=50)) cout<<"Interval (25,50]";
    if((x>50)  &&  (x<=75)) cout<<"Interval (50,75]";
    if((x>75)  &&  (x<=100)) cout<<"Interval (75,100]";
    if(x<0  ||  x>100) cout<<"Out of Intervals";
    return 0;
}