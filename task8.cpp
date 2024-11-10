#include<iostream>
using namespace std;
int timetaken(int size,string array[]);

int main(){

     int size;
    cout << "Enter the number of colors: ";
    cin>> size;

    string array[size];

    cout << "Enter the colors,one per line: "<<endl;
    for(int i=0;i<size;i++){
    cin >> array[i];
    }

    int result=timetaken(size,array);
    cout <<"It will take "<< result<<" seconds to color the whole pattern."<<endl;

    return 0;
}
int timetaken(int size,string array[]){

    int time = size*2;

    for(int i=1;i<size;i++){
        if(array[i]!=array[i-1]){
            time += 1;
        }
    }
    return time;
}
