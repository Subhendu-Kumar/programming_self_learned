#include<stdio.h>

void todesti(int src, int desti){
    printf("source %d , destination %d.\n", src, desti);
    if(src == desti){
        printf("reached destination....");
        return;
    }
    else{
        todesti(src + 1 , desti);
    }
}
void main(){
    int src = 1, desti;
    printf("Enter destination: ");
    scanf("%d", &desti);
    todesti(src, desti);
}