int mySqrt(int x){
    
    unsigned int count = 0;
    
    while (x >= (count * count)) {
        if (count * count == x) {
            return count;
        }
        count++;
    }
    return count - 1;
}
