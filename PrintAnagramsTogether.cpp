//link to problem : https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/

/*Solution Begins*/
class Solution{
  public:
  /*sequence does not matter
        cat tca     |   dog
        dog         |   cat tca
        Both are accepted :D
  */
    vector<vector<string> > Anagrams(vector<string>& words) {
        
        vector<vector<string>> ans;//to store final ans
        //each map - anagrams ka vector pair
        map<map<char, int>, vector<string>> vmap;
        
        for(int i = 0; i < words.size(); i++) {
            //form the map for i(th) word
            map<char, int> mp;
            for(int j = 0; j < words[i].size(); j++) {
                mp[words[i][j]]++;
            }
            
            vmap[mp].push_back(words[i]);
        }
        
        //storing the ans
        for(auto itr = vmap.begin(); itr != vmap.end(); itr++) {
            
            ans.push_back(itr->second);
        }
        
        return ans;
    }
};
