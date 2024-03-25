#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
 
// Next 4 lines does the Magic
#define DEBUG(x...) { cout << "(" << #x << ")" << " = ( "; Print(x); }
template <typename T1> void Print(T1 t1) { cout << t1 << " )" << endl; }
template <typename T1, typename... T2>
void Print(T1 t1, T2... t2) { cout << t1 << " , "; Print(t2...); }
 
int main(){ 
    int a = 1, b = 5;
    float x = 2.2;
    string str = "iamastring";
    DEBUG(a, b, x, str);
    // Output will be - (a, b, x, str) = ( 1 , 5 , 2.2 , iamastring )
}
