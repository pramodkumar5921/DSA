class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        // vector<int>freq(26,0);
        int ans=0;
        // for(int i=0;i<chars.size();i++){
        //     freq[chars[i]-'a']++;
        // }
        for(int i=0;i<words.size();i++){
            vector<int>freq(26,0);
            for(int i=0;i<chars.size();i++){
            freq[chars[i]-'a']++;
        }
        int j;
            for( j=0;j<words[i].size();j++){
                if(freq[words[i][j]-'a']==0){
                    break;
                }
                else{
                    freq[words[i][j]-'a']--;
                }
            }
            if(j==words[i].size()){
                ans+=j;
            }
        }
        return ans;
    }
};
