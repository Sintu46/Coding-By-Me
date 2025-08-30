#include<iostream>
using namespace std;
class Bank{
	private:
		int atmpin,balance;
		public:
			string bname,IFSC;
			int accnumber;
			void input(){
				bname = "SBI";
				accnumber:23465437;
				IFSC =  "sbi012345";
				balance= 45637;
				atmpin=  49899;
			}
			 
			  void output()
			  {
			    cout<<"---XX-----XX----XX---XX"<<endl;
			    cout<<"My Bank Details ...."<<endl;
			    cout<<"---XX-----XX----XX---XX"<<endl;
			    cout<<"Bank Name :"<<bname<<endl;
			    cout<<"Account Number :"<<accnumber<<endl;
				cout<<"IFSC Code :"<<IFSC<<endl;
				cout<<"Bank Balance:"<<balance<<endl;
				cout<<"ATM Pin :"<<atmpin<<endl;	
			  }
			
};
 int main()
 {
 	Bank obj;
 	obj.input();
 	obj.output();
 	 
 	 cout<<"Ravi trying to OpenMy account without My permission"<<endl;
 	 cout<<"Bank Name :"<<obj.bname<<endl;
     cout<<"Account Number :"<<obj.accnumber<<endl;
	 cout<<"IFSC Code :"<<obj.IFSC<<endl;
	// cout<<"Bank Balance:"<<obj.balance<<endl;
	// cout<<"ATM Pin :"<<obj.atmpin<<endl;	
 	 return 0;
 }
