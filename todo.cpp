#include <iostream>
#include <string>
using namespace std;
int main() {
    string Todolist[2];
   
    cout<<"Enter 2 tasks for today"<<endl;
    for(int i = 0; i < 2; i++){
        getline(cin, Todolist[i]);   
    }
    for(int i = 0; i < 2; i++){
        cout<<Todolist[i]<<" [] "<<endl;  
    }
    return 0;
}