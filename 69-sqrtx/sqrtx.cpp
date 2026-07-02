// class Solution {
// public:
//     int mySqrt(int x) {
        
//            int r= pow(x,0.5);

//         return r;
//     }
// };
class Solution {
public:
    int mySqrt(int x) {
        long long i = 0;
        while (i * i <= x) {
            i++;
        }
    
        return i - 1;
    }
};
