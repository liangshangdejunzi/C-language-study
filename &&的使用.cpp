# include <stdio.h>

int main (void)

{
    int i = 10;
	int k = 20;
	int m;

	m = (1>2) ||(k = 5);//3>2����ĵ���1>2�Ǽٵ�,�����зֺŵ��Ǳ��ʽ���зֺŵ������
	printf("m = %d,k = %d\n",m,k);//�ٵ�ʱ��m=0,���ʱ��m=1

    return 0;
}