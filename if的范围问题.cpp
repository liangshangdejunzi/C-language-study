# include <stdio.h>

int main (void)
{
    if (1>2)
		printf("AAAA\n");
        printf("BBBB\n");
    return 0;
}
/*
  在VC++6.0中输出的结果：
  ------------------------
  BBBB
  ------------------------
  总结：
       if默认只能控制一个语句的执行或不执行
*/