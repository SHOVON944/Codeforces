#include<iostream>
using namespace std;

int main()
{
    float a,b;
    cin>>a>>b;
    float floor,ceil,round;
    floor = (int)a/(int)b;
    float ceil_round_checker = a/b-(int)a/(int)b;       // ceil r round er desimal er porer man check kore 1+ or 1= korar jonno
    if(ceil_round_checker==00) ceil = ((int)a/(int)b);     //ceil check hobe..jdi 00 hoi thle 1 jog hobe na...r desimal pela int er sathe 1 + hobe seta next line er step e ase
    else ceil = ((int)a/(int)b)+1;
    if(ceil_round_checker>=0.50) round = ((int)a/(int)b)+1;     // round check hobe..jdi desiman 0.50 or 0.50+ hoi thle int er porer man ta..bola jai 2.50 or 2.51 hole amra jmn prai 3 lekhi tmn 
    if(ceil_round_checker<0.50) round =(int)a/(int)b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round<<endl;
    return 0;
}