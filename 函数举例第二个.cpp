# include <stdio.h>

int f(void) //�����е�void��ʾ�ú������ܽ�������  ��int��ʾ��������ֵ��int���͵�����
{
	return 10;//��������������10
}

int main(void)//main������������main֮ǰ�ĺ����Ǳ����������ǳ���Ա�Լ������һ��������
{
	int j=88;

	j=f();
	printf("%d\n",j);

	return 0;
}