#include <iostream>
#include <windows.h>
#define maxStack 3
using namespace std;

struct STACK {
    int top;
    float data[maxStack];
}stackBaru;

float dta;

bool isEmpty() {
    if (stackBaru.top == -1)
        return true;
    else
        return false;
}

bool isFull() {
    if (stackBaru.top == maxStack-1)
        return true;
    else
        return false;
}

void push(float dta) {
    if (isFull()) {
        cout<<"Maaf,  stack penuh";
    }
    else {
        stackBaru.top++;
    }
}

void pop() {
    if (isEmpty()) {
        cout<<"Data telah kosong!";
    }
    else {
        cout<<"Data yang terambil : "<<stackBaru.data[stackBaru.top]<<endl;
        stackBaru.top--;
    }
}
/**
void print() { //dari yang terakhir di input
    for (int i=stackBaru.top; i>=0; i--) {
        cout<<stackBaru.data[i]<<"\n";
    }
}
**/
void print(){ //dari yang pertama di input
    for (int i=0; i<=stackBaru.top;i++){
        cout<<stackBaru.data[i]<<"\n";
    }
}

void clear() {
    stackBaru.top = -1;
}

main() {
    clear();

    char menu;
    char ulang;

do {
    system("cls");
    cout<<"Menu :\n";
    cout<<" 1. Pop Stack\n";
    cout<<" 2. Push Stack\n";
    cout<<" 3. Cetak\n";
    cout<<" 4. Bersihkan Stack\n";
    cout<<" 5. Exit";

    cout<<"\nMenu Pilihan Anda :   ";
    cin>>menu;

    if (menu == '1') {
        pop();
        ulang = 'y';
    }
    else if (menu == '2') {
        push(dta);
        cout<<"Data yang akan disimpan di stack : ";
        cin>>stackBaru.data[stackBaru.top];
        ulang = 'y';
    }
    else if (menu == '3') {
        print();
        cout<<"\nUlang? (y/t)";
        cin>>ulang;
    }
    else if (menu == '4') {
        clear();
        cout<<"Ulang? (y/t)";
        cin>>ulang;
    }
    else if (menu == '5') {
        exit(0);
    }

}

while (ulang == 'Y' || ulang == 'y');
return 0;
}
