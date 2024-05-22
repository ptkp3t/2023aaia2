///week14-2.cpp
#include <stdio.h>
int main()
{

        char c;
        char s[100];
        printf("請輸入你的英文名子,裡面補能有空格:");
        scanf("%s", s);
        printf("你的英文名子是: %s", s);

        printf("請再輸入一次你的英文名子:");
        scanf("%c", &c);
        printf("結果讀到了: %c", c);
}
