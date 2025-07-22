#include <bits/stdc++.h>
using namespace std;

int main()
{
    string cAPS;
    cin>>cAPS;
    string new_str = string(cAPS.begin()+1, cAPS.end());
    if(all_of(cAPS.begin(), cAPS.end(), [](char c){return isupper(c);})){
        for(char &ch : cAPS){
            ch = tolower(ch);
        }
        cout << cAPS << endl;
        return 0;
    } else if(islower(cAPS[0])){
        if(all_of(cAPS.begin()+1, cAPS.end(), [](char c){return isupper(c);})){
            for(char &ch :new_str){
            ch = tolower(ch);
        	}
            cout << (char)toupper(cAPS[0])<< new_str << endl;
            return 0;
        }
    }
    cout << cAPS << endl;
    
    return 0;
}