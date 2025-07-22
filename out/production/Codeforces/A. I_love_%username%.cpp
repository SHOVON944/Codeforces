#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int number[n];
    for(int i=0; i<n; i++){
    	cin >> number[i];
    }
    int minn=number[0];
    int maxn=number[0];
    int counter = 0;
    for(int i=1; i<n; i++){
        if(minn>number[i]){
            minn = number[i];
            counter++;
        }
        if(maxn<number[i]){
            maxn = number[i];
            counter++;
        }
    }
    cout << counter << endl;
    
    return 0;
}