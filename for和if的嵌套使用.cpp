/*

  202年6月21日 13点07分
  求1到100之间所有能被3整除的数字之和
*/
# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i=3; i<=10; ++i)
	{
		if (i%3 == 0)//如果i能被3整除即i对3取余
			sum = sum + i;
		printf("sum=%d\n",sum);
	}


    return 0;
}