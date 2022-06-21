# include <stdio.h>

int main (void)
{
    int i = 3;
    int j = 5;
    int t;    //定义临时变量

	t = i;
	i = j;
	j = t;

	printf("i=%d,j=%d\n",i,j);
    return 0;
}