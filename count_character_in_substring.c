
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
# define size 128
void count_frequency(char*text){
    int freq[128]={0};
    for(int i=0;text[i]!='\0';i++){
        char c=tolower(text[i]);
        if(isdigit(c) || isalpha(c)){
            freq[c]++;
        }
    }
    for(int i=0;i<size;i++){
        if(freq[i]){
            printf("'%c'appered %d times\n",(char)i,freq[i]);
        }
    }
}
int main(int argc,char*argv[]) {
    char*text[100];
    gets(text);
    count_frequency(text);
    return 0;
}
