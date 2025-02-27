#include<iostream>
using namespace std;

int main()
{
    int y;
    cin >> y;
    int checker = y+1;
    while(1){
        int a =checker/1000;
        int b = (checker/100)%10;
        int c = (checker/10)%10;
        int d = (checker%10);
        
        if(a!=b  &&  a!=c  &&a!=d){
            if(b!=c  &&  b!=d){
                if(c!=d){
                    cout<<checker;
                    return 0;
                }
            }
        }
        checker ++;
    }
    
    return 0;
}