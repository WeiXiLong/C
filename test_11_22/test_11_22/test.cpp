#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstring>
#include<string>
#include<array>
int main()
{
	using namespace std;
	//double* p3 = new double[3];
	//p3[0] = 0.2;
	//p3[1] = 0.5;
	//p3[2] = 0.8;
	//cout << "p3[1] is " << p3[1] << ".\n";
	//p3 = p3 + 1;
	//cout << "Now p3[0] is " << p3[0] << " and " << "p3[1] is " << p3[1] << endl;
	//p3 = p3 - 1;
	//cout << p3[0] << endl;
	//delete[] p3;

	//char animal[20] = "bear";
	//const char* bird = "wren";
	//char* ps;

	//cout << animal << " and " << bird << endl;

	//cout << "Enter a kind of animal: ";
	//cin >> animal;
	//ps = animal;

	//cout << ps << endl;
	//cout << "Before using strcpy();" << endl;
	//cout << animal << " at " << (int*)animal << endl;
	//cout << ps << " at " << (int*)ps << endl;

	//ps = new char[strlen(animal) + 1];
	//strcpy(ps, animal);
	//cout << "Adter using strcpy():" << endl;
	//cout << ps << " at " << (int*)ps << endl;
	//delete[] ps;

	//char arr1[20] ;
	//char arr2[20] = { "Yewe "};
	//char ch;
	//int age;
	//cout << "What is your first name?" ;
	//cin.getline(arr1,20);
	//cout << "What is your last name?" ;
	//cin.getline(arr2, 20);
	//cout << "What letter grade do you deserve ?";
	//cin >> ch;
	//cout << "What is your age?";
	//cin >> age;
	//cout << "Name: " << arr2 << " , " << arr1 << endl;
	//cout << "Grade: " << (char)(ch + 1) << endl;
	//cout << "Age: " << age << endl;
	
	//const int ArSize = 20;
	//string name;
	//string dessert;
	//cout << "Enter your name:\n";
	//getline(cin, name);
	//cout << "Enter your favorite dessert: \n";
	//getline(cin, dessert);
	//cout << "I have some delicious " << dessert << " for you, " << name << " .\n";

	//char First_name[20];
	//char Second_name[20];
	//cout << "Enter your first name�� ";
	//cin >> First_name;
	//cout << "Enter your last name: ";
	//cin >> Second_name;
	//cout << "Here's the information in a single string: " << Second_name << ", " << First_name << endl;

	//string str1;
	//string str2;
	//cout << "Enter your first name�� ";
	//getline(cin,str1);
	//cout << "Enter your last name: ";
	//getline(cin, str2);
	//cout << "Here's the information in a single string: " << str2 << ", " << str1 << endl;
	
	//struct CandyBar {
	//	char band_name[50];
	//	double candy_weight;
	//	int colorie;
	//};
	//CandyBar snack{
	//	"Mocha Munch",
	//	2.3,
	//	350
	//};
	//cout << snack.band_name << "\n" << snack.candy_weight << "\n" << snack.colorie << endl;
	
	//struct CandyBar {
	//	char band_name[50];
	//	double candy_weight;
	//	int colorie;
	//};
	//CandyBar snack[1];
	//cin.get(snack[0].band_name,50);
	//cin >> snack[0].candy_weight;
	//cin >> snack[0].colorie;

	//struct Pizza{
	//	char name[50];
	//	double diameter;
	//	double weight;
	//};
	//Pizza KFC;
	//cout << "������Pizza������: ";
	//cin.get(KFC.name, 50);
	//cout << "������Pizza��ֱ��: ";
	//cin >> KFC.diameter;
	//cout << "������Pizza������: ";
	//cin >> KFC.weight;

	//struct Pizza{
	//	char name[50];
	//	double diameter;
	//	double weight;
	//};
	//Pizza* p = new Pizza;
	//cout << "������Pizza��ֱ��: ";
	//(cin >> (*p).diameter ).get(); //ȡ��Ա�����ķ�ʽһ
	//cout << "������Pizza������: ";
	//cin.get(p->name, 50);//ȡ��Ա�����ķ�ʽ��
	//cout << "������Pizza������: ";
	//cin >> p->weight;//ע��ṹ���ÿ�����룬��Ҫȥ���հ�
	
	//struct CandyBar {
	//	char band_name[50];
	//	double candy_weight;
	//	int colorie;
	//};
	//char* band_name = new char [50];
	//double* candy_weight = new double;
	//int* colorie = new int;
	//cin.get(band_name, 50);
	//cin >> *candy_weight;
	//cin >> *colorie;

	//1��Լ����0.9114��
	array<double, 3> Run;
	cin >> Run.at(0);
	cin >> Run.at(1);
	cin >> Run.at(2);
	system("pause");
	return 0;
}