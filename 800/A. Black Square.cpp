#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> calaries(4);
    for(int i=0; i<4; i++) cin>>calaries[i];

    string black_box;   cin>>black_box;

    int need_calaries = 0;
    for(char BB : black_box){
        if(BB == '1') need_calaries += calaries[0];
        if(BB == '2') need_calaries += calaries[1];
        if(BB == '3') need_calaries += calaries[2];
        if(BB == '4') need_calaries += calaries[3];
    }
    cout<<need_calaries<<endl;

    return 0;
}
