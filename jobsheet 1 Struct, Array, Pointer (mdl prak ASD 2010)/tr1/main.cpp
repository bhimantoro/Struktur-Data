#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

void tambah (int a[], int b[], int c, int e)
{
    int k,l;
    if(c<=e)
        l=e;
    else
        l=c;
    if(l==c)
    {
        k=e+1;
        for (k=0;k<=1;k++)
        {
            a[k]=0;
        }
    }
    int z;
    for (z=0;z<=1;z++)
    {
        a[z]=a[z]+b[z];
    }
        for (z=0;z<=1;z++)
            if(z!=1)
            {
                cout<<a[z]<<"x^"<<z<<"+";
            }
            else
            {
                cout<<a[z]<<"x^"<<z;
            }
            cout<<endl;
}

void kurang (int a[], int b[], int e, int c)
{
    int k,l;
    if (c<=e)
        l=e;
    else
        l=c;
    if(l==c)
    {
        k=e+1;
        for (k=0;k<=1;k++)
        {
            b[k]=0;
        }
    }
    else if(l==e)
    {
        k=c+1;
        for (k=0;k<=1;k++)
        {
            a[k]=0;
        }
    }
    int z;
    for (z=0;z<=1;z++)
    {
        a[z]=a[z]-b[z];
    }
    for (z=0;z<=1;z++)
    {
        if(z!=1)
        {
            cout<<a[z]<<"x^"<<z<<"+";
        }
        else
        {
            cout<<a[z]<<"x^"<<z;
        }
        cout<<endl;
    }
}
void kali(int a[], int b[], int c, int e)
{
    int f, g, h[21], i=0, j[21];
    for (f=0; f<=c; f++)
    {
        for (g=0;g<=e;g++)
        {
            h[i]=b[g]*a[f];
            j[i]=f+g;
            i++;
        }
    }
    for (f=0;f<i;f++)
    {
        if (f!=i-1)
        {
            cout<<h[f]<<"x^"<<j[f]<<"+";
        }
        else
        {
            cout<<h[f]<<"x^"<<j[f];
        }
    }
    cout<<endl;
}
void downan (int a[], int b[], int c, int e)
{
    int f;
    for (f=0; f<=c; f++)
    {
        a[f]=a[f+1]*(f+1);
    }
    cout<<"turunan polinom adalah : "<<a;
    for (f=0;f<c;f++)
    {
        if(f!=c-1)
        {
            cout<<a[f]<<"x^"<<f<<"+";
        }
        else
        {
            cout<<a[f]<<"x^"<<f;
        }
    }
    for(f=0;f<=e;f++)
    {
        b[f]=b[f+1]*(f+1);
    }
    cout<<"\n\nturunan polinom kedua adalah : "<<b;
    for (f=0;f<e;f++)
    {
        if(f!=e-1)
        {
            cout<<b[f]<<"x^"<<f<<"+";
        }
        else
        {
            cout<<b[f]<<"x^"<<f;
        }
    }
    cout<<endl;
}
void salah()
{
    cout<<"invalid!\n";
}

int main()
{
    char jawab;
    do
    {
        int a[21],b[21],c,d,e,f;
        cout<<"input 1st polinom, press any key to continue\n";
        getch();
        cout<<"\ninput derajat tertinggi 1st polinom: ";cin>>c;
        cout<<"\ninput koefisien x mulai dari x pangkat 0, press any key to continue\n";
        getch();
        for (d=0; d<=c; d++)
        {
            cout<<"\nKoefisien x Pangkat "<<d<<" : ";
            cin>>a[d];
            cout<<"\n";
        }
        cout<<"input 2nd polinom, press any key to continue\n";
        getch();
        cout<<"\ninput derajat tertinggi 2nd polinom: ";cin>>e;
        cout<<"\ninput koefisien x mulai dari x pangkat 0, press any key to continue\n";
        getch();
        for (d=0;d<=e;d++)
        {
            cout<<"koefisien x pangkat "<<d<<" : ";cin>>b[d];
            cout<<"\n";
        }
        cout<<"1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Turunan\n";
        cout<<"\nInput kode operasi : ";cin>>f;
        switch(f)
        {
        case 1:
            {
                tambah(a,b,e,c);
                break;
            }
        case 2:
            {
                kurang(a,b,e,c);
                break;
            }
        case 3:
            {
                kali(a,b,c,e);
                break;
            }
        case 4:
            {
                downan(a,b,c,e);
                break;
            }
        default:
            {
                salah();
                break;
            }
        }
        printf("\n Apakah anda ingin mengulang ? [y/t]");
        scanf("%s",&jawab);
    }
    while ((jawab=='Y'||jawab=='y'));
    cout<<"\n\n\nTY";
}
