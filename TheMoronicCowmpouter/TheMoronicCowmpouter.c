/*  遗留BUG：
        1.切换到8、16进制时输入非数字字符
 */
#include <stdio.h>

int main(void)
{
    printf("\n欢迎使用进制转换器！(0.0.1)\n");
    printf("该程序可以将您输入的十进制数字串转换为其他进制。\n");

    short loop;
    long number;
    for (loop = 0; loop > -1;)
    {
        short input;
        printf("\n输入8切换至八进制模式，输入16切换至十六进制模式，\n");
        printf("输入1结束程序：\n");

        input = 0;
        scanf("%hd", &input);
        getchar();
    
        switch (input)
        {
            case 8:
                printf("\n已切换至八进制模式。\n");                
                printf("\n请输入需要转换成八进制的十进制数字串：\n");

                scanf("%ld", &number);
                
                printf("%ld的八进制为%#lo\n", number, number);
                printf("\n---------------------\n");

                break;

            case 16:
                printf("\n已切换至十六进制模式。\n");
                printf("\n请输入需要转换成十六进制的十进制数字串：\n");

                scanf("%ld", &number);

                printf("%ld的十六进制为%#lx\n", number, number);
                printf("\n---------------------\n");

                break;

            case 1:
                printf("\n已结束程序，感谢您的使用！\n\n");
                loop = -2;
                break;

            default:
                printf("!请输入正确的数字以切换模式!\n");
                printf("\n---------------------\n");
                break;
        }
    }

    return 0;
}