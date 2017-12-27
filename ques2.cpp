#include<iostream>
using namespace std;

//----------------------------------SWAP TWO NUMBERS-------------------------------------------------------------------

void swap(signed int &num1,signed  int &num2){
	signed int temp=num1;
	num1=num2;
	num2=temp;
}

//----------------------------------FINDING THE PIVIOT ELEMENT---------------------------------------------------------

int partition(signed int array[10],int low,int sizee){
int i=low-1;
signed int pivot=array[sizee];
    for(int j=low;j<sizee;j++){
        if(array[j]<=pivot){
            i++;
            swap(array[j],array[i]);
        }
    }
swap(array[i+1],array[sizee]);
return (i+1);
}

//-----------------------------------------QUICKSORT--------------------------------------------------------------------

void quickSort(signed int array[10],int low , int sizee){
   if(low<sizee){
       int p=partition(array,low,sizee);
       quickSort(array,low,p-1);
       quickSort(array,p+1,sizee);
   }
}

//--------------------------------------------FIND PAIR -------------------------------------------------------------

void findPair(signed int Array[10],int size){
   	signed int num1,num2,tempvar,mintempvar;
     quickSort(Array,0,size);
         
     signed int *point1=&Array[0];
     signed int *point2=&Array[size-1];
     while(point1<point2){
	       if((*point1 - *point2)==0){
           		cout << *point1 << " "<< *point2;
				return ;
			 }

      if((*point1 - *point2 )>0){
         			 tempvar=*point1-*point2;
         			 num1=*point1;
         			 num2=*point2;
			  		 --point2;
				}
			
      else if((*point1 - *point2 ) <0){
			    		mintempvar=*point1-*point2;
					    if(mintempvar<tempvar){
					          num1=*point1;
         		        num2=*point2;
					          ++point1;
					     }
				   }
		  }
		cout << num1 << "  "<< num2;
  return ;
	}

//-----------------------------------------MAIN FUNCTION ---------------------------------------------------------------

int main(){
  int size ;
	signed int Array[10];
	cout << "ENTER THE SIZE OF THE ARRAY "<< endl;
	cin >> size;
	cout << "ENTER THE ELELMENT OF THE ARARY "<< endl;
	for (int i=0;i<size;i++){
		cin >> Array[i];
	}
  findPair(Array,size);
return 0;
}
