#include<iostream>
using namespace std;

int main()
{
    string tnr;
    cin >> tnr;
    for(int i=0; i<tnr.size();) {
        if(tnr[i]=='.'){
            cout << "0";
            i++;
        } else if(tnr[i]=='-'   &&   tnr[i+1]=='.'){
            cout << "1";
            i +=2;
        } else{
            cout << "2";
            i +=2;
        }
    }
    
    return 0;
}