#include <iostream>
#include <string>
using namespace std;

int main() {
    string mainword, revers_input_word;
    cin >>mainword>>revers_input_word;
    string reversed_mainword = string(mainword.rbegin(),mainword.rend());
    if (revers_input_word== reversed_mainword) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

// #include<iostream>
// #include <cstring>
// using namespace std;

// int main()
// {
//     char word[100];
//     char reverseword[100];
//     char store[100];
//     cin>>word;
//     cin>>reverseword;
//     int lengthword = strlen(word);
//     bool flag = true;
//     int i,j;
//     for( i=0,j=lengthword-1; i<lengthword; i++,j--){
//         store[j]=word[i];
//     }
//     int lenghtstore=strlen(store);
//     for(i=0; i<lenghtstore; i++ ){
//         if(store[i]!=reverseword[i]){
//             flag=false;
//             break;
//         }
//     }
//     if(flag == true) cout<<"YES";
//     if(flag == false) cout<<"NO";
//    return 0;
// }