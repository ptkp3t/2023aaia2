#include <stdio.h>
int func(int n){
    if(n==2)return 1;
    return n * func(n-1);
}
int main()
{
    printf("請輸入1個數字:4");
    int n=4;
    //scanf("%d", &n);
    int ans = func(n);
    printf("答案是:%", ans);
}
