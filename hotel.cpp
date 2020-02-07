#include<bits/stdc++.h>
#include<fstream>
#include<fstream>
using namespace std;
void view()
{

	cout<<"**************************************************\n";
	cout<<"*\t\t    HYDERABAD    \t\t *\n";
	cout<<"*\t\t\t\t\t\t *\n";
	cout<<"* 1)Hotels\t2)Temples\t3)Visiting Place *\n*";
	int n;
	cin>>n;
	switch(n)
	{
			case 1:
			{
				cout<<"*\t\t\t\t\t\t *\n";	
				cout<<"*\tHotels\t\t\tPrice\t\t *\n";
				cout<<"*\t\t\t\t\t\t *\n";
				ifstream file1,file2;
				string hotel;
				string price;
				file1.open("Hotels.txt",ios::in);
				file2.open("Price.txt",ios::in);
				while(getline(file1,hotel))
				{
					getline(file2,price);
					cout<<"*\t"<<hotel<<"\t\t"<<price<<"\t\t *\n";
				}
				file1.close();
				file2.close();
			}
			break;
			case 2:
			{
				cout<<"*\t\t\t\t\t\t *\n";
				cout<<"*\t\t    Temples    \t\t\t *\n";
				ifstream file3;
				file3.open("Temples.txt");
				string temple;
				int i =1;
				while(getline(file3,temple))
				{
					cout<<"*\t\t    "<<i<<")"<<temple<<"    \t\t *\n";
					i++;
				}
				file3.close();
			}
			break;
			case 3:
			{
				cout<<"*\t\t\t\t\t\t *\n";
				cout<<"* \t\tVisiting Places\t\t\t *\n";
				ifstream file4;
				file4.open("Visiting.txt");
				string visiting;
				int i1 =1;
				while(getline(file4,visiting))
				{
					cout<<"*\t\t"<<i1<<")"<<visiting<<"\t\t\t *\n";
					i1++;
				}
				file4.close();
			}
			break;
	}
	cout<<"**************************************************\n";
	cout<<"\n\n";
}

void addInformation()
{
	cout<<"HYDERABAD\n";
	cout<<"1)Hotels\t2)Temples\t3)Visiting Place\n";
	int n;
	cin>>n;
	switch(n)
	{
			case 1:
			{
				ofstream file1,file2;
				string hotel;
				string price;
				getline(cin,hotel);
				file1.open("Hotels.txt",ios::app);
				file2.open("Price.txt",ios::app);
				cout<<"Hotel Name: ";
				
				getline(cin,hotel);
				file1<<hotel<<endl;
				cout<<"Price: ";
				getline(cin,price);
				file2<<price<<endl;				
				file1.close();
				file2.close();
				break;
			}
			case 2:
			{
				cout<<"Temples\n";
				string temple;
				ofstream file3;
				getline(cin,temple);
				file3.open("Temples.txt",ios::app);
				
				cout<<"Place Name: ";
				getline(cin,temple);
				file3<<temple<<endl;
				file3.close();
			}
			break;
			case 3:
			{
				cout<<"Visiting Places\n";
				ofstream file4;
				file4.open("Visiting.txt",ios::app);
				string visiting;
				getline(cin,visiting);
				cout<<"Place Name: ";
				getline(cin,visiting);
				file4<<visiting<<endl;
				file4.close();
			}
			break;
	}
}

int main()
{
	while(1)
	{
		cout<<"**************************************************\n";
		cout<<"*\t\tSMART CITY MODEL\t\t *\n";
		cout<<"*\t\t    1)View    \t\t\t *\n*\t\t2)Add Information\t\t *\n*\t\t    3)Exit\t\t\t *\n";
		int n;
		cin>>n;
		cout<<"**************************************************\n\n\n";
		switch(n)
		{
			case 1: view();
			break;
			case 2: addInformation(); 
			break;
			case 3: exit(1);
		}
	}
	return 0;
}