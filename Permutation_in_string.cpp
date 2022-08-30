// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string a="aaaaabodh";
//     string b="abodaaaah";
//     int n=a.size();
//     vector<int> freq(26,0);
//      for(int i=0;i<26;i++){
//         cout<<freq[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         freq[a[i]-'a']++;
//     }
//     for(int i=0;i<26;i++){
//         cout<<freq[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0;i<n;i++){
//         freq[b[i]-'a']--;
//     }
//      for(int i=0;i<26;i++){
//         cout<<freq[i]<<" ";
//     }
//     cout<<endl;
//     int i=0;
//     for(i=0;i<26;i++){
//         if(freq[i]!=0){
//             cout<<"false";
//             return 0;
//         }
//     }
//   cout<<"true";
//     return 0;

// }
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string a = "pramodkumar";
    string b = "urarkramdop";
    int n=a.size();
    vector<int>freq(26,0);
    for(int i=0;i<26;i++){
        cout<<freq[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        freq[a[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        cout<<freq[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        freq[b[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        cout<<freq[i]<<" ";
    }
    cout<<endl;
    int i=0;
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            cout<<"false";
            return 0;
        }
    }
    cout<<"true";
    return 0;
}
