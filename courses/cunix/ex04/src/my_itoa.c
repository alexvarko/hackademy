unsigned int my_strlen(char *str){
    int len = 0;
    while (*str != '\0'){
        len++;
        str++;
    }
    return len;
} //code from ex01
char s[36];
char *my_itoa(int nmb){
    int i, sign;
    if((sign=nmb) < 0){
        nmb = -nmb;
    }
    i = 0;
    do{
        s[i++] = nmb % 10 + '0';
    }while((nmb /= 10) > 0);
    if (sign < 0){
        s[i++] = '-';
    }
    s[i] = '\0';
    int m,n,c;
    for(m=0, n= my_strlen(s)-1; m<n; m++, n--){
        c = s[m];
        s[m] = s[n];
        s[n] = c;
    }
    return s;
}
