#include<bits/stdc++.h>
using namespace std;

int main()
{
    #include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> station(n);
    for(int i=0;  i<n; i++) cin>>station[i];
    int s, t;
    cin>>s>>t;
    if(s==t){
        cout<<0<<endl;
    } else{
        if(s>t) swap(s,t);
        int distance = 0;
        for(int i=s-1; i<t-1; i++){
            distance += station[i];
        }
        int full_distance = accumulate(station.begin(),  station.end(), 0);
        int rev_distance = full_distance - distance;
        int final_distance = min(distance, rev_distance);
        cout<<final_distance;
    }

    return 0;
}


    return 0;
}