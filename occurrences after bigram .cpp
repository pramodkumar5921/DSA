class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
       vector<string>v;
       int i=0;
       string temp="";
       while(i < text.size()){
			if(text[i] == ' '){
				v.push_back(temp);
				temp = "";
			}
			else{
				temp += text[i];
			}
			i++;
		}
        
       v.push_back(temp);
    
    vector<string>ans;
    for(int i=1;i<v.size();i++){
        if(first==v[i-1] and second == v[i]){
            if(i+1<v.size()){
              ans.push_back(v[i+1]);
            }
           
        }
        
    }
    return ans;
    }

};
