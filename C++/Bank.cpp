#include <iostream>
using namespace std;

class BankAccount{
	private:
		double ballance, withdraw;
	public:
		void SetBallance(double B){
			ballance = B;
		}
		void Withdraw(double W){
			withdraw = W;
		}
		
		void Calculate(){
			if (ballance < withdraw){
				cout << "Insufficient Ballance" << endl;
			}
			else{
				ballance -= withdraw;
			}
		}
		
		double DisplayBallance(){
			return ballance;
		}
};

int main(){
	BankAccount card;
	
	card.SetBallance(800);
	double W;
	
	cout << "Your current balance is: " << card.DisplayBallance() << " Euro" << endl;
	cout << "Please type the number you wish to withdraw: ";
	cin >> W;
	card.Withdraw(W);
	card.Calculate();
	cout << endl;
	cout << "Your current balance is: " << card.DisplayBallance() << " Euro";
}