#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;	cin>>n;
    vector <int>value(n);
    int chestS = 0;
    int bicepsS = 0;
    int backS = 0;
    for(int i=0; i<n; i++){
        cin >> value[i];
        if(i%3==2) backS += value[i];
        else if(i%3==1) bicepsS += value[i];
        else if(i%3==0) chestS += value[i];
    }
    if((chestS>bicepsS)  &&  (chestS>backS)) cout << "chest" << endl;
    else if((chestS<bicepsS)  &&  (bicepsS>backS)) cout << "biceps" << endl;
    else cout << "back" << endl;
    
    return 0;
}