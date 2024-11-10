#include<iostream>
using namespace std;
bool checkarr(string array[4]);
int main(){

    string array[4];

    cout<< "Enter 4 elements of the array: "<<endl;
    for(int i=0;i<4;i++){
        cin >> array[i];
    }

    if(checkarr(array)){
    cout <<"All the elements in the array are identical."<<endl;
    }
    else{
      cout <<"All the elements in the array are not identical."<<endl;
    }   
    return 0;
}
bool checkarr(string array[4]){

    for(int i=1;i<4;i++){ 
       if(array[i]!=array[0]){
        return false;
        }
     }
   return true;
}