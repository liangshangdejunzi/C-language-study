//Ŀ���Ƿֱ�Ƚ�a��b�ĸ���c��d�ĸ���e��f�ĸ���
# include <stdio.h>

void max(int i,int j)
{
	if (i>j)
		printf("%d\n",i);
	else 
		printf("%d\n",j);

}

int main(void)

{
	int a,b,c,d,e,f;

	a=1,b=2,c=3,d=9,e=-5,f=100;//���ű��ʽ��ִ�е�һ���������ֵ�����һ�������÷ֺ���Ļд���£�
	max(a,b);//a��ֵ���͸�i��b��ֵ���͸�j���������ơ�����Ҫ�ȶ����һ����Ӧ�ĺ���max��
	max(c,d);
	max(e,f);
/*
	if (a>b)
		printf("%d\n",a);
	else
		printf("%d\n",b);
	if (c>d)
		printf("%d\n",c);
	else
		printf("%d\n",d);
	if (e>f)
		printf("%d\n",e);
	else
		printf("%d\n",f);
	
*/
	return 0;
}