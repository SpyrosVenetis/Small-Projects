#include <iostream>
using namespace std;

class date{
	private:
		int day,month,year;
	public:
		void dateSetter(int dd, int mm, int yyyy){
			day = dd;
			month = mm;
			year = yyyy;
		}
		
		int Day(){
			return day;
		}
		
		int Month(){
			return month;
		}
		
		int Year(){
			return year;
		}
		
		void Validate(){
			if (day > 31 or day < 1){
				cout << "Day cannot be more that 31 and less than 1" << endl;
			}
			if (month > 12 or month < 1){
				cout << "Month cannot be more than 12 and less than 1" << endl;
			}
		}
};

int main(){
	date today;
	
	today.dateSetter(4,6,2025);
	
	cout << "Today's date is: " << today.Day() << "/" << today.Month() << "/" << today.Year() << endl;
	today.Validate();
}