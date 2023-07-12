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
            b[i][j]=a[j][i];
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
   
    return 0;
}
