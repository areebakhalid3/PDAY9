#include<iostream>
using namespace std;
int common(string s1,string s2);
int main(){

    string s1,s2;

    cout<< "Enter first string: ";
    cin >> s1;
    cout<< "Enter second string: ";
    cin >> s2;

    int result=common(s1,s2);
    cout<<"Strings have "<<result<<" common characters."<<endl;

    return 0;
}
int common(string s1,string s2){

int count=0;
    for(int i=0;s1[i]!='\0';i++){
        for(int j=0;s2[j]!='\0';j++){
         if(s1[i]==s2[j]){
            count++;
            s2[j]=238;
            break;
         }
    }

}
return count;
}