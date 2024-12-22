#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    (b*log(a) > d*log(c)) ? cout<<"YES" : cout<<"NO"; // pow(a,b) = b*log(a) eivabe lekha jai...maybe pow function e power beshi man nite pare tai log use...
    return 0;
}