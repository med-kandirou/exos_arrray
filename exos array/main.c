#include <stdio.h>
#include <stdlib.h>

int main()
{
    //alae
    //https://www.youtube.com/watch?v=sDeiSjffS5Y
    //correction des exos
    //49
    /*int t[10];

    for(int i=0;i<10;i++){
        t[i]=0;
    }
    for(int i=0;i<10;i++){
        printf("%d \n",t[i]);
    }*/
    //50

    char t[]={'a','e','u','o','i','y'};
    for(int i=0;i<sizeof(t);i++){
        printf("%c \n",t[i]);
    }



    return 0;
}
