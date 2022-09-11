#include <iostream>
using namespace std;
int main(){
    char a[100];
    cin.getline(a,100);
    int i=1,cnt=1;
    for(;a[i]!='\0';){
        if(a[i-1]==a[i]){
            cnt++;i++;
        }
        else{
            cout<<a[i-1]<<cnt;
            cnt=1;i++;
        }
    }
    i--;
    cout<<a[i]<<cnt;
    
    return 0;
}
