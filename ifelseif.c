#include <stdio.h>

int main(void)
{
    int heroPower, monsterPower;

    // ユーザーに勇者とモンスターの力を入力させる
    printf("勇者の力を入力してください（1〜100の間）: ");
    scanf("%d", &heroPower);
    printf("モンスターの力を入力してください（1〜100の間）: ");
    scanf("%d", &monsterPower);

    // 勇者とモンスターの力を比較して結果を表示
    if (heroPower > monsterPower) {
        printf("勇者の力 (%d) がモンスターの力 (%d) より強い！\n", heroPower, monsterPower);
        printf("勇者は剣を振りかざし、見事にモンスターを倒しました！\n");
    } else if (heroPower < monsterPower) {
        printf("モンスターの力 (%d) が勇者の力 (%d) より強い…\n", monsterPower, heroPower);
        printf("勇者はモンスターに立ち向かいましたが、残念ながら敗北してしまいました…\n");
    } else {
        printf("勇者の力 (%d) とモンスターの力 (%d) は同じ！\n", heroPower, monsterPower);
        printf("勇者とモンスターは互いににらみ合い、どちらも一歩も引かないまま夜が明けました。\n");
    }

    return 0;
}
    }

    return 0;
}