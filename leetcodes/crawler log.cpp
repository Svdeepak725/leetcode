class Solution {
public:
    int minOperations(vector<string>& logs) {
        int d=0;
        for(const string &log:logs)
        {
            if(log=="../"){
                d--;
            }
            else if(log=="./")
            {
                //d=0;
            }
            else{
                d++;
            }
            if(d<0)
            d=0;
        }
            return d;
        
    }

};