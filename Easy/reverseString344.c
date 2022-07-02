void reverseString(char* s, int sSize){
    for (int low = 0, high = sSize - 1; low < high; low++, high--) {
        char temp = s[low];
        s[low] = s[high];
        s[high] = temp;
    }
}
