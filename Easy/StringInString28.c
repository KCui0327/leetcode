int strStr(char * haystack, char * needle){
    if (needle == NULL) {
        return 0;
    }
    
    int index = 0;
    
    while (*haystack != '\0' && strncmp(haystack, needle, strlen(needle)) != 0) {
        haystack++;
        index++;
    }
    
    if (strncmp(haystack, needle, strlen(needle)) == 0) {
        return index;
    }
    
    return -1;
}
