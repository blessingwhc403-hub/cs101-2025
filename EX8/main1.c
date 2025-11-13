#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LOTTO_NUM 7
#define MAX_LOTTO_NUMSET 5

int main() {
    FILE *fp = fopen("lotto.txt", "r");
    if (fp == NULL) {
        printf("錯誤\n");
        return 1;
    }

    char buffer[256];
    int lotto[MAX_LOTTO_NUMSET][MAX_LOTTO_NUM];
    int setIndex = 0;

   
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        if (buffer[0] == '[') {
            char *ptr = buffer;
            ptr = strchr(ptr, ':');
            if (ptr) {
                ptr++;
                for (int i = 0; i < MAX_LOTTO_NUM; i++) {
                    if (sscanf(ptr, "%d", &lotto[setIndex][i]) != 1) {
                        lotto[setIndex][i] = -1; 
                    }
                    ptr = strchr(ptr, ' ');
                    if (!ptr) break;
                    ptr++;
                }
                setIndex++;
            }
        }
    }
    fclose(fp);

    
    int input[3];
    printf("請輸入中獎號碼三個: ");
    scanf("%d %d %d", &input[0], &input[1], &input[2]);

    printf("輸入中獎號碼為: %02d %02d %02d\n", input[0], input[1], input[2]);
    printf("以下為中獎彩卷:\n");

   
    for (int i = 0; i < setIndex; i++) {
        int matchCount = 0;
        for (int j = 0; j < MAX_LOTTO_NUM; j++) {
            for (int k = 0; k < 3; k++) {
                if (lotto[i][j] == input[k]) {
                    matchCount++;
                }
            }
        }
        if (matchCount >= 3) {
            printf("售出時間: March 13 2025: [%d]: ", i + 1);
            for (int j = 0; j < MAX_LOTTO_NUM; j++) {
                if (lotto[i][j] == -1)
                    printf("__ ");
                else
                    printf("%02d ", lotto[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
