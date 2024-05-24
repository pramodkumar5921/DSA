class Solution {
public:
    unordered_map<char,int>mp;
    unordered_map<char,int>value;
    bool check(string &str){
        string temp;
        bool flag=true;
        for(int i=0;i<str.size();i++){
            if(mp.find(str[i])==mp.end()){
                flag = false;
                break;
            }
            else{
                temp+=str[i];
                mp[str[i]]--;
                if(mp[str[i]]==0){
                    mp.erase(str[i]);
                }
            }
        }
        for(int i=0;i<temp.size();i++){
            mp[temp[i]]++;
        }
        return flag;
    }
    int cost(string &str){
        int ans=0;
        for(int i=0;i<str.size();i++){
            ans+=value[str[i]];
        }
        return ans;
    }
    int solve(vector<string>&words,int idx){
        if(idx>=words.size()){
            return 0;
        }
        int include=0,exclude=0;
        if(check(words[idx])==true){
            for(int i=0;i<words[idx].size();i++){
                mp[words[idx][i]]--;
                if(mp[words[idx][i]]==0){
                    mp.erase(words[idx][i]);
                }
            }
            include=cost(words[idx])+solve(words,idx+1);
            for(int i=0;i<words[idx].size();i++){
                mp[words[idx][i]]++;
            }
        }
        exclude=0+solve(words,idx+1);
        return max(include,exclude);
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
       for(int i=0;i<letters.size();i++){
         mp[letters[i]]++;
       }
       for(int i=0;i<26;i++){
        value[i+'a']=score[i];
       }
       int ans=solve(words,0);
       return ans;
    }
};
