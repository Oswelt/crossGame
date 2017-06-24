#include <iostream>
#include <stdlib.h>

using namespace std;

void display (int** Mat);

int main()
{
	cout<<"this is an example of 2 dimension array"<<endl;
	
	int **Mat;
	Mat = new int* [3];
	for(int r = 0; r<3; r++)
		Mat[r] = new int [4];
	cout<<"array building complete"<<endl;
	
	cout<<"initialize the array"<<endl;
	for(int r = 0; r<3; r++)
	{
		for(int c = 0; c<3; c++)
			Mat[r][c] = 0;
	}
	
	cout<<"initialize the array"<<endl;
	display(Mat);

	int space = 9;
	while(space != 0)
	{
		cout<<"input?"<<endl;
		int r;
		int c;
		cin>>r>>c;
		
		if(space%2 == 1)
		{
			Mat[r][c]=1;
		}
		else
		{
			Mat[r][c]=2;		
		}
		
		space--;
		display(Mat);		
	}

	cout<<"done"<<endl;
	
	for(int r = 0; r<3; r++)
		delete [] Mat[r];
	delete [] Mat;
	Mat = NULL;
	cout<<"delete the dynamic array"<<endl;
	
	
	
	int a;
	cin>>a;
	return 0;	

}

void display(int **Mat)
{
	for(int i = 0; i<3; i++)
	{
		for(int j = 0; j<3; j++)
		{
			switch(Mat[i][j])
			{
				case 1:
					cout<<" O ";
					break;
				case 2:
					cout<<" X ";
					break;
				default:
					cout<<"[ ]";
					break;
				
			}
			
		}
		cout<<endl;
	}
}
