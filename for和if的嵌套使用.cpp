/*

  202��6��21�� 13��07��
  ��1��100֮�������ܱ�3����������֮��
*/
# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i=3; i<=10; ++i)
	{
		if (i%3 == 0)//���i�ܱ�3������i��3ȡ��
			sum = sum + i;
		printf("sum=%d\n",sum);
	}


    return 0;
}