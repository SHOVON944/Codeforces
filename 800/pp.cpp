#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, n;
    cin>>a>>b>>n;
    bool one = false;
    long long store = a;
    int lastA = a%10;
    int lastB = b%10;
    if(lastA ==0  &&  lastB==0){
        int plus = 1;
        for(int i=0; i<b; i++){
            long long new_number = store*10 + plus;
            if(new_number%b==0){
                store = new_number;
                one = true;
                break;
            }
            plus++;
        }
        if(!one){
                cout<<"-1"<<endl;
                return 0;
            } else{
            cout<<a;
            for(int i=1; i<=n; i++){
                cout<<"0";
            }
            return 0;
        }
    }
    while(n--){
        int plus = 1;
        for(int i=0; i<b; i++){
            long long new_number = store*10 + plus;
            if(new_number%b==0){
                store = new_number;
                one = true;
                break;
            }
            plus++;
        }
        if(!one){
            cout<<"-1"<<endl;
            return 0;
        }
    }
    if(a==store) cout<<"-1"<<endl;
    else cout<<store<<endl;

    return 0;
}