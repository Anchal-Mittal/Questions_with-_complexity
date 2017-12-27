#include<iostream>
using namespace std;

//------------------------------------------SWAP TWO NUMBERS-------------------------------------------------------------
void swap(int &num1, int &num2){
	int temp=num1;
	num1=num2;
	num2=temp;
}

//-----------------------------------------FINDING PIVOT ELEMENT-------------------------------------------------------

int partition(int array[10],int low,int sizee){
int i=low-1;
int pivot=array[sizee];
    for(int j=low;j<sizee;j++){
        if(array[j]<=pivot){
            i++;
            swap(array[j],array[i]);
        }
    }
swap(array[i+1],array[sizee]);
return (i+1);
}

//-------------------------------------------QUICKSORT-----------------------------------------------------------------

void quickSort(int array[10],int low , int sizee){
    if(low<sizee){
       int p=partition(array,low,sizee);
       quickSort(array,low,p-1);
       quickSort(array,p+1,sizee);
  }
}

//----------------------------------------------FIND SUM MAX PAIR----------------------------------------------------

void findPair(int Array[10],int size){
   quickSort(Array,0,size);
	 cout << "MAXIMUM PAIR SUM WILL BE" <<endl;
	 cout << Array[size]<<"+"<<Array[size-1] << " "<< Array[size-1]+Array[size]  ;
 }
 
//------------------------------------------MAIN EXECUTION----------------------------------------------------------- 
int main(){
  int size ;
	int Array[10];
	cout << "ENTER THE SIZE OF THE ARRAY "<< endl;
	cin >> size;
	cout << "ENTER THE ELELMENT OF THE ARARY "<< endl;
	for (int i=0;i<size;i++){
		cin >> Array[i];
	}
	findPair(Array,size);
return 0;
}
