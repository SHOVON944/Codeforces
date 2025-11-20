#include<bits/stdc++.h>
using namespace std;

int main()
{
    int passenger, airplane;
    cin>>passenger>>airplane;
    vector<int> seat_tk(airplane);

    for(int i=0; i<airplane; i++) cin>>seat_tk[i];
    long long max_tk = 0;
    long long min_tk = 0;

    vector<int> sorting = seat_tk;
    vector<int> rev_sorting = seat_tk;
    sort(sorting.begin(), sorting.end());
    sort(rev_sorting.begin(), rev_sorting.end(), greater<>());

    int passenger_entry = 0;        // 0 based index tai
    int all_entry_passenger = 0;
    while(1){
        if(sorting[passenger_entry] != 0){
            min_tk += sorting[passenger_entry];
            sorting[passenger_entry]--;
            all_entry_passenger++;
        } else{
            passenger_entry++;
            if(all_entry_passenger==passenger){
                break;
            }
        }
    }

    int counter = 0;
    int rev_all_entry_passenger = 0;
    while(1){
        max_tk += rev_sorting[counter];
        rev_sorting[counter]--;
        rev_all_entry_passenger++;
        counter++;    // eikhane == dewa karon hocce upore counter++ hocce tai..jdi condition er nice ditam thle if(counter==airplane-1) ditam...jehetu age counter++ hocce tai value bere giye if condtion execute hocce r counter zero kore disse...cesta korbo increament decreament sese dewa tobe obostha bujhe...
        if(counter==airplane){      // eikhane == dewa karon hocce upore counter++ hocce tai..jdi condition er nice ditam thle if(counter==airplane-1) ditam...jehetu age counter++ hocce tai value bere giye if condtion execute hocce r counter zero kore disse...cesta korbo increament decreament sese dewa tobe obostha bujhe...
            counter = 0;
        }
        if(rev_all_entry_passenger== passenger){
            break;
        }
    }

    cout<<max_tk<<" "<<min_tk;


    return 0;
}