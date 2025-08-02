#include<iostream>
using namespace std;
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