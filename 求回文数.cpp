# include <stdio.h>

int main(void)
{
	int val;//��Ŵ��жϵ�����
	int m;
	int sum=0;

	printf("����������Ҫ�жϵ����֣�");
	scanf("%d", &val);

	m=val;
	while(m)//m���㼴�棬ִ������ģ�ֱ��m����Ϊ��
	{
		sum = sum*10+m%10;//С����ȡ������������С����
		m/=10;//m=m/10
	}

	if(sum==val)
		printf("Yes!\n");
	else
		printf("No!\n");

    return 0;
}