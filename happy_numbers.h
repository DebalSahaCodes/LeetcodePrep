class Solution {
public:
    int next(int x){
        int y=0;
        for(; x>0; x/=10){
            y += (x%10)*(x%10);
        }
        return y;
    }
    bool isHappy(int n) {
        int s = n;
        int f = next(n);
        while(s!=f){
            s = next(s);
            f = next(next(f));
        }
        return s==1;
    }
};
