int stringLength(char *start){
    int count = 0;
    while(*start!='\0'){
        count++;
        *start++;
    }
    return count;
}
