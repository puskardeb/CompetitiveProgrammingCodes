int arrangeCoins(int n){
    int lo = 1;
    int hi = n;
    
    while (lo <= hi) {
        int64_t mid = lo + (hi - lo) / 2;
        int64_t tmp = (mid * (mid + 1)) / 2;
                
        if (tmp == n)   return mid;
        if (tmp > n)    hi = mid - 1;
        else            lo = mid + 1;
    }
    
    return lo - 1;
}
