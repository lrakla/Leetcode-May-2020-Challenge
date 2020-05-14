class Solution {
public:
    void lowest(string num,int k,string &ans){
        if(k==0){
           ans.append(num);
            return;
        }
        int n = num.length();
        if(k>=n){
            return;
        }
        int minIndex = 0;
        for(int i =0;i<=k;i++)
            if(num[i]<num[minIndex])
                minIndex = i;
        ans.push_back(num[minIndex]);
        string str = num.substr(minIndex+1,n-minIndex);
        lowest(str, k-minIndex, ans); 
}
    
    string removeKdigits(string num, int k) {
    string ans = "";
    lowest(num, k, ans);
    int x = ans.length();
    int  i;
    if(x==0){
        ans.append("0");
        return ans;
    }
    if(x==1){
        return ans;
    }
    while(x>1){
    if(ans[0]!='0'){
        break;
    }
        ans.erase(ans.begin());
        x = ans.length();
    }
      
    return ans; 
    
    
    }
};