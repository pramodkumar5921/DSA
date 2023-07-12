#include<stdio.h>
int main(){
    int a[3][3];
    printf("enter the elemrnts in matxix a:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter the value in matrix a:");
            scanf("%d",&a[i][j]);
        }
    }
    int b[3][3];
    printf("enter the elemrnts in matxix b:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter the value in matrix b:");
            scanf("%d",&b[i][j]);
        }
    }
    int sum[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=0;
            for(int k=0;k<3;k++){
                sum[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("the element in matrix a:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
       printf("\n");
    }
     printf("the element in matrix b:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
       printf("\n");
    }
    printf("the element of sum matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",sum[i][j]);
        }
       printf("\n");
    }
    return 0;
}
