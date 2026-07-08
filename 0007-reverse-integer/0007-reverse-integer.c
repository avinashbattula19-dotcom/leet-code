int reverse(int x){
   long int n,reverse=0,r,sum=0;
    n=x;//assign value x to n here
    while(n!=0){
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
    }
    if(reverse>INT_MAX||reverse<INT_MIN) return 0;
    else return reverse;

}