#include <stdio.h>
int fibonacci(int n){
    if (n<=1){
        return n;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){
    int n,i,s;
    scanf("%d %d",&s,&n);
    for(i=s;i<=n;i++){
        int res = fibonacci(i);
        printf("%d ", res);
    }
    return 0;
}