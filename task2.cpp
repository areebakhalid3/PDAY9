#include<iostream>
using namespace std;
float discount(string movie[],string name,float pr);

int main(){

   float pr=500;
   string name;
   string movie[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};

   cout << "Enter a movie name:";
   cin >> name;
   
   float fp= discount(movie,name,pr);

    if(fp>0){
        cout<<"Final price: $"<<fp<<endl;
    }
    else{
        cout<<"Movie not found!" <<endl;
    }

   return 0;
}
float discount(string movie[],string name,float pr){
    
    for(int i=0;i<5;i++){
    if(movie[i]==name){

        if(i%2!=0){
        cout << "You are given a 5 percent discount"<<endl;
       return pr-(0.05*pr);
         }
        else{
           cout << "You are given a 10 percent discount"<<endl;
       return pr-(0.1*pr);  
        }
    }
 }
    return 0;
}