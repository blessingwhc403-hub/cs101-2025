#include <stdio.h>

int main() {
    FILE *fp;

    int a[] = {0, 1, 2};
    char b[] = {'A', 'B', 'C'};
    float c[] = {1.1, 1.2, 1.3};

   
    fp = fopen("a.bin", "wb");
    
    fwrite(a, sizeof(int), 3, fp);
    fwrite(b, sizeof(char), 3, fp);
    fwrite(c, sizeof(float), 3, fp);

    fclose(fp);

    
    int ar[3];
    char br[3];
    float cr[3];

    fp = fopen("a.bin", "rb");

    fread(ar, sizeof(int), 3, fp);
    fread(br, sizeof(char), 3, fp);
    fread(cr, sizeof(float), 3, fp);

    fclose(fp);
    
    for (int i = 0; i < 3; i++)
        printf("%d ", ar[i]);

     printf("\n");
    for (int i = 0; i < 3; i++)
        printf("%c ", br[i]);

     printf("\n");

    for (int i = 0; i < 3; i++)
        printf("%.6f ", cr[i]);
    printf("\n");

    return 0;
}
