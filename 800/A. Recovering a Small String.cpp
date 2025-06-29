#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=28){
            if(n==3) cout<<"aaa"<<endl;
            else cout<<"aa"<<(char)(96+n-2)<<endl;
        } else if(n<=52){
            int a = 1;
            bool check = false;
            while(!check){
                if(a+1+26 == n){
                    cout<<"a"<<(char(96+a))<<"z"<<endl;
                    check = true;
                } else{
                    a++;
                }
            }
        } else{
            cout<<(char)(96+n-52)<<"zz"<<endl;
        }
    }

    return 0;
}#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=28){
            if(n==3) cout<<"aaa"<<endl;
            else cout<<"aa"<<(char)(96+n-2)<<endl;
        } else if(n<=52){
            int a = 1;
            bool check = false;
            while(!check){
                if(a+1+26 == n){
                    cout<<"a"<<(char(96+a))<<"z"<<endl;
                    check = true;
                } else{
                    a++;
                }
            }
        } else{
            cout<<(char)(96+n-52)<<"zz"<<endl;
        }
    }

    return 0;
}