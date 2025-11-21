#include<bits/stdc++.h>
using namespace std;

int main()
{

    int passenger, airplane;
    cin>>passenger>>airplane;

    priority_queue<int> max_seat;
    priority_queue<int, vector<int>, greater<int>> min_seat;

    for(int i=0; i<airplane; i++){
        int a;
        cin>>a;
        max_seat.push(a);
        min_seat.push(a);
    }
    long long max_tk = 0;
    long long min_tk = 0;

    int seat_availabe_for_max = passenger;
    while(seat_availabe_for_max--){
        int store = max_seat.top();
        max_seat.pop();
        max_tk += store;
        store--;
        if(store>0){
            max_seat.push(store);
        }
    }

    int seat_availabe_for_min = passenger;
    while(seat_availabe_for_min--){
        int store = min_seat.top();
        min_seat.pop();
        min_tk += store;
        store--;
        if(store>0){
            min_seat.push(store);
        }
    }

    cout<<max_tk<<" "<<min_tk;

    return 0;
}