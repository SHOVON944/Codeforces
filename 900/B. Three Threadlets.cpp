#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        vector <int> newVec;
        for(int i=0; i<3; i++){
            int x;
            cin>>x;
            newVec.push_back(x);
        }

        sort(newVec.begin(), newVec.end());
        set<int> value(newVec.begin(), newVec.end());
        bool found = false;
        if(newVec[0]==1  &&  newVec[1]==2  &&  newVec[2]==3){
            found = true;
        } else if(value.size()==1){
            found = true;
        } else if(value.size()==2  ){
            if((newVec[0]*2==newVec[2]  ||  newVec[0]*3==newVec[2]  || newVec[0]*4==newVec[2] )     &&  (newVec[0]==newVec[1])){
                found = true;
            } else if((newVec[0]*2==newVec[2])     &&  (newVec[1]==newVec[2])){
                found = true;
            }
        } else if(newVec.size()==3){
            if(newVec[0]*2==newVec[1]  &&  newVec[0]*3==newVec[2]){
                found = true;
            }
        } else if(newVec.size()==1){
            found = true;
        }
        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}