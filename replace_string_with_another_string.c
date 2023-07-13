// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void string_replace(char*source,char*substring,char*with){
    char*substring_source=strstr(source,substring);
    if(substring_source==NULL){
        return;
    }
    memmove(
        substring_source+strlen(with),
        substring_source+strlen(substring),
        strlen(substring_source)-strlen(substring)+1
        );
    memcpy(substring_source,with,strlen(with));
}
int main() {
     char str[100]="apples are delicious fruits";
     string_replace(str,"apples","mango");
     printf("%s\n",str);
    return 0;
}
