#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int ans = 0;
    for(int i=0; i<s.size(); i++){
        int count = 0;
        if(s[i] == '0'){
            while(s[i]=='0'  &&  i<s.size()){   // eikhane anar s[i]=='0' check dite hobe karon if(s[i]=='0') theke 0 check diye asleo nicer abr check korbe j por por zero ase kina...ei condition ta na dile uporer ekta zero mane if er zero ta manse kintu er por 7/7+ zero ase kina seta r check hocce na...
                count++;
                i++;
            }
        } else{
            while(s[i]=='1'  &&  i<s.size()){
                count++;
                i++;
            }
        }
        if(count>=7) ans=1;
        i--;
    }
    if(ans==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}