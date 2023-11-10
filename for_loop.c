#include <stdio.h>

int main() {

    int i;

//for loop
    printf("\x1b[40mLOOP FOR 500, STEP \"77\"\x1b[0m\n");
    for(i=0; i<500; i+=77) {
        printf("%d ",i);
    }
    printf("\n");
    printf("\n");
    printf("\x1b[31mLOOP FOR 500, STEP \"100\"\x1b[0m\n");
    for(i=0; i<500; i+=100) {
    printf("%d ",i);
    }
    printf("\n");
    printf("\n");
    printf("\x1b[41mLOOP FOR 500, STEP \"10\"\x1b[0m\n");
    for(i=0; i<500; i+=10) {
    printf("%d ",i);
    }
}