# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i=1;i<10;i+=2)   //i+=2�ȼ���i=i+2
    {
		sum = sum + i;
	
	}
    printf("sum=%d\n",i);
	printf("sum=%d\n",sum);

    return 0;   
}
