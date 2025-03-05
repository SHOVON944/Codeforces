#include<stdio.h>

int main()
{
    int eye, mouth, body;
    scanf("%d",&eye);
    scanf("%d",&mouth);
    scanf("%d",&body);
    int count = 0;
    while(1){
        if(eye>0 && mouth>0 && body>0){
        count++;
        eye--;
        mouth--;
        body--;
    }
    else if(eye>1 && mouth>0 && body>0){
        count++;
        eye--;
        mouth--;
        body--;
    }
        if(eye>1  && body>0){
        count++;
        eye--;
        mouth--;
        body--;
    }
}

    printf("%d",count);
    


    return 0;
}