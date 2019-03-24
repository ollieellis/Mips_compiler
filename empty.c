int function(int a, int b)
{
    if(a<b){
        a=a-1;
        if(b<a){
            b=b+3;
            if(a==b){
                return a*b;
            }
        }
        return b;
    }
    return 13;
}
