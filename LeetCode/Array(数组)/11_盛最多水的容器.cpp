/*常规做法：遍历*/ 
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i,j;
        int length,high,area;
        int max_area=0;
        for(i=0;i<height.size()-1;i++){
            for(j=i+1;j<height.size();j++){
                if(height[i]>=height[j]){
                    high=height[j];
                }
                else{
                    high=height[i];
                }
                length=j-i;
                area=length*high;
                if(area>=max_area){
                    max_area=area;
                }
            }
        }
        return max_area;
    }
};

/*双指针法*/
int maxArea(vector<int>& height) {
    int res = 0;
    int i = 0;
    int j = height.size() - 1;
    while (i < j) {
        int area = (j - i) * min(height[i], height[j]);
        res = max(res, area);
        if (height[i] < height[j]) {
            i++;
        } else {
            j--;
        }
    }
    return res;
} 

