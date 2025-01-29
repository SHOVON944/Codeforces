#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sorter[] = {a,b,c};
    sort(sorter, sorter+3);
    for(int i=0; i<3; i++){
        cout<<sorter[i]<<endl;
    }
    cout<<endl<<a<<endl<<b<<endl<<c<<endl;
    return 0;
}