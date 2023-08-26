#include<bits/stdc++.h>
using namespace std;
bool canweplacehorizontal(int i,int j,vector<vector<char>>&grid,string &word){
	if(j-1>=0 and grid[i][j-1]!='+'){
		return false;
	}
	if(j+word.size()<grid.size() and grid[i][j+word.size()]!='+'){
		return false;
	}
	for(int jj=0;jj<word.size();jj++){
		if(j+jj>=grid[0].size()){
			return false;
		}
		else if(grid[i][j+jj]=='-'  || grid[i][j+jj]==word[jj]){
			continue;
		}
		else{
			return false;
		}
	}
	return true;
}

bool canweplacevertial(int i,int j,vector<vector<char>>&grid,string &word){
	if(i-1>=0 and grid[i-1][j]!='+'){
		return false;
	}
	if(i+word.size()<grid[0].size() and grid[i+word.size()][j]!='+'){
		return false;
	}
	for(int ii=0;ii<word.size();ii++){
		if(i+ii>=grid[0].size()){
			return false;
		}
		else if(grid[i+ii][j]=='-'  || grid[i+ii][j]==word[ii]){
			continue;
		}
		else{
			return false;
		}
	}
	return true;
}
vector<bool>placehorizontal(int i,int j,vector<vector<char>>&grid,string word){
	vector<bool>weplace(word.size(),0);
	for(int jj=0;jj<word.size();jj++){
		if(grid[i][j+jj] == '-'){
			grid[i][j+jj]=word[jj];
			weplace[jj]=1;
		}
	}
	return weplace;
}
vector<bool>placevertial(int i,int j,vector<vector<char>>&grid,string word){
	vector<bool>weplace(word.size(),0);
	for(int ii=0;ii<word.size();ii++){
		if(grid[i+ii][j]=='-'  ){
			grid[i+ii][j]=word[ii];
			weplace[ii]=1;
		}
	}
	return weplace;
}
void unplacehorizonatal(vector<bool>&weplace,vector<vector<char>>&grid,int i,int j){
	for(int jj=0;jj<weplace.size();jj++){
                if (weplace[jj] == 1) {
                        grid[i][j + jj] = '-';
                }
        }
		return;
}
void unplacevertial(vector<bool>&weplace,vector<vector<char>>&grid,int i,int j){
	for(int ii=0;ii<weplace.size();ii++){
		if(weplace[ii]==1){
			grid[i+ii][j]='-';
		}
	}
	return;
}
void print(vector<vector<char>>&grid){
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout<<grid[i][j];
		}
		cout<<endl;
	}
	return;
}
void solve(vector<string>&words,vector<vector<char>>&grid,int idx){
	if(idx==words.size()){
		print(grid);
		return;
	}
	string word=words[idx];
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(grid[i][j]=='-' || word[0]==grid[i][j]){
				if(canweplacehorizontal(i,j,grid,word)){
					vector<bool>weplace=placehorizontal(i,j,grid,word);
					solve(words,grid,idx+1);
					unplacehorizonatal(weplace,grid,i,j);
				}
				if(canweplacevertial(i,j,grid,word)){
					vector<bool>weplace=placevertial(i,j,grid,word);
					solve(words,grid,idx+1);
					unplacevertial(weplace,grid,i,j);
				}
			}
		}
	}
	return;
}
int main() {
	vector<vector<char>>grid(10,vector<char>(10));
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cin>>grid[i][j];
		}
	}
	string str;
	cin>>str;
	string temp;
	vector<string>words;
	for(int i=0;i<str.size();i++){
		if(str[i]==';'){
			words.push_back(temp);
			temp="";
		}
		else{
		temp+=str[i];
		}
	}
	words.push_back(temp);
	solve(words,grid,0);
	return 0;
}
