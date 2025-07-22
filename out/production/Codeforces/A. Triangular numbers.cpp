#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x =n;
    for(int i=1; i<=n; i++){
        int checker =(i*(i+1))/2;
        if(x==checker){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    
    return 0;
}