#include<iostream>
#include<fstream>

using namespace std;



//// ��������� ////

/*
struct Student
{
	char name[30];
	char surname[30];
	int age;
	int grades[5];

	void print()
	{
		cout << name << " " << surname << " " << age << endl;

		for (int i = 0; i < 5; i++)
			cout << grades[i] << " ";

		cout << endl;
	}
};

int main()
{
	Student s1;

	strcpy_s(s1.name, "Vladimir");
	strcpy_s(s1.surname, "Orlov");
	s1.age = 19;

	for (int i = 0; i < 5; i++)
	{
		s1.grades[i]=i;
	}
	

	Student s2;

	strcpy_s(s2.name, "Vladimir");
	strcpy_s(s2.surname, "Orlov");
	s2.age = 20;

	for (int i = 0; i < 5; i++)
	{
		s2.grades[i]=i;
	}

	s1.print();
	s2.print();

	system("pause");
}
*/

/*
struct Student
{
	char name[30];
	char surname[30];
	int age;
	int grades[5];

	void print()
	{
		cout << name << " " << surname << " " << age << endl;

		for (int i = 0; i < 5; i++)
			cout << grades[i] << " ";

		cout << endl;
	}
};

int main()
{
	Student s1;

	cin.getline(s1.name, 30);
	cin.getline(s1.surname, 30);
	cin>>s1.age;

	for (int i = 0; i < 5; i++)
	{
		s1.grades[i] = i;
	}


	Student s2;

	cin.getline(s2.name, 30);
	cin.getline(s2.surname, 30);
	cin >> s2.age;

	for (int i = 0; i < 5; i++)
	{
		s2.grades[i] = i;
	}

	s1.print();
	s2.print();

	system("pause");
}
*/

/*
struct Student
{
	char name[30];
	char surname[30];
	int age;
	int grades[5];

	void print()
	{
		cout << name << " " << surname << " " << age << endl;

		for (int i = 0; i < 5; i++)
			cout << grades[i] << " ";

		cout << endl;
	}
};

int main()
{
	int n;
	cout << "������� ���-�� �������� ->";
	cin >> n;

	Student *ss;
	ss = new Student[n];

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter name, surmname and age for" << i + 1 << "th student" << endl;
		cin >> ss[i].name >> ss[i].surname >> ss[i].age;
		cout << "Enter grades of the student" << endl;
		for (int j = 0; j < 5; j++)
		{
			ss[i].grades[j] = 5;
			cout<<ss[i].grades[j];
		}

		cout << endl;
	}
	
	system("pause");
}
*/

/// ���������� ������ ��������� �� ����� ///
/*
struct Student
{
	char name[30];
	char surname[30];
	int age;
	int grades[5];

	void print()
	{
		cout << name << " " << surname << " " << age << endl;

		for (int i = 0; i < 5; i++)
			cout << grades[i] << " ";

		cout << endl;
	}
};

int main()
{
	ifstream fin("DataStudent.txt");
	int n;
	if (!fin)
	{
		cout << "file open error" << endl;
	}
	else
	{
		fin >> n;

		Student *ss;
		ss = new Student[n];

		for (int i = 0; i < n; i++)
		{
			fin >> ss[i].name >> ss[i].surname >> ss[i].age;
			
			for (int j = 0; j < 5; j++)
			{
				fin >> ss[i].grades[j];
			}
		}

		for (int i = 0; i < n; i++)
			ss[i].print();

	}

	system("pause");
}
*/


///////  ������������ ������� �_pract_structs_dp ////////



//1.	**������� ��������� Student(�������, ������, ������������(������ �� 5 int)).������� ������ ��������� � �������� ���������, �����������:
//-����������� �������� ������ �������;
//-�������� ������ ����������(> 75 % ��� ������);
//-�������� ������ ����������(> 50 % ������ 2 � 3);

/*
struct Student
{
	char name[30];
	char surname[30];
	int age;
	int grades[5];

	void print()
	{
		cout << name << " " << surname << " " << age << endl;

		for (int i = 0; i < 5; i++)
			cout << grades[i] << " ";

		cout << endl;
	}

	bool isExcellent()
	{
		int count = 0;
		for (int i = 0; i < 5; i++)
			if (grades[i] > 4) count++;

		if (double(count) / 5 >= 0.75) return true;
		else return false;
	}

	bool isBad()
	{
		int count = 0;
		for (int i = 0; i < 5; i++)
			if (grades[i] < 4) count++;

		if (double(count) / 5 >= 0.50) return true;
		else return false;
	}

};

int main()
{
	ifstream fin("DataStudent.txt");
	Student *ss;
	int n;
	if (!fin)
	{
		cout << "file open error" << endl;
	}
	else
	{
		fin >> n;

	
		ss = new Student[n];

		for (int i = 0; i < n; i++)
		{
			fin >> ss[i].name >> ss[i].surname >> ss[i].age;

			for (int j = 0; j < 5; j++)
			{
				ss[i].grades[j] = 5;
				fin >> ss[i].grades[j];
			}

		}
		
		//-�������� ������ ����������(> 75 % ��� ������);
		for (int i = 0; i < n; i++)
		{
			if (ss[i].isExcellent() == true)
			{
				cout << "Excellent -> ";
				ss[i].print();
			}
		}

		//-�������� ������ ����������(> 50 % ������ 2 � 3);
		for (int i = 0; i < n; i++)
		{
			if (ss[i].isBad() == true)
			{
				cout << "Bad -> ";
				ss[i].print();
			}
		}

	}

	system("pause");
}
*/


//// 

//2.	������� ��������� �����(�������� ��������, �����, ����, ���������).
//�) *������� ��������� ��������� ����� � �������� ��� ���� ������� ���������� � ������.
//�) **������� ������ ������� � ��������  ���������, �����������:
//-����������� �������� ������ �������;
//-�������� ������ ������� �� ���������� ����;
//-�������� ������  ������� �� ������ ������������ �����;
//-������ ����� ������ �������.

struct Ticket
{
	char route[30];
	int time[30];
	int date;
	int cost[5];

	void print()
	{
		cout << route << " " << time << " " << date << " " << cost << endl;

	}

	/*bool isExcellent()
	{
		int count = 0;
		for (int i = 0; i < 5; i++)
			if (grades[i] > 4) count++;

		if (double(count) / 5 >= 0.75) return true;
		else return false;
	}

	bool isBad()
	{
		int count = 0;
		for (int i = 0; i < 5; i++)
			if (grades[i] < 4) count++;

		if (double(count) / 5 >= 0.50) return true;
		else return false;
	}*/

};

int main()
{
	ifstream fin("DataTicket.txt");
	Ticket *ss;
	
	int n;
	if (!fin)
	{
		cout << "file open error" << endl;
	}
	else
	{
		fin >> n;


		ss = new Ticket[n];

		for (int i = 0; i < n; i++)
		{
			
			fin >> ss[i].route;
			
			>> ss[i].time >> ss[i].date >> ss[i].cost;

		}

		for (int i = 0; i < n; i++)
			ss[i].print();

	}

	system("pause");
}