#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int matrix[5][5];
    int row,coloum,moves;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>matrix[i][j];
            if(matrix[i][j] == 1){
                row = i;
                coloum = j;
                break;
            }
        }
    }
    moves = abs(row - 3 + 1) + abs(coloum - 3 + 1);        // 1 jog kora hocce karon index 0  theke dhorte hoi sejnno
    cout<<moves;
    return 0;
}