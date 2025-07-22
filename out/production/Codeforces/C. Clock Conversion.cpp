#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string time;
    while(t--){
        cin>>time;
        int hour = stoi(time.substr(0,2));                          // substr(0th index, lenght) -> eikhane 0th index theke 1th index porjonto jabe not 2th index...karon 0th, 1th index = lenght 2;
        int final_hour = hour - 12;
        if(hour>12  && hour<22){                                    // for dupur 1 ta theke rat 9:59 porjonto...10 ta nile sathe samne ekta 0 ese jabe cout er jonno
            cout<<"0"<<final_hour<<":"<<time[3]<<time[4]<<" PM"<<endl;
        } else if(hour>12  &&  hour>21){                            //for rat 10 ta theke 
            cout<<final_hour<<":"<<time[3]<<time[4]<<" PM"<<endl;
        } else if(hour==12){                                        // for dupur 12 ta only
            cout<<time<<" PM"<<endl;
        } else if(hour==0){                                         // for rat 12 ta only
            cout<<"12"<<":"<<time[3]<<time[4]<<" AM"<<endl;
        } else{                                                     // for rat 1 ta theke sokal 11:59 porjonto
            cout<<time[0]<<time[1]<<":"<<time[3]<<time[4]<<" AM"<<endl;
        }
    }
    return 0;
}