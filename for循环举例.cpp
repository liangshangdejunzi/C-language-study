# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i=1;i<10;i+=2)   //i+=2µÈ¼ÛÓÚi=i+2
    {
		sum = sum + i;
	
	}
    printf("sum=%d\n",i);
	printf("sum=%d\n",sum);

    return 0;   
}
