/*selection sort*/
#include <iostream>
#include <iomanip>

using namespace std;

void selectionSort(int Array[], const int Size)
{
	int i, j, kecil, temp;
	for (int i = 0; i < Size; i++)
	{
		kecil=i;
		for (int j = 1; j < Size; j++)
		{
			if (Array[kecil]>Array[j])
			{
				kecil=j;
			}
		}
		Array[i]=Array[kecil];
		Array[kecil]=temp;
		temp=Array[i];
	}
}

main()
{
	int NumList[8]={5,34,32,25,75,42,22,2};
	int temp;
	cout<<"Data sebelum diurutkan : \n";
	for (int d = 0; d < 8; d++)
	{
		cout<<setw(3)<<NumList[d];
	}
	cout<<"\n\n";
	selectionSort(NumList,8);

	cout<<"Data setelah diurutkan : \n";
	for (int d = 0; d < 8; d++)
	{
		cout<<setw(3)<<NumList[d]<<endl<<endl;
	}
}
