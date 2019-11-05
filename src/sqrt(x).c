//
// Created by xueyuanl on 2019-11-05.
//


int mySqrt(int x){
    if (x == 0) return 0;
    if (x == 1) return 1;
    long low = 0;
    long high = x;
    long mid;
    while (high > low + 1) {  // test case 2, can cause endless loop if not plus 1
        mid = (high + low) / 2;
        if (mid * mid > x) {
            high = mid;
        }
        else {
            low = mid;
        }
    }
    return low;
}