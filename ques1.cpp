#include<iostream>
using namespace std;

//------------------------------------------SWAP TWO NUMBERS -------------------------------------------------------------

void swap(int &num1, int &num2){
	int temp=num1;
	num1=num2;
	num2=temp;
}

--------------------------------------------PARTIOTION (FINDING PIVIOT)------------------------------------------------

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

---------------------------------------------SORTING THE ELEMENT USING QUICKSORT---------------------------------------

void quickSort(int array[10],int low , int sizee){
    if(low<sizee){
       int p=partition(array,low,sizee);
       quickSort(array,low,p-1);
       quickSort(array,p+1,sizee);
   }
}

---------------------------------------------FINDING THE PAIR SUM OF GIVEN ELEMENT---------------------------------------

void findPair(int Array[10],int size,int key){
	 int resultArray[size];
	 signed int k=-1;
	 quickSort(Array,0,size);
   int *point1=&Array[0];
   int *point2=&Array[size-1];
   while(point1<=point2){
	  	    if((*point1 + *point2)<key)
				     point1++;
     	   else if((*point1 + *point2 )>key)
  				   point2--;
 		     else if((*point1 + *point2 )==key){
             resultArray[++k]=*point1;
    			   resultArray[++k]=*point2;
    			   ++point1;
             --point2;
  		      }
    	   }
  
  if(k==-1)
	  	   cout << "NO PAIR  EXIST "<< endl;
	
  else
			for(int i=0;i<k-1;i++)
					cout << resultArray[i] << " ";
}

---------------------------------------------MAIN FUNCTION-------------------------------------------------------------

int main(){
	int size ,ele;
	int Array[10];
	cout << "ENTER THE SIZE OF THE ARRAY "<< endl;
	cin >> size;
	cout << "ENTER THE ELELMENT OF THE ARARY "<< endl;
	for (int i=0;i<size;i++){
		cin >> Array[i];
	}
	cout << "ENTER THE ELEMENT "<< endl;
	cin >> ele;
	findPair(Array,size,ele);
return 0;
}
