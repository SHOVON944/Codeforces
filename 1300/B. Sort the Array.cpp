#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;  cin>>n;
        vector<int>arr(n), checker(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            checker[i] = arr[i];
        }

        sort(checker.begin(), checker.end());
        
        if(arr == checker){
            cout<<"yes"<<endl<<"1 1"<<endl;
            return 0;
        }

        int first_checker = 0;
        int last_checker = n-1;
        while(arr[first_checker]==checker[first_checker]) first_checker++;
        while(arr[last_checker]==checker[last_checker]) last_checker--;

        reverse(arr.begin()+first_checker, arr.begin()+last_checker+1);

        if(arr == checker) cout<<"yes"<<endl<<first_checker+1<<" "<<last_checker+1<<endl;
        else cout<<"no"<<endl;
    

    return 0;
}