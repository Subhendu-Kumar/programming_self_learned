#include<stdio.h>
void copyString(char* desti , char* src){
    while(*src != '\0'){
        *desti = *src;
        src++;
        desti++;
    }
    *desti = '\0';    
}

void main(){
    char src[20] = "I Love You......";
    char desti[50];
    copyString(desti , src);
    printf("Source = %s\n", src);
    printf("Destination = %s", desti);
}