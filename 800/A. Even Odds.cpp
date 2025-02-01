#include<iostream>
using namespace std;

int main()
{
    int odd_even,check_number;
    cin>>odd_even>>check_number;
    int answer = 0;
    if(((odd_even/2)+1)<check_number  &&  ((odd_even/2)+1)!=check_number){      // thle eikhetre checker ta even check korbe karon checker er man odd_even theke boro tar mane checker already odd check kore asbe...
        answer = (check_number-((odd_even/2)+1))*2;     // ami math kore ei formula peyeci...evabe korele kat chat hoye even number pawa somvob
    } else if(((odd_even/2))<check_number  &&  ((odd_even/2)+1)!=check_number){
        answer = (check_number-((odd_even/2)+1))*2;
    } else{
        answer = (check_number*2)-1;    //  Odd number check er jonno...thle checker dia 2 dia gun kore 1 jog korle odd numbber pawa jai
    }
    cout<<answer;
    return 0;
}