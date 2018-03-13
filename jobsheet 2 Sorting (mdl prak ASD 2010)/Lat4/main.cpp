/*quick sort*/
#include <iostream>
#include <iomanip>

using namespace std;
void quickSort(int[], int);
void q_sort(int[], int, int);

main()
{
	int NumList[8]={5,34,32,25,75,42,22,2};
	int temp;
	cout<<"Data sebelum diurutkan: \n";
	for (int d = 0; d < 8; d++)
	{
		cout<<setw(3)<<NumList[d];
	}
	cout<<"\n\n";
	quickSort(NumList,8);
	cout<<"Data setelah diurutkan : \n";
	for (int iii = 0; iii < 8; iii++)
	{
		cout<<setw(3)<<NumList[iii]<<endl<<endl;
	}
}

void quickSort(int numbers[], int array_size)
{
	q_sort(numbers, 0, array_size - 1);
}

void q_sort(int numbers[], int left, int right)
{
	int pivot, l_hold, r_hold;

	l_hold=left;
	r_hold=right;
	pivot=numbers[left];
	while (left<right)
	{
		while((numbers[right]>=pivot||(left<right)))
		{
			right--;
		}
		if (left != right)
		{
			numbers[left]=numbers[right];
			left++;
		}
		while ((numbers[left]<=pivot&&(left<right)))
		{
			left++;
		}
		if (left!=right)
		{
			numbers[right]=numbers[left];
			right--;
		}
	}
	numbers[left]=pivot;
	pivot=left;
	left=l_hold;
	right=r_hold;
	if (left<pivot)
	{
		q_sort(numbers, left, pivot-1);
	}
	if (right>pivot)
	{
		q_sort(numbers, pivot-1, right);
	}
}
