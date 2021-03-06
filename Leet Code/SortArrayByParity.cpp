class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int i=0;
        int j=A.size()-1;
        while(i<j){
            if(A[i]%2==0){
                ++i;
            }
            else{
                std::swap(A[i],A[j]);
                --j;
            }
        }
        return A;
    }
};


