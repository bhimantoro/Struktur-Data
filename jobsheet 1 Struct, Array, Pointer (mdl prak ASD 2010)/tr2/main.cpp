#include <stdio.h>
#include <windows.h>

struct
{
    int a,b,c,d;
}bil;

void kali()
{
    printf("\n\n\tPERKALIAN BILANGAN KOMPLEKS \t\n");
    int hasil1 = (bil.a * bil.c) - (bil.b * bil.d);
    int hasil2 = (bil.a *bil.d) + (bil.b * bil.c);
    printf( "\nHasil perkalian dari (%d + %di) * (%d + %di) = (%d.%d - %d.%d)+(%d.%d + %d.%d)i adalah %d + %di", bil.a,bil.b,bil.c,bil.d,bil.a,bil.c,bil.b,bil.d,bil.a,bil.d,bil.b,bil.c,hasil1, hasil2);
}

void bagi()
{
    printf("\n\n\tPEMBAGIAN BILANGAN KOMPLEKS \t\n");
    int hasil1 = ((bil.a*bil.c)+(bil.b*bil.d));
    int hasil2 = (bil.a*bil.a)+(bil.b*bil.b);
    int hasil3 = ((bil.b*bil.c)-(bil.a*bil.d));
    int hasil4 = (bil.c*bil.c)+(bil.d*bil.d);
    printf("\nHasil pembagian dari (%d + %di)/(%d + %di) =[(%d.%d + %d.%d)/(%d.%d + %d.%d)]+[(%d.%d - %d.%d)/(%d.%d + %d.%d)i adalah (%d/%d)+(%d/%d)i", bil.a,bil.b,bil.c,bil.d,bil.a,bil.c,bil.b,bil.d,bil.a,bil.a,bil.b,bil.b,bil.b,bil.c,bil.a,bil.d,bil.c,bil.c,bil.d,bil.d,hasil1,hasil2,hasil3,hasil4);
}

void tambah()
{
    printf("\n\n\tPENJUMLAHAN BILANGAN KOMPLEKS \t\n");
    int hasil1 = (bil.a + bil.c);
    int hasil2 = (bil.b + bil.d);
    printf( "\nHasil penjumlahan dari (%d + %di) + (%d + %di) = (%d + %d)+(%d + %d)i adalah %d + %di", bil.a,bil.b,bil.c,bil.d,bil.a,bil.c,bil.b,bil.d,hasil1, hasil2);
}

void kurang()
{
    printf("\n\n\tPENGURANGAN BILANGAN KOMPLEKS \t\n");
    int hasil1 = (bil.a - bil.c);
    int hasil2 = (bil.b - bil.d);
    printf( "\nHasil pengurangan dari (%d + %di) - (%d + %di) = (%d - %d)+(%d - %d)i adalah %d + %di", bil.a,bil.b,bil.c,bil.d,bil.a,bil.c,bil.b,bil.d,hasil1, hasil2);
}

int main()
{
    char jawab;
    do
    {
        char pilihan;
        system("cls");
        printf("|>>>>>>>>>>>>>>+<<<<<<<<<<<<<<<|");
        printf("\n| Input Bilangan Kompleks |");
        printf("\n|>>>>>>>>>>>>>>+<<<<<<<<<<<<<<<|");
        printf("\n\n|Masukkan bilangan A : ");
        scanf("%d",&bil.a);
        printf("|Masukkan bilangan B : ");
        scanf("%d",&bil.b);
        printf("|Masukkan bilangan C : ");
        scanf("%d",&bil.c);
        printf("|Masukkan bilangan D : ");
        scanf("%d",&bil.d);
        printf("\n|^^^^^^^^^^^^^ +^^^^^^^^^^^^^^^|");
        printf("\n|\tMenu Pilihan : |");
        printf("\n|^^^^^^^^^^^^^^+^^^^^^^^^^^^^^^|");
        printf("\n1. Perkalian \n2. Pembagian \n3. Penjumlahan \n4. Pengurangan\n");
        printf("\nMasukkan pilihan anda : ");
        scanf("%s",&pilihan);
        if(pilihan=='1')
            kali();
        else if(pilihan=='2')
            bagi();
        else if(pilihan=='3')
            tambah();
        else if(pilihan=='4')
            kurang();
        else
            printf("Maaf Menu yang Anda pilih tidak Tersedia!!");
        printf("\n Apakah anda ingin kembali melakukan perhitungan ? [y/t] ");
        scanf("%s",&jawab);
    }
    while((jawab=='Y'||jawab=='y'));
    printf("\nTY");
}
