#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        long long row,coloum,MEX;
        cin>>row>>coloum;
        MEX = max(row,coloum)+1;    // hind bujhai disilo 2D array dia
        cout<<MEX<<endl;
    }
    return 0;
}