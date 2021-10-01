#include <stdio.h>
#include <math.h>
void main()
{
	int A, Save;
	printf("Enter A, then programm will raise it to the 8'th degree: ");
	scanf("%d", &A);
	A *= A;
	A *= A;
	Save = A;
	Save = Save * A;//через pow намного проще, честно говоря
	printf("8th degree of A = ");
	printf("%d\n", Save);
}