#include<iostream>
using namespace std;
class Bank
{  private:
    int Balance,ATMpin;
	public :
    int	accNumber;
	string bName,IFSC;
   	
   	 void input()
		{
		 ATMpin=3456;
		 Balance=67949;
		 accNumber=394298;
		 bName="Paytam";
		 IFSC="paytm0123456";
		}
		 void output()
		 {
		 	cout<<"MY Bank Details...."<<endl;
		 	cout<<"ATMpin :"<<ATMpin<<endl;
		 	cout<<"Balance :"<<Balance<<endl;
		 	cout<<"ACCOUNT Number :"<<accNumber<<endl;
		 	cout<<"Bank name :"<<bName<<endl;
		 	cout<<"IFSC Code:"<<IFSC<<endl;
		 }
};

	
int main()
{
	Bank a;
	a.input ();
	a.output();
	 cout<<"--------------------XX-----XX-----XX------"<<endl;
	 cout<<"My friend trying to open my Account...."<<endl;
	  cout<<"--------------------XX-----XX-----XX------"<<endl;
	        //cout<<"ATMpin :"<<a.ATMpin<<endl;//private
		 	//cout<<"Balance :"<<a.Balance<<endl;//private
		 	cout<<"ACCOUNT Number :"<<a.accNumber<<endl;
		 	cout<<"Bank name :"<<a.bName<<endl;
		 	cout<<"IFSC Code:"<<a.IFSC<<endl;
	
	return 0;
}
