#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("liczby.txt", "r");
    char line_buff[100];
    fgets(line_buff, 100, fp);

    FILE *fp_even = fopen("parzyste.txt", "w");
    FILE *fp_odd = fopen("nieparzyste.txt", "w");

    while (fgets(line_buff, 100, fp))
    {
        if (atoi(line_buff) % 2 == 0) {
            fputs(line_buff, fp_even);
        } else {
            fputs(line_buff, fp_odd);
        }
    }

    fclose(fp);
    fclose(fp_even);
    fclose(fp_odd);

    return 0;
}