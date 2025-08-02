#include<iostream>
using namespace std;
//static input code
class student
{
	public:
	string name;
	int rno;
	void introduce(){
		cout<<"My name is: "<<name<<endl;
		cout<<"Roll no:"<<rno<<endl;
	}
};
int main()
{
	student subban;
	subban.name="Subban";
	subban.rno=118;
	subban.introduce();
	return 0;

}

//runtime input code
#include <iostream>
using namespace std;

class Btech {
	public:
		string name;

		void Introduce() {
			cout << "I am " << name << endl;
		}
};

int main() {
	Btech student;

	cout << "Enter your name: ";
	cin >> student.name; // Reads input from the user and stores it in 'name'

	student.Introduce(); //  Outputs: "I am [name]"

	return 0;
}
