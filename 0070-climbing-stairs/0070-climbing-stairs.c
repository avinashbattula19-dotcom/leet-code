int climbStairs(int n) {
   // int n;
    int a=1;
    int b=2,c;
    if(n<=1) {
        return n;
    }
    else{
    int i=3;
    while(i<=n)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    return b;
    }
}