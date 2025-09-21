#include <stdio.h>
int main(){
    char sign;

    printf("what is the colur of signal light  \n 'y' for yellow \n 'g' for green \n 'r' for red  ");
    scanf(" %c", &sign);

    if(sign == 'y'){
        printf("caution");
    }
    else if(sign == 'g'){
        printf("go");
    }
    else{
        printf("stop");
    }

    return 0;
}
