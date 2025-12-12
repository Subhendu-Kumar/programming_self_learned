#include<stdio.h>
struct employee{
    char name[20];
    double salary;
    int age;
};
void main(){
    struct employee emp[3];

    for(int i = 0; i < 3; i++){
        printf("Enter employee emp%d details: \n", i+1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%lf", &emp[i].salary);
        printf("Age: ");
        scanf("%d", &emp[i].age);
        printf("\n");
    }
    
    printf("Displaying employee details:: \n");
    for(int i = 0; i < 3; i++){
        printf("Displaying Employee emp%d details....\n", i+1);
        printf("Name:: %s\n",emp[i].name);
        printf("Salary:: %.2lf\n",emp[i].salary);
        printf("Age:: %d\n",emp[i].age);
    }
    
}