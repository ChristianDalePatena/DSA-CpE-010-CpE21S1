#include <iostream>
using namespace std;
int main() {

 //our array size or array 
 int size =10;
 int* val = new int[size];

//initialization of the array
for (int i = 0; i < size; i++){
     val[i]= i + 1;
     
}
//renewal of array to add/insert a new element 
 int* num = new int [size + 1];
 for (int i = 0; i < size; i++){
     num[i]=val[i];
 }
 //Function that adds the appended item(s) at the end of the array 
 num[size] = 11;
 
 val=num;
 size++;
 
 //printing the output of the array after the addition of new element
 cout<< "The Results of the Array After Inserting a New Value/Element: "<<endl;
 for (int i = 0; i < size; i++){
     cout<<val[i]<<endl;
 }
   cout << endl;    


        
    return 0;
}