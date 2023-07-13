#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
float mean(int numbers[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=numbers[i];
    }
    return (double)sum/n;
}
float varience(int *numbers,int n,double mean){
    float vari=0;
    for(int i=0;i<n;i++){
        vari+=pow(numbers[i]-mean,2);
    }
    return (double)vari/n;
}
float standard(int *numbers,int n,double vari){
    return sqrt(vari);
}
int main(int argc,char*argv[]){
    int numbers[100];
    int n=5;
    for(int i=0;i<n;i++){
        scanf("%d",&numbers[i]);
    }
    float mean_val=mean(numbers,n);
    printf("%f\n",mean_val);
    float variance_val=varience(numbers,n,mean_val);
    printf("%f\n",variance_val);
    float standard_val=standard(numbers,n,variance_val);
    printf("%f\n",standard_val);
    return 0;
}
