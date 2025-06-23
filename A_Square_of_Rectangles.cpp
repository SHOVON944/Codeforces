#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int arrA[3];
        int arrB[3];
        cin>>arrA[0]>>arrB[0]>>arrA[1]>>arrB[1]>>arrA[2]>>arrB[2];
        sort(arrA, arrA+3, greater<int>());
        sort(arrB, arrB+3, greater<int>());
        int a1 = arrA[0];
        int b1 = arrB[0];
        int a2 = arrA[1];
        int b2 = arrB[1];
        int a3 = arrA[2];
        int b3 = arrB[2];

        if((a1==a2+a3)   &&   (b1+b2==a1   &&   b1+b2==a1)){
            cout<<"YES"<<endl;
        } else if((a1==a2   &&   a2==a3)    &&   (b1+b2+b3==a1)){
            cout<<"YES"<<endl;
        } else if((a1+a2==b1   && a1+a3==b1)   &&   (b1==b2+b3)){
            cout<<"YES"<<endl;
        } else if((b1==b2   &&   b1==b3)   &&   (a1+a2+a3==b1)){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}