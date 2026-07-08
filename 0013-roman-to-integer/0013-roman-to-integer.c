    int value(char ch){
        switch(ch){
            case 'I':return 1;
            case 'V':return 5;
            case 'X':return 10;
            case 'L':return 50;
            case 'C':return 100;
            case 'D':return 500;
            case 'M':return 1000;
            default:return 0;
        }
    }
int romanToInt(char* s) {
    int i,sum=0;
    while(s[i]!='\0')
    {
        if(value(s[i])<value(s[i+1]))
        sum=sum-value(s[i]);
        else
         sum=sum+value(s[i]);
         i++;
    }
    return sum;
}
    


    
