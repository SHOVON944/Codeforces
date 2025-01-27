#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        int round_appartment = x%10;        // 222 hole eita 1, 11, 111, 1111, 2, 22, 222 ei round er reminder 2 asbe sejonno amdr loop ekbar round korbe r summation e thakbe 1+2+3+4....eita 1 er round er jonno use hobe...2 er round er jonno amra alada loop use korbo karon seikhane 222 / 2 / 22 / 2222 emn thakbe,,,amra janina koto seta...sejnnoo alada ekta loop use korbo..seta niche
        int last_aprtmnt_round = 0;
        while(x>0){
            last_aprtmnt_round ++; // eikhane oi j 222 er jonno check hbe.. mane 222 hole 1+2+3 hobe..sejnoo 3 ta loop dorkar...to x mane 222 re 10 dia vag dile 0 hobe 3 bar vag dile...sei methood eikhane....
            x/=10;
        }
        int round_summation = 0;
        for(int i=1; i<round_appartment; i++){
            round_summation = 1+2+3+4+round_summation;
        }
        for(int i=1; i<=last_aprtmnt_round; i++){
            round_summation += i;
        }
        cout<<round_summation<<endl;
    }
}