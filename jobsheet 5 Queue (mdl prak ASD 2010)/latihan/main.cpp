#include <iostream>
#include <stdlib.h>
#define MAX 10

using namespace std;

void insert(int queue[], int *rear, int nilai);
void del(int queue[], int *front, int rear, int *nilai);

main(){
    int queue[MAX];
    int front, rear;
    int n, nilai;

    front = rear = (-1);
    do {
        do {
            cout<<"masukkan nilai elemen : ";
            cin>>nilai;
            insert(queue,&rear,nilai);

            cout<<endl;
            cout<<"tekan 1 untuk melanjutkan";
            cin>>n;
        }
        while (n==1);
    cout<<endl;
    cout<<"tekan 1 untuk menghapus sebuah elemen : "<<endl;
    cin>>n;

    while(n==1){
        del(queue, &front, rear, &nilai);
        cout<<"nilai telah dihapus"<<nilai<<endl;
        cout<<endl<<"tekan 1 untuk menghapus sebuah elemen : "<<endl;
        cin>>n;
    }

    cout<<endl<<"tekan 1 untuk melanjutkan : ";
    cin>>n;
    }
    while (n==1);
}

void insert(int queue[], int *rear, int nilai) {
    if (*rear<MAX-1){
        *rear = *rear+1;
        queue[*rear] = nilai;
    }
    else {
        cout<<"queue penuh, insert tidak dapat dilakukan"<<endl;
        exit(0);
    }
}

void del(int queue[], int *front, int rear, int *nilai) {
    if (*front == rear) {
        cout<<"queue kosong, delete tidak dapat dilakukan"<<endl;
        exit(0);
    }
    *front = *front+1;
    *nilai = queue[*front];
}
