#include<bits/stdc++.h>
using namespace std;

int main()
{
    int press_switch[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            press_switch[i][j] = {1};
            cin>>press_switch[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

            int on_off = press_switch[i][j];

            if(i>0) on_off = on_off + press_switch[i-1][j];
            if(i<2) on_off = on_off + press_switch[i+1][j];
            if(j>0) on_off = on_off + press_switch[i][j-1];
            if(j<2) on_off = on_off + press_switch[i][j+1];

            cout<<(on_off % 2 ==0 ? "1":"0");
        }
        cout<<endl;
    }

    return 0;
}