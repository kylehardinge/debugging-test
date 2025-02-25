# include <stdio.h>

int main()
{
	int i, num, num_2, fac;
	printf ("Enter the number: ");
	scanf ("%d", &num );

	printf ("Enter the second number: ");
	scanf ("%d", &num_2 );

    int sum = num + num_2;
    int diff = num - num_2;
    int product = num * num_2;
    int div = num / num_2;
    int square1 = num * num;
    int square2 = num_2 * num_2;

	for (i=1; i<num; i++)
		fac=fac*i;    

    printf("-- Results --\n");
	printf("%d + %d = %d\n",num,num_2,sum);
	printf("%d - %d = %d\n",num,num_2,diff);
	printf("%d * %d = %d\n",num,num_2,product);
	printf("%d / %d = %d\n",num,num_2,fac);
	printf("%d^2 = %d\n",num,square1);
	printf("%d^2 = %d\n",num,square2);
	printf("The factorial of %d is %d\n",num,fac);
}
