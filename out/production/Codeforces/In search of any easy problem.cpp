#include<iostream>
#include<vector>
#include<string>
#include<cctype>    //for toupper case
using namespace std;
    
int main()
{
    int n;
    cin>>n;
    int check=0;
    while(n--){
        int x;
        cin >> x;
        if(x==1) check=x;
    }
    if(check==0) cout << "Easy" << endl;
    else cout << "Hard" << endl;
    return 0;
}