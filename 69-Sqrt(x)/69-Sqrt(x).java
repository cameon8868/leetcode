class Solution {
    public int mySqrt(int x) {
        double guess = x;
        if (x == 0){
            return 0;
        }

        for(int i=0; i < 50; i++){
            guess = (guess + x / guess) / 2 ;
        }
        return (int) guess;
    }
}