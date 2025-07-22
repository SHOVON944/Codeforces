#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int count = 0;
    int size = s.size();
    for(int i=0; i<size; i++){
        if(s[i] == 'Q'){
            for(int j=i+1; j<size; j++){
                if(s[j] == 'A'){
                    for(int k=j+1; k<size; k++){
                        if(s[k] == 'Q'){
                            count ++;
                        }
                    }
                }
            }
        }
    }
    cout<<count;

    return 0;
}