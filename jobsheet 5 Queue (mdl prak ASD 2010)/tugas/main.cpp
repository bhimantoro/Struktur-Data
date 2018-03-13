#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <iostream>
#define QSIZE 5

using namespace std;

typedef struct
{
	int count;
	int awal, akhir;
	char kata[QSIZE][30];
}antri;

char *isi(char *p);
char *hapus();
void tampil();
void init();

antri *pq;

void init()
{
	pq->awal = pq->akhir = pq->count = 0;
}

char *isi(char *p)
{
	if (pq->count==QSIZE)
		return "\n\t Error : Antrian Full";
	pq->akhir = (pq->akhir)%QSIZE;
	strcpy(pq->kata[(pq->akhir)++],p);
	pq->count++;
	return "Data telah dimasukkan ke antrian";
}

char *hapus()
{
	if (pq->count==0)
		return "\n\tError : Antrian kosong";
	pq->awal = (pq->awal)%QSIZE;
	pq->count--;
	cout<<"\nData yang dihapus adalah : ";
	return pq->kata[(pq->awal)++];
}

void tampil()
{
	int i=pq->awal;
	int x=0;
	if (pq->count==0)
		cout<<"Antrian kosong";
	else
	{
		while(x<pq->count)
		{
			if (i==QSIZE)
				i%=QSIZE;
			cout<<"- "<<pq->kata[i]<<endl;
			i++;
			x++;
		}
	}
}

main()
{
	int pil;
	char str[30];
	antri q;
	pq=&q;
	init();
	do
	{
		system("cls");
		cout<<"Menu : \n"
		<<"~~~~~~~~~~~~~~\n"
		<<" 1. Isi Data\n"
		<<" 2. Hapus Data\n"
		<<" 3. Tampilkan Isi Queue\n"
		<<" 4. Keluar\n"
		<<"Pilihan Anda : ";
		cin>>pil;
		switch(pil)
		{
			case 1:
				cout<<"Masukkan Kata : ";
				fflush(stdin);
				gets(str);
				puts(isi(str));
				break;
			case 2:
				puts(hapus());
				break;
			case 3:
				tampil();
				break;
			case 4:
				exit (0);
			default:
				cout<<"Anda Salah Memilih!";
		}
		cout<<"\n\tPress any key to continue...";
		getch();
	}
	while(1);
}
