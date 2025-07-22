#include<bits/stdc++.h>
using namespace std;

int main()
{
    char left_right;
    string pressButton;
    cin>>left_right>>pressButton;

    string qline = "qwertyuiop";
    string aline = "asdfghjkl;";
    string  zline = "zxcvbnm,./";

    string ans = "";
    int change_position = 0;
    for(char ch : pressButton){
        if(qline.find(ch) != string::npos){
            change_position = qline.find(ch);
            if(left_right=='L'){
                ans = ans + qline[change_position+1];
            } else{
                ans = ans + qline[change_position-1];
            }
        } else if(aline.find(ch) != string::npos){
            change_position = aline.find(ch);
            if(left_right=='L'){
                ans = ans + aline[change_position+1];
            } else{
                ans = ans + aline[change_position-1];
            }
        } else if(zline.find(ch) != string::npos){
            change_position = zline.find(ch);
            if(left_right=='L'){
                ans = ans + zline[change_position+1];
            } else{
                ans = ans + zline[change_position-1];
            }
        }
    }
    cout<<ans<<endl;
}