#include<Stdio.h>
void concatString(char* desti , char* src){
    while (*desti){
        desti++;
    }
    while (*src != '\0'){
        *desti = *src;
        desti++;
        src++;
    }
    
        
}
void main(){
    char src[50] = "But No One Can Understand.....";
    char desti[100] = "Life Is Something ";
    printf("Source = %s\n", src);
    printf("Destination = %s\n", desti);
    printf("After concatination\n");
    concatString(desti , src);
    printf("Destination = %s", desti);
}