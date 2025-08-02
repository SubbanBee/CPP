#include<iostream>
using namespace std;
class mobile    // class creation
{
	private:
		int price;       // data member
		void show()
		{
			cout<<"Price:"<<price<<endl;
		}		
		public:
			void setprice(int p)     // member function
			{
				price=p;
			}
			void display()
			{
				show();
			}
};
int main()
{
mobile m;
m.setprice(1500);
m.display();
return 0;
}

