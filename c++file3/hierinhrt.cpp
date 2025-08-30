//hierachical inheritance...
 #include<iostream>
 using namespace std;
 class animal
{
  public:
  	 void food(){
  	 	 cout<<"I am animal..";
  	 	 
	   }
 };
  class cat :public animal
  {
  	 public:
  	 	 void voice()
  	 	 {
  	 	 	 cout<<"Cat-Meow.. Meow.."<<endl;
  	 	 	 
			}
  };
   class dog:public animal
   {
   	
   	 public:
   	 	 void voice ()
   	 	 {
   	 	 	cout<<"Dog-Woof..Woof.."<<endl;
			 }
   };
    int main(){
	 cat obj;
	 dog d;
	  obj.food();
	  obj.voice();
	  d.food();
	  d.voice();
	   return 0;
	}
  
  

