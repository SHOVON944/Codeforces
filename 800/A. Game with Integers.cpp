#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x%3==2  || x%3==1) cout<<"First"<<endl;          // suppose dhori x=5..eikhatre 1st ekta increase korlei 6 hocce ja 3 dara disible (x%3==2) and dhori x=4...eikhetre 1st ekta decrease er jonno 3 e jabe ja 3 dara disible (x%3==1)...lastly jodi 3 dhori eikhetre 1st ekta increase dile 4 hobe ba decrease dile 2 hobe...ja konotai 3 dara disible na..tokhon 2nd er turn..tokhon jodi value 4 hoi 2nd ekta decrease dibe r value jodi 2 hoi tokhon 2nd ekta increase dibe tokhon each value 3 hobe ja 3 dara disible...
        else  cout<<"Second"<<endl;
    }

    return 0;  
}