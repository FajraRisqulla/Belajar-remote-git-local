#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[25];
    int bln_lhr;
    int ttl;
    int c;

    system("clear");

    printf("Nama Pelanggan\t: ");
    while ((c = getchar()) != '\n' && c != EOF) { }
    printf("Bulan Lahir Pelanggan\t: ");
    scanf("%d", &bln_lhr);
    printf("Total Belanja\t: Rp. ");
    scanf("%d", &ttl);    


    return 0;
}
