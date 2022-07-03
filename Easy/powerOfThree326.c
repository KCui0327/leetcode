bool isPowerOfThree(double n){
    if (n == 3.0 || n == 1.0) {
        return true;
    } else if (n < 1.0) {
        return false;
    }
    return isPowerOfThree(n / 3);
}
