#include<iostream>
using namespace std;
int main() {

	int a = 0;
	int date,month;

	start:
	cout << "\t\t\t --------------------------\n"
	        "\t\t\t|  Zodiac Sign Generator   |\n"
	        "\t\t\t --------------------------\n"
	        "\n\n\t\t\tEnter Your Birth Month No.: ";
	cin >> month;

	cout  << "\n\n\t\t\tEnter Your Birth Date: ";
	cin >> date;

	if (month == 3 && date >= 21 || month == 4 && date <= 20)
    {
		 cout<<"\n\n\n\t\t\tYour Zodiac Sign is Aries! "; cout<<endl;
	}
    else if (month == 4 && date >= 21 || month == 5 && date <= 21)
    {
		cout<<"\n\n\n\t\t\tYour Zodiac sign is Taurus"; cout<<endl;
	}
    else
	if (month == 5 && date >= 22 || month == 6 && date <= 22)
    {
		cout<<"\n\n\n\t\t\tYour Zodiac sign is Gemini"; cout<<endl;
	}
    else if (month == 6 && date >= 23 || month == 7 && date <= 23)
    {
		cout<<"\n\n\n\t\t\tYour Zodiac is Cancer"; cout<<endl;
	}
    else if (month == 7 && date >= 24 || month == 8 && date <= 23)
    {
		 cout<<"\n\n\n\t\t\tYour Zodiac sign is Leo"; cout<<endl;
	}
    else if (month == 8 && date >= 24 || month == 9 && date <= 23)
    {
		 cout<<"\n\n\n\t\t\tYour Zodiac sign is Virgo"; cout<<endl;
	}
    else if (month == 9 && date >= 24 || month == 10 && date <= 23)
    {
		 cout<<"\n\n\n\t\t\tYour Zodiac sign is Libra"; cout<<endl;
	}
    else if (month == 10 && date >= 24 || month == 11 && date <= 22)
    {
		 cout<<"\n\n\n\t\t\tYour Zodiac sign is Scorpio"; cout<<endl;
	}
    else if (month == 11 && date >= 24 || month == 12 && date <= 21)
    {
		 cout<<"\n\n\n\t\t\tYour Zodiac sign is Saguittarius"; cout<<endl;
	}
    else if (month == 12 && date >= 22 || month == 1 && date <= 20)
    {
		 cout<<"\n\n\n\t\t\tYour Zodiac sign is Capricorn"; cout<<endl;
	}
    else if (month == 1 && date >= 21 || month == 2 && date <= 19)
    {
		 cout<<"\n\n\n\t\t\tYour Zodiac sign is Aquarius"; cout<<endl;
	}
    else if (month == 2 && date >= 20 || month == 3 && date <= 20)
    {
		 cout<<"\n\n\n\t\t\tYour Zodiac sign is Pieces"; cout<<endl;
	}
	else {
    	cout << "\n\n\n\t\t\tIncorrect Input!! Try Again! ";

    	system ("pause");
    	system("cls");
    	goto start;
	}

	cout << " \n\n \t\t To Try Again Press 1, or Press 2 to Quit ";
    cin >> a;
    system ("cls");

    if (a==1)
    goto start;
    if (a==2)
    {
    cout << "\n";
	}

	return 0;
}
