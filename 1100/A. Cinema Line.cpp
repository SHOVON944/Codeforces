#include<iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int bills[x];
    int b25 = 0;
    int b50 = 0;
    for(int i=0; i<x; i++){
        cin >> bills[i];
        
        if(bills[i] == 25) b25++;
        else if(bills[i] == 50){
            if(b25>0){
                b25--;
                b50++;
            } else{
                cout << "NO" << endl;
                return 0;
            }
        } else if(bills[i] == 100){
            if(b25>0  &&  b50>0){
                b25--;
                b50--;
            } else if(b25>=3){
                b25-=3;
            } else{
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    
    
    return 0;
}