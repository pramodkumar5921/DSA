class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>v1;
        int i=0;
        string temp="";
        while(i<s1.size()){
            if(s1[i] == ' '){
                v1.push_back(temp);
                temp="";
            }
            else{
                temp+=s1[i];
            }
            i++;
        }
        v1.push_back(temp);
        vector<string>v2;
        int j=0;
        string temp2="";
        while(j<s2.size()){
            if(s2[i] == ' '){
                v2.push_back(temp);
                temp2="";
            }
            else{
                temp2+=s2[j];
            }
            j++;
        }
        v2.push_back(temp2);
        unordered_map<string,int>mp;
        for(int i=0;i<v1.size();i++){
            mp[v1[i]]++;
        }
        for(int i=0;i<v2.size();i++){
            mp[v2[i]]++;
        }
        vector<string>ans;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second==1){
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};
