/*program sorting data dengan metode bubble sort*/
#include <iostream>
#include <iomanip>

using namespace std;

main(){
	int NumList[8]={5,34,32,25,75,42,22,2};
	int temp;
	cout<<"Data Sebelum diurutkan: \n";
	for (int d = 1; d < 8; d++)
	{
		cout<<setw(3)<<NumList[d];
	}
	cout<<"\n\n";
	for (int i = 0; i < 7; i++)
	{
		for (int ii = 0; ii < 7; i++)
		{
			if (NumList[ii]>=NumList[ii+1])
			{
				temp=NumList[ii];
				NumList[ii]=NumList[ii+1];
				NumList[ii+1]=temp;
			}
		}
	}
	cout<<"Data setelah diurutkan: \n";
	for (int i = 0; i < 8; i++)
	{
		cout<<setw(3)<<NumList[i]<<endl<<endl;
	}
}
