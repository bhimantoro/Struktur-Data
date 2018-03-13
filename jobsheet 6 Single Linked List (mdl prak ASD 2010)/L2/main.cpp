#include <iostream>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>

#define Nil NULL
#define info(P) P->info
#define next(P) P->info
#define First(L) (L)

using namespace std;

typedef int InfoType;
typedef struct telmtlist *address;
typedef struct elmtlist
{
	InfoType info;
	address next;
}elmtlist;

typedef address list;

void CiptaSenarai(list *L)
{
	First(*L)=Null;
}

list NodeBaru(int m)
{
	list n;
	n=(list) malloc(size(elmtlist));
	if (n!=NULL)
	{
		info(n)=m;
		next(n)=Nil;
	}
	return n;
}

void SisipSenarai(list *L, list t, list p)
{
	if (p==Nil)
	{
		t->next=*L;
		*L=t;
	}
	else
	{
		t->next=p->info;
		p->next=t;
	}
}

void CetakSenarai(list L)
{
	list ps;
	for (ps=L; ps!=Nil; ps=ps->next)
	{
		cout<<"    "<<info(ps)<<"-->";
	}
	cout<<"NULL\n";
}

InfoType Max(list L)
{
	address Pmax, Pt;

	Pmax = First(L);

	if (next(Pmax)==Nil)
	{
		return (info(Pmax));
	}
	else
	{
		Pt=next(Pmax);
		while(Pt!=Nil)
		{
			if (info(Pmax)<info(Pt))
			{
				Pmax=Pt;
			}
			else
			{
				Pt=next(Pt);
			}

		}
		return (info(Pmax));
	}
}

InfoType Min(list L)
{
	address Pmin, Pt;

	Pmin=First(L);
	if (next(Pmin)==Nil)
	{
		return (info(Pmin));
	}
	else
		Pt=next(Pmin);
	while(Pt!=Nil)
	{
		if (info(Pmin)>info(Pt))
		{
			Pmin=Pt;
		}
		else
		{
			Pt=next(Pt);
		}
	return (info(Pmin));
	}
}

void main()
{
	list pel;
	list n;
	int i, k, nilai, maks, min;

	CiptaSenarai(&pel);
	cout<<"Masukkan banyak data = ";
	cin>>k;
	for (int i = 1; i < =k; i++)
	{
		cout<<"Masukkan data senarai ke-"<<k<<" = ";
		cin>>nilai;
		n=NodeBaru(nilai);
		SisipSenarai(&pel, n, NULL);
	}
	cout<<endl;
	cout<<"nilai terbesar : "<<max<<endl;
	cout<<"nilai terkecil : "<<min<<endl;

}
