#include<Stdio.h>
struct student{
    char name[15];
    char roll[10];
    int mark[3];
};
int markSum(struct student std1){
    int sum= 0;
    for(int i = 0; i < 3; i++){
        sum += std1.mark[i];
    }
    return sum;
    
}
void main(){
    struct student std[3];
    for(int i = 0; i < 3; i++){
        printf("Student %d\n",i+1);
        printf("Name , Roll no.: ");
        scanf("%s %s", std[i].name , std[i].roll);
        for(int j = 0; j < 3; j++){
            printf("Subject %d mark: ", j+1);
            scanf("%d", &std[i].mark[j]);

        }
        
    }

    printf("Displaying Details.......\n");
    for(int i = 0; i < 3; i++){
        int sum = markSum(std[i]);
        printf("Student %d (Name: %s , Roll no.: %s , total mark: %d)\n", i+1, std[i].name , std[i].roll , sum);
    }
    
    
}