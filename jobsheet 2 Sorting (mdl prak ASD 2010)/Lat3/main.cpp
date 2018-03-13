/*shell sort*/
#include <iostream>

using namespace std;

int main(void)
{
	int array[5];
	int length = 5;
	int i, j, d;
	int tmp, flag;

	//Some input
	for (int i = 0; i < length; i++)
	{
		cout<<"Enter a number : ";
		cin>>array[i];
	}

	//algorithm
	d = length;
	flag = 1;
	while (flag||(d>1))
	{
		flag = 0;
		d = (d+1)/2;
		for (int i = 0; i < (length-d); i++)
		{
			if (array[i+d]>array[i])
			{
				tmp = array[i+d];
				array[i+d]=array[i];
				array[i]=tmp;
				flag=1;
			}
		}
	}

	//some output
	for (int i = 0; i < 5; i++)
	{
		cout<<array[i]<<endl;
	}
}
