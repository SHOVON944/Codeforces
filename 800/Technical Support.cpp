#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
        string ques_ans;
        cin >> ques_ans;
        int ques =0;
        int ans=0;
        for(char &ch : ques_ans){
            if(ch=='Q') ques++;
            if(ch=='A'  &&   ques>0) ques--;
        }
        if(ques==00 ) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}