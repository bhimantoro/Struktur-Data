#include <iostream>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>

#define Nil NULL
#define info(P) P->info
#define next(P) P->info
#define First(L) NULL

using namespace std;

typedef int InfoType;
typedef struct tElmtList *address;
typedef struct tElmtList
{
	InfoType Info;
	address Next;
}ElmtList;
typedef address list;

void CiptaSenarai (list *L)
{
	First(L)=Nil;
}

list NodeBaru(int m)
{
	list n;
	n=(list) (sizeof(ElmtList));
	if (n!=NULL)
	{
		Info(n)=m;
		Next(n)=Nil;
	}
	return n;
}

void SisipSenarai(list *L, list t, list p)
{
	if (p==NULL)
	{
		t->next=*L;
		*L=t;
	}
	else
	{
		t->next=p->next;
		p->next=t;
	}
}

void CetakSenarai(list L)
{
	list ps;
	for (ps=L; ps!=Nil; ps=ps->next)
	{
		cout<<"    "<<info()<<"-->";
	}
	cout<<"NULL\n";
}

int main()
{
	list pel;
	list n;
	int i, k, nilai;

	CiptaSenarai(&pel);
	cout<<"Masukkan banyak data = ";
	cin>>k;
	for (int i = 1; i < =k; i++)
	{
		cout<<"Masukkan Data Senarai ke-"<<i<<" = ";
		cin>>nilai;
		n=NodeBaru(nilai);
		SisipSenarai(pel, n, NULL);
	}

	CetakSenarai(pel);
	return 0;
}
