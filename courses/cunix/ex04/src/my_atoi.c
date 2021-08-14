int my_atoi(const char *nptr){
    int number = 0;
    while(*nptr >= '0' && *nptr <= '9'){
        number = 10*number+(*nptr-'0');
    }
    return number;
}
