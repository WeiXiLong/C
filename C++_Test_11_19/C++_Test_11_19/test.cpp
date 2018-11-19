#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//3.void Print1() {
//	cout << "Three blind mice" << endl;
//}
//
//void Print2() {
//	cout << "See how they run" << endl;
//}

void time(int hour,int minutes)
{
	cout << "Enter the number of hours : " ;
	cin >> hour;

	cout << "Enter the number of minutes : " ;
	cin >> minutes;
	cout << "Time: " << hour << " : " << minutes << endl;
}


int main()
{
	int hour = 0;
	int minutes = 0;
	time(hour,minutes);
	system("pause");




	//6.天文单位为地球到太阳的平均距离(约为150，000，000公里)
	//double dist_light_year;
	//cout << "Enter the number of light years : ";
	//cin >> dist_light_year;
	//cout << dist_light_year << " light years = " << dist_light_year * 63240 << " astronomical units." << endl;
	//system("pause");

	//5.F = C * 9 / 5 +32;
	//double Cel;
	//cout << "Please enter a Celsuis value ：";
	//cin >> Cel;
	//cout << Cel << " degrees Celsius is " << Cel * 9 / 5 + 32 << " degrees Fahrenheit." << endl;
	//system("pause");

	//4.int year;
	//cout << "Enter your age: ";
	//cin >> year;
	//cout << year * 12 << endl;
	//system("pause");

	//3.Print1();
	//Print1();
	//Print2();
	//Print2();
	//system("pause");

	//2.long distance;
	//cout << "请输入以Long为单位的距离" << endl;
	//cin >> distance;
	//cout << distance * 220 << endl;
	//system("pause");


	//1.cout << "My name is Wei Xi Long" << endl;
	//cout << "My address in XXXX" << endl;
	//system("pause");
	//cin.get();
	//return 0;
}