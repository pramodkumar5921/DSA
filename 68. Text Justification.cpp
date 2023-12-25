#include<bits/stdc++.h>
using namespace std;
    int maxwidth;
    string findline(int eachgaddhespace,int extraspace,int i,int j,vector<string>& words){
        string line;
        for(int k=i;k<j;k++){
            line+=words[k];
            if(k==j-1){
                break;
            }
            for(int z=1;z<=eachgaddhespace;z++){
                line+=" ";
            }
            if(extraspace>0){
                line+=" ";
                extraspace--;
            }
        }
        while(line.size()<maxwidth){
            line+=" ";
        }
        return line;
    }
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>result;
        int n=words.size();
        maxwidth=maxWidth;
        int i=0;
        while(i<n){
            int letterscount=words[i].size();
            int j=i+1;
            int gaddhe=0;
            while(j<n and words[j].size()+1+gaddhe+letterscount<=maxwidth){
                letterscount+=words[j].size();
                gaddhe+=1;
                j++;
            }
            int remaininggaddhe=maxwidth-letterscount;

            int eachgaddhespace= gaddhe == 0? 0 :remaininggaddhe/gaddhe;
            int extraspace=gaddhe==0?0:remaininggaddhe%gaddhe;

            if(j==n){
                eachgaddhespace=1;
                extraspace=0;
            }

            result.push_back(findline(eachgaddhespace,extraspace,i,j,words));
            i=j;
        }
        return result;
    }
