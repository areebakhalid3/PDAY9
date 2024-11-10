#include<iostream>
using namespace std;

void boom(int size,int arr[]);
bool result=false;

int main(){

    int size;
   
    cout<< "Enter array size: ";
    cin >> size;
    
    int arr[size];

    cout << "Enter "<<size<<" numbers: "<<endl;
    for(int i=0;i<size;i++){
    cin >> arr[i];
    }
    
   boom(size,arr);
   if(result){
    cout<< "Boom!"<<endl;
   }
   else{
     cout<< "There is no 7 in the array!"<<endl;
   }

    return 0;
}
void boom(int size,int arr[]){

     result = false; 
     for(int i=0;i<size;i++){
        int num=arr[i];

        while(num!=0){
            if(num%10==7){
                result=true;
                break;
                }
            num /= 10;
             } 
    if(result){
        break;
     }
       
  }
}