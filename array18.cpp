//=============================REVERSE THE INDIVIDUAL WORLD OF THE SENTENCE=============================================

#include<iostream>
#include<cstring>
#include<stack>

using namespace std;

//===========================================reverse the word of the sentence==========================================

void reverseWord(string str,int length){
stack <char> st;
   for(int i=0;i<length;i++){
       if(str[i]!=' ')
            st.push(str[i]);    
       else{
            while(!st.empty()){
                char alpha=st.top();
                cout << alpha;
                st.pop();
             }
        cout <<" ";
        }
}

    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
}

//============================================================main function=============================================

int main(){
  string str;
  int length;
  cout << "ENTER THE STRING "<< endl;
  getline(cin,str);
  length=str.length();
  reverseWord(str,length);
}
