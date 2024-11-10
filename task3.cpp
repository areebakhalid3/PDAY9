#include<iostream>
using namespace std;
bool isEven(string input,int length);
    string input;
    int length=0;
    
int main(){
    
    cout << "Enter a string: ";
    cin >> input;
    
     for(int i=0;input[i]!= '\0';i++){
        length++;
    }

    if(isEven(input,length)){
        cout << "The word "<<input<<" has even length."<<endl;}
        else{
         cout << "The word "<<input<<" has odd length."<<endl;
        }

    return 0;
}
bool isEven(string input,int length){

    if(length %2==0){
        return true;
    }
    else{ 
    return false;}
    
}