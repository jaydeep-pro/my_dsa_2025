class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       unordered_map<int,int>mp;
       vector<int>ans;

        for(int i =0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                mp[grid[i][j]]++;
            }
        }

int a = -1;
int b = -1;
  for(int i =1;i<=grid.size()*grid.size();i++){
    if(mp.find(i) == mp.end()){
b = i;
    }

   else if(mp[i] == 2){
        a = i;
    }
  }

  ans.push_back(a);
  ans.push_back(b);
  return ans;
    }
};