#include<stdio.h>
void main(){
    int x , y , z;
    printf("Enter integer x , y , z : \n\n");
    scanf("%d %d %d", &x , &y , &z);
    switch(x > y){
        case 1:
            switch (x >z){
                case 1:
                    printf("greatest is %d", x);
                break;
                case 0:
                    printf("greatest is %d", z);
                break;
            }
        break;

        case 0:
            switch (y > z){
                case 1:
                    printf("greatest is %d", y);
                break;
                case 0:
                    printf("greatest is %d", z);
                break;
            }
        break;
    }
}