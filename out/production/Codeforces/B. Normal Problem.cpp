#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string mirror;
        cin >> mirror;
        reverse(mirror.begin(), mirror.end());
        for (char &changer : mirror) {
            if (changer == 'p') changer = 'q';
            else if (changer == 'q') changer = 'p';
        }
        
        cout << mirror << "\n";
    }
    return 0;
}
