# include <stdio.h>

int main(void)
{
    float score;

	printf("���������Ŀ��Գɼ���");
    scanf("%f",&score);
    
	if (score > 100)
		printf("���������Σ�\n");
	else if(score>=90&& score<=100) //����д��90<=score<=100
		printf("����!\n");
	else if(score>=80 && score<90)
		printf("���ã�\n");
	else if (score>=60 && score<80)
		printf("����\n");
	else if (score>=0 && score<60)
		printf("�����������Ŭ����\n");
	else 
		printf("�ɶ����ᣬ�㻹��ʲô!\n");
	
    return 0;
}