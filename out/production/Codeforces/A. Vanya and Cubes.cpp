#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cube_number;
    cin>>cube_number;
    int cubes = 0;
    int count = 1;
    int lenght = 0;                // -1 thek suru korteci karon while loop er vitore jodi cube sum hoye kichu cube bad thake jeta dia new cube make kora jai na tau while loop ekbar ghurbe...karon sum_cube<cube_number hobe...
    int sum_cube = 0;
    while(sum_cube + cubes + 1<=cube_number){
        cubes = cubes + count;
        sum_cube = sum_cube + cubes;
        lenght++;
    }
    cout<<lenght;

    return 0;
}