int divide(long dividend, long divisor){
    if (dividend / divisor >= (pow(2, 31) - 1)) {
        return (pow(2, 31) - 1);
    } 
    return dividend / divisor;
}
