# include <stdio.h>

int main(void)
{
    if (3)
		printf("AAAA\n");//会输出
	if (0)//零为假
		printf("BBBB\n");//不会输出

    return 0;
}