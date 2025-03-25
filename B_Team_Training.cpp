#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--){
        int n, a;   cin>>n >>a;
        vector<int>member_skills(n);
        int counter = 0;
        int size = 0;
        int x = n-1;
        for (int i = 0; i < n; i++) cin >> member_skills[i]; sort(member_skills.begin(), member_skills.end());
        for(int i=x; i>=0; i--){
            size++;
            if(size*member_skills[i]>=a){
                counter++;
                size = 0;
            }
        }
        cout << counter<<endl;
    }

    return 0;
}
