#include<iostream>
using namespace std;
void evenoddtr(int size,int no,int array[]);
int main(){

    int size,no;
    cout << "Enter the size of array: ";
    cin>> size;

    int array[size];

    cout << "Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++){
    cin >> array[i];
    }

    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> no;
    
    evenoddtr(size,no,array);

    cout<<"[ ";

    for(int i=0;i<size;i++){
    cout<< array[i];
    if(i<size-1){
        cout << ", ";
    }
    }
    cout << " ]"<<endl;

    return 0;
}
void evenoddtr(int size,int no,int array[]){
//outer loop for transformations and inner for elements

    for(int i=0;i<no;i++){
        for(int j=0;j<size;j++){
        if(array[j]%2==0){
           array[j] -= 2;
        }
        else{
           array[j] += 2;
           }
        }
    }

}