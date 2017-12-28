#include<iostream>
using namespace std;

//-----------------------------------------------DECLARTATION OF CLASS -----------------------------------------------

class Conversion{
	public:
	int size;
	int number;
	Conversion();
	int bitsBinaryArray[10];
	void getNumber();
	void display();
  void check();
	void decimalToBinary();
};

//--------------------------------------------------CLASS CONSTRUCTOR ------------------------------------------------

Conversion :: Conversion(){
  number=0;
  for(int i=0;i<10;i++)
	   bitsBinaryArray[i]=0;
  size=0;
}

//--------------------------------------------------GET NUMBER FUNCTION------------------------------------------------

void Conversion ::getNumber(){
	cout <<"ENTER THE NUMBER DO U WANT TO CONVERT "<< endl;
	cin>>number;
}

//-----------------------------------------------------DECIMAL TO BINARY FUNCTION---------------------------------------

void Conversion ::decimalToBinary(){
	  int element=number;
  	while(element!=0){
		   element=element/2;
		   size++;
   	}
	element=number;
	int num=element/2;
  int i=size-1;
	bitsBinaryArray[i]=element%2;
	while(num!=0){
		   i--;
		   bitsBinaryArray[i]=num%2;
  		  num=num/2;
	  }
}

//---------------------------------------------CHECKING IF A NUMBER IS A POWER OF 2 OR NOT------------------------------

void Conversion::check(){
	int tempArray[size];
	int i=size-1;
	while((i>0)&&(bitsBinaryArray[i]!=1)){
		tempArray[i]=0;
		 --i;
	}
	
	while(i>0){
	  	tempArray[i]=bitsBinaryArray[i];
		 --i;
	 }
	
  for( i=0;i<size;i++)
		tempArray[i]=tempArray[i]&bitsBinaryArray[i];
	int count=0;
 	
  for( i=0;i<size;i++)
		if(tempArray[i]!=0)
	      count++;
	      if(count==0)
	             cout << "\nTHE GIVEN NUMBER IS A POWER OF TWO "<< endl;
	      else
  	  		     cout << "\nTHE GIVEN NUMBER IS NOT   A POWER OF TWO "<< endl;
}

----------------------------------------------DISPLAY FUNCTION DISPALY A NUMBER IN BINARY ------------------------------

void Conversion ::display(){
	cout<<"THE BINARY REPRESENTATION OF THE GIVEN NUMBER IS "<< endl;
	for(int i=0;i< size;i++){
		cout <<bitsBinaryArray[i];
	}
}

---------------------------------------------------------MAIN FUNCTION------------------------------------------------

int main(){
	Conversion object;
	object.getNumber();
	object.decimalToBinary();
	object.display();
	object.check();
	return 0;
}
