#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cups[3];
    int medals[3];
    int cSum = 0;
    int mSum = 0;
    
    for(int i=0; i<3; i++){
        cin >> cups[i];
        cSum += cups[i];
    }
    for(int i=0; i<3; i++){
        cin >> medals[i];
        mSum += medals[i];
    }
    int n;
    cin >> n;
    
    int cShelf = cSum/5 ;
    int mShelf = mSum/10 ;
    int needShelf;
    if(cSum%5==0   &&   mSum%10==0) needShelf = cShelf  + mShelf;
    else if(cSum%5!=0   &&   mSum%10==0) needShelf = cShelf + 1  + mShelf;
    else if(cSum%5==0   &&   mSum%10!=0) needShelf = cShelf   + mShelf + 1;
    else if(cSum%5!=0   &&   mSum%10!=0) needShelf = cShelf + 1 + mShelf +1;
    else if(cSum%5!=0   ||   mSum%10!=0) needShelf = cShelf + mShelf + 1;
    
    if(n>=needShelf) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}