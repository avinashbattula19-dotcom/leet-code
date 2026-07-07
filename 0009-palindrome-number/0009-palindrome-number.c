bool isPalindrome(int x) {
    
    long int n,r,reverse=0,original;
    n=x;
    if(n<0) return false;
    original=n;
    while(n>0){
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
    }
    
        if(original==reverse)return true;
       // if(n<0) return false;
        else return false;


    
}