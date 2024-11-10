#include<iostream>
using namespace std;
float totalbill(string fruit[],int price[],string fr,int qty);
int main(){
    
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};

    string fr;
    int qty;

    cout << "Enter the name of the fruit: ";
    cin >> fr;
    cout << "Enter the quantity in kgs of the fruit: ";
    cin >> qty;
     
    float bill=totalbill(fruit,price,fr,qty);

    if(bill>0){
    cout << "Fruit: " << fr << endl;
    cout<< "Total bill: "<<bill<<endl;}

    else{
        cout << "The entered fruit is not available.";
    }

    return 0;
}
float totalbill(string fruit[],int price[],string fr,int qty){

    for(int i=0;i<4;i++){
        if(fr==fruit[i]){
        return price[i] *qty;
        }
    }
    return 0;
    
}