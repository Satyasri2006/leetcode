bool isPalindrome(int x) {
    if(x<0)return 0;
    long long rev=0,i,y=x;
    while(y){
        i=y%10;
        rev=rev*10+i;
        y=y/10;
    }
    if(rev==x)return 1;
    else return 0;
}