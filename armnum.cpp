#include<iostream>
using namespace std;
class armstrong
{
	private:
		int num,sum,rem,temp;
	public:
		void putdata();
		void armnum();
		void getdata();
};
void armstrong :: putdata()
{
	cout<<"enter a number:";
	cin>>num;
}
void armstrong :: armnum()
{
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+(rem*rem*rem);
		temp=temp/10;
	}
}
void armstrong :: getdata()
{
	if(temp==sum)
	{
		cout<<"it is a armstrong number.";
	}
	else
	{
		cout<<"it is not a armstrong number.";
	}
}
int main()
{
	armstrong std;
	std.putdata();
	std.armnum();
	std.getdata();
	return 0;
}
