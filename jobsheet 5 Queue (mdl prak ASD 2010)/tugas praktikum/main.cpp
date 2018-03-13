#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

class Queue
{
private:
	struct kue
	{
		int data;
		kue *kuebaru;
	};
	kue *tail;
	kue *entry;
	kue *print;
	kue *head;
public:
	Queue();
	void Insert();
	void Delete();
	void cetak();
	void menu();
};

Queue::Queue()
{
	tail=NULL;
	head=NULL;
}

void Queue::Insert()
{
	int temp;
	cout<<"\n\tMasukkan data dalam Queue: ";cin>>temp;
	entry=new kue;
	if (head==NULL)
	{
		entry->data=temp;
		entry->kuebaru=NULL;
		tail=entry;
		head=tail;
	}
	else
	{
		entry->data=temp;
		entry->kuebaru=NULL;
		tail->kuebaru=entry;
		tail=entry;
	}
	cout<<"\n\n\t***"<<temp<<"sudah masuk dalam Queue."<<endl;
	getch();
	system("cls");
}

void Queue::Delete()
{
	if (head == NULL)
	{
		cout<<"\n\n\n\t***Error : Queue is empty.\n"<<endl;
	}
	else
	{
		int deleted_element=head->data;
		kue *temp;
		temp=head;
		head=head->kuebaru;
		delete temp;
		cout<<"\n\n\n\t***"<<deleted_element<<"dihapus dari Queue.\n";
	}
	cout<<"\n\n\n\t\tPress any key to continue...\n";
	getch();
	system("cls");
}

void Queue::cetak()
{
	print=head;
	if (print!=NULL)
	{
		cout<<"\n\n\n\n\t angka - angka yang ada didalam queue adalah : \n";
	}
	else
	{
		cout<<"\n\n\n\n\t***tidak ada yang ditampilkan\n";
	}
	while(print!=NULL)
	{
		cout<<"\t"<<print->data<<endl;
		print=print->kuebaru;
	}
cout<<"\n\n\n\t\tPress any key to return to menu...\n";
getch();
system("cls");
}

void Queue::menu()
{
	char Key = NULL;
	do
	{
	    cout<<"**Implementasi Queue**\n"
		<<"pilih salah satu menu : \n"
		<<"Tekan \'I\' untuk Masukkan data dalam Queue\n"
		<<"Tekan \'D\' untuk hapus data dari Queue\n"
		<<"Tekan \'P\' untuk Tampilkan data dari Queue\n"
		<<"Tekan \'E\' untuk Exit\n";
		Input:
		cout<<"Masukkan pilihan : ";
		Key = getche();
		system("cls");
		if (Key=='e'||Key=='E')
			break;
		else if (Key=='i'||Key=='I')
			Insert();
		else if (Key=='d'||Key=='D')
			Delete();
		else if (Key=='p'||Key=='P')
			cetak();
		else
			goto Input;
    }
	while(1);
}

int main()
{
	Queue obj;
	obj.menu();
	return 0;
}
