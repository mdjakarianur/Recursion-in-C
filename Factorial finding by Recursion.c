#include <stdio.h>
int recursiveFactorial();
int main(){
    int x,n=5;
    x=recursiveFactorial(n);
    printf("%d",x);
    
    return 0;
}

int recursiveFactorial(int n){
    if (n==0){
        return 1;
    }
    else{
        return (n*(recursiveFactorial(n-1)));
    }
}
