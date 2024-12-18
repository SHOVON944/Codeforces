#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int nspace = n-1;
    int nstar = 1;
    for(int i=1; i<=2*n; i++){
        for(int j=1; j<=nspace; j++){
            cout<<" ";
        }
        for(int k=1; k<=nstar; k++){
            cout<<"*";
        }
        if(i<n){
            nspace--;
            nstar+=2;
        } if(i==n){
            nspace=nspace;
            nstar=nstar
            ;
        } if(i>n){
            nspace++;
            nstar-=2;
        }
        cout<<endl;
    }
    return 0;
}