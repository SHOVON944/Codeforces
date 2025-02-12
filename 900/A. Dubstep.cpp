#include<bits/stdc++.h>
using namespace std;

int main()
{
    string old;
    cin>>old;

    while(old.find("WUB") != string :: npos){
        old.replace(old.find("WUB"), 3, " ");
    }

    string old_to_new;
    bool space = false;
    for(char &ch : old){
        if(ch != ' '){              // eikhane 2/2+ character thakle 1st character print howar por true holeo jehetu if statement execute hoice sejnno else if r execute hobe na...er por abr loop ta ghurbe tokhon abr prothome if statement check korbe not else if...sejnno abr 2nd character print hobe and space true thakbe kintu ager moto else if khatbe na...but jokhon character na peye ' '(space) pabe tokhon if statement khatbe na tokhon true er jonno  else if statement khatbe...r 1st e jdi 1/2/2+ ' '(space) thake thle space false thakar jonno if to emnie conditon manbe na sathe sathe else if o manbe na...
            old_to_new += ch;
            space = true;
        } else if(space){           // space jodio 2/2+ thake thle 1 bar else if kaj korar por false howe jasse.tokhon 2nd space if e khatbe na r false er jonno else if e o khatbe na...sejnnoo only 1 ta space print hobe
            old_to_new += " ";
            space = false;
        }
    }
    cout<<old_to_new;

    return 0;
}