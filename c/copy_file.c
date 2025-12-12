#include<stdio.h>
#include<stdlib.h>
void main(){
    char cc;
    FILE *src = NULL;
    src = fopen("chintu.txt" , "r");
    FILE *desti = NULL;
    desti = fopen("chintu_copy.txt" , "w");

    if(src == NULL || desti == NULL){
        printf("Error! opening file");
        exit(0);
    }

    while((cc =fgetc(src)) != EOF){
        fputc(cc , desti);
    }
    fclose(src);
    fclose(desti);

    printf("File coiped succesfully");
    
}