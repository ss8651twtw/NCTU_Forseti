template<class T>
T get_int(T n){
    T num = 0, fix = 1;
    char tc = getchar();
    while((tc < '0' || tc > '9') && tc != '-')tc = getchar();
    if(tc == '-')tc = getchar(), fix = -1;
    while(tc >= '0' && tc <= '9')num = num * 10 + (tc - '0'), tc = getchar();
    return num * fix;
}

template<class T>
bool getint(T& n){
    T num = 0, fix = 1;
    char tc;
    do{
        tc = getchar();
        if(tc == EOF)return false;
    }while((tc < '0' || tc > '9') && tc != '-');
    if(tc == '-')tc = getchar(), fix = -1;
    while(tc >= '0' && tc <= '9')num = num * 10 + (tc - '0'), tc = getchar();
    n = num * fix;
    return true;
}

template<class T>
void putint(T n){
    char buf[1000];
    int i = 0;
    if(n < 0)putchar('-'), n *= -1;
    do{
        buf[i++] = '0' + (n % 10);
        n /= 10;
    }while(n > 0);
    for(i = i - 1; i >= 0; i--)putchar(buf[i]);
    putchar('\n');  //視情況加入
}