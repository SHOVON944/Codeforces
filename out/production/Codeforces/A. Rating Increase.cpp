#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string numbers;
        cin>>numbers;
        int size = numbers.size();

        bool checker = false;

        for(int i=1; i<size; i++){
            string partFirst = numbers.substr(0, i);
            string partSecond = numbers.substr(i);

            if((partFirst.size()>1  &&  partFirst[0]=='0')  ||  (partSecond.size()>1  &&  partSecond[0]=='0')){
                continue;
            }
            int firstPart = stoi(partFirst);
            int secondPart = stoi(partSecond);

            if(secondPart>firstPart){
                cout<<firstPart<<" "<<secondPart<<endl;
                checker = true;
                break;
            }
        }
        if(!checker){
            cout<<"-1"<<endl;
        }
    }

    return 0;
}