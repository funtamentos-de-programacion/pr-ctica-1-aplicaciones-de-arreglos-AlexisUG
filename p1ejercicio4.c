#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, "spanish");
	int i, j;
	int mat[2][3]={
		{1,2,3},
		{4,5,6}
	};
	printf("Dirección de mat: %p\n", mat);
    printf("Dirección de mat[0]: %p\n", mat[0]);
    printf("Dirección de &mat[0][0]: %p\n", &mat[0][0]);
    
return 0;
}
