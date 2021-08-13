char *my_strcpy(char *dest, const char *src){
    char *result =  dest;
    while( (*dest = *src) != '\0'){
        dest++;
        src++;
    }
    return result;
}
