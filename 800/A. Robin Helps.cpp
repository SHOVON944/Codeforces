#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int person, gold;
        cin>>person>>gold;
        vector <int> person_gold(person);
        for(int i=0; i<person; i++) cin>>person_gold[i];

        int robinTakeGolds = 0;
        int giveCounter = 0;

        for(int i=0; i<person; i++){
            if(person_gold[i]>=gold){
                robinTakeGolds += person_gold[i];
            } else if(person_gold[i]==0   &&   robinTakeGolds>0){
                robinTakeGolds--;
                giveCounter++;
            }
        }
        cout<<giveCounter<<endl;
    }

    return 0;
}