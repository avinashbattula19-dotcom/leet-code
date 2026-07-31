int mySqrt(int x) {
long int i=1;
if(x==0){

return 0;
}
else{
while(i*i<=x){
    i++;
}

}
return i-1;
}
   
