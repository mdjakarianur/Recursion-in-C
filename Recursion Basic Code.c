#include <stdio.h>
int jakaria(int n);
int main() {
    int n = 5;
  int x = jakaria(n);
    printf("%d", x);
    return 0;
}
int jakaria(int n){
    if(n==0){
    return 1;
    }
    else{
        return (n*jakaria(n-1));
    }
}
