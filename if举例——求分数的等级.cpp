# include <stdio.h>

int main(void)
{
    float score;

	printf("请输入您的考试成绩：");
    scanf("%f",&score);
    
	if (score > 100)
		printf("你这是做梦！\n");
	else if(score>=90&& score<=100) //不能写成90<=score<=100
		printf("优秀!\n");
	else if(score>=80 && score<90)
		printf("良好！\n");
	else if (score>=60 && score<80)
		printf("及格\n");
	else if (score>=0 && score<60)
		printf("不及格！请继续努力！\n");
	else 
		printf("蒙都不会，你还会什么!\n");
	
    return 0;
}