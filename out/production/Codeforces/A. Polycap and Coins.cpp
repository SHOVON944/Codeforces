#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){                                      // law is : c1 + 2*c2 = n, condition is : |c1-c2| most low value
        int n;                                      // let, c1=x, c2=x [Because, |c1-c2| jotota somvob kom value, caile soman.sejonno c1,c2=x]
        cin>>n;                                     // put this value, x + 2*x = n,
        int c1, c2;                                 //               or, 3x = n,
        c2 = n/3;                                   //               or, x = 3/n,
        c1 = n - 2*c2;                              // Now, again replace x to c2 and c1 and we get,
                                                    //              c2 = n/3,
        if(abs(c1-c2) > abs((n-2*(c2+1))-(c2+1))){    //          and c1 = n - 2*c2,
            c2 += 1;
            c1 = n - 2*c2;                          // kono kono khetre |c1-c2| er value ta k r o choto kora jabe..seijonno c2 er man 1 barale posiible..
        }                                           // Now, new_c2 = c2 + 1
        cout<<c1<<" "<<c2<<endl;                    //      new_c1 = n - 2*new_c2
    }                                               // Condition is : |new_c1 - new_c2|
                                                    //            or, |n - 2*new_c2 - c2 + 1|
    return 0;                                       //            or, |n - 2*(c2 + 1) - c2 + 1|
}