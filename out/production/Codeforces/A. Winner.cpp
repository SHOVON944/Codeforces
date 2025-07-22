#include<bits/stdc++.h>
using namespace std;

int main()
{
    int round;
    cin>>round;
    string name;
    int score;
    int count_m = 0;
    int count_a = 0;
    int high = 0;
    string checker=" ";
    for(int i=0; i<round; i++){
        cin>>name>>score;
        if(name == "mike") count_m++;
        if(name == "andrew") count_a++;
        if(score>high){
            checker = name;
        }
    }

    if(count_a==count_m) cout<<checker;
    else if(count_a>count_m) cout<<"andrew";
    else cout<<"mike";

    return 0;
}