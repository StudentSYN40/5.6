#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int rows,cols;
    cout << "rows = ";
    cin >> rows;
	
    cout << "cols = ";
    cin >> cols;
	
	int **mas = new int* [rows];
	
	for (int i=0; i<rows; i++)
	{
		mas[i] = new int[cols];
	}
	
	for(int j=0;j<rows;j++)
	{
		for(int i=0;i<cols;i++)
		{
			cout << "rows[" << j + 1 << "] cols[" << i + 1 << "] = ";
			cin >> mas[j][i];
		}
	}
	
	
	cout << "\nOriginal matrix:\n\n";
	for(int j=0;j<rows;j++)
	{
		for(int i=0;i<cols;i++)
		{
			cout << setw(4) << mas[j][i];	
		}
		cout << endl;
	}
	
	for(int i=0;i<cols;i++)
	{
		int z=mas[0][i];
		mas[0][i]=mas[rows-1][i];
		mas[rows-1][i]=z;
	}
	
	printf("\n\n\n\n");
	for(int j=0;j<rows;j++)
	{
		for(int i=0;i<cols;i++)
		{
			cout << setw(4) << mas[j][i];	
		}
		cout << endl;
	}
	
	for (int i=0;i<rows;i++)
	{
		delete[] mas[i];
	}
	
	delete[] mas;
}