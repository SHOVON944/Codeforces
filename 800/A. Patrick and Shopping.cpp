#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long d1, d2, d3;
    cin>>d1>>d2>>d3;

    long long hS1S2H = d1 + d3 + d2;              // same as house -> d2 ->  d1 -> house
    long long hS1Hs2H = d1 + d1 + d2 + d2;        // 2d1 + 2d2
    long long hS1S2S1H = d1 + d3 + d3 + d1;       // 2d1 + 2d3
    long long hS2S1S2H = d2  + d3 + d3 + d2;      // 2d2 + 2d3

    int min_distance = min(hS1S2H, min(hS1Hs2H, min(hS1S2S1H, hS2S1S2H)));
    cout<<min_distance;

    return 0;
}