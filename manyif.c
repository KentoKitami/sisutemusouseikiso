#include <stdio.h>

int main(void)
{
    int Taro, Hanako, Jiro;
    
    Taro = 20;
    Hanako = 50;
    Jiro = 19;
    
    if (Taro == 20)
        printf("太郎は20歳です\n");
    if (Hanako != 20)
        printf("花子は20歳ではありません\n");
    if (Hanako >= 20)
        printf("花子は20歳以上です\n");
    if (Jiro < 20)
        printf("次郎は20歳未満です\n");
    
    if (Taro > Jiro)
        printf("太郎は次郎より年上です\n");
    if (Hanako > Taro)
        printf("花子は太郎より年上です\n");
    
    return 0;
}