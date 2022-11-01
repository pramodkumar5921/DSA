class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>v;
        int i=0;
        string temp="";
        // while(i<s.size()){
        //     if(s[i] == ''){
        //         v.push_back(temp);
        //         temp="";
        //     }
        //     else{
        //         temp+=s[i];
        //     }
        //     v.push_back(temp);
        //     i++;
        // }
        while(i < s.size()){
			if(s[i] == ' '){
				v.push_back(temp);
				temp = "";
			}
			else{
				temp += s[i];
			}
			i++;
		}
        v.push_back(temp);
        if(pattern.size()!=v.size()){
            return false;
        }
        unordered_map<char,string>mp;
        set<string>st;
        for(int i=0;i<pattern.size();i++){
            if(mp.find(pattern[i])!=mp.end()){
                if(mp[pattern[i]]!=v[i]){
                    return false;
                }
            }
            else{
                if(st.count(v[i])>0){
                    return false;
                }
            }
            mp[pattern[i]]=v[i];
            st.insert(v[i]);
        }
        return true;
    }
};
