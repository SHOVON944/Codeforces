#include<bits/stdc++.h>
using namespace std;

int main()
{
    int box, key;
    cin >> box>>key;
    int box_num[box], key_num[key];
    int boxEven =0;
    int boxOdd =0;
    int keyEven =0;
    int keyOdd =0;
    for(int i=0; i<box; i++){
        cin >> box_num[i];
        if(box_num[i]%2==0) boxEven++;
        else boxOdd++;
    }
    for(int i=0; i<key; i++){
        cin >> key_num[i];
        if(key_num[i]%2==0) keyEven++;
        else keyOdd++;
    }
    int unlock1= min(boxEven,keyOdd);
    int unlock2= min(boxOdd,keyEven);
    int unlock = unlock1+unlock2;
    cout << unlock << endl;
    
    
    
    return 0;
}