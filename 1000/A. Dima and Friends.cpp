#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin>>n;
    vector <int> finger(n);
    for(int i=0; i<n; i++) cin>>finger[i];
    int sum_finger = accumulate(finger.begin(), finger.end(), 0);
    int count = 0;
    for(int i=1; i<=5; i++){
        int total = sum_finger + i;
        if( !((total % (n+1)) == 1) ){   // n+1 karon eikhane n hocce dimar friend,,,r dima soho n+1...
            count++;
        }
    }
    cout<<count;

    return 0;
}