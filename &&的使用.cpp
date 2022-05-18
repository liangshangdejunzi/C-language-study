# include <stdio.h>

int main (void)

{
    int i = 10;
	int k = 20;
	int m;

	m = (1>2) ||(k = 5);//3>2是真的但是1>2是假的,不含有分号的是表达式含有分号的是语句
	printf("m = %d,k = %d\n",m,k);//假的时候m=0,真的时候m=1

    return 0;
}