#include <vector>
#include <map>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        vector<int> numList;
        //the designations of these symbols themselves. (rule 1)
        map<char, int> rule1;
        rule1['I'] = 1;
        rule1['V'] = 5;
        rule1['X'] = 10;
        rule1['L'] = 50;
        rule1['C'] = 100;
        rule1['D'] = 500;
        rule1['M'] = 1000;

        for(int i=0;i < s.size();i++){
            numList.push_back(rule1[s[i]]);
        }
        int res = 0;

        for(int i=0; i < numList.size();i++){

            if(i + 1 < (int)numList.size() &&  numList[i] < numList[i+1]){
                res -= numList[i];
            }else{
                res += numList[i];
            }
        }
        return res;
    }
};