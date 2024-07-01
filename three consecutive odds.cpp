class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
      
      int streak = 0;
      for( int e:arr){
        if(e%2!=0){
            streak++;
            if(streak==3){
                return true;
            }
        }
        else{
            streak=0;
        }
      }
    return false;
    
 }
};