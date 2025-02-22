#include <stdio.h>

int main(){
    int a[5]={1,5,3,8,6},i;
        for(i=0;i<5;i++){
            printf("%p\n",&a[i]);
        }
return 0;
}
