# include <stdio.h>

int main(void)
{
	int val;//存放待判断的数字
	int m;
	int sum=0;

	printf("请输入您需要判断的数字：");
	scanf("%d", &val);

	m=val;
	while(m)//m非零即真，执行下面的，直到m是零为假
	{
		sum = sum*10+m%10;//小的数取余大的数都等于小的数
		m/=10;//m=m/10
	}

	if(sum==val)
		printf("Yes!\n");
	else
		printf("No!\n");

    return 0;
}