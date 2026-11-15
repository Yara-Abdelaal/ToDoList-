#include <iostream>
#include <string>
using namespace std;
int main() {
    string Todolist[2];
    bool isDone = true;
   
    cout<<"Enter 2 tasks for today"<<endl;
    for(int i = 0; i < 2; i++){
        getline(cin, Todolist[i]);   
    }
    for(int i = 0; i < 2; i++){
        if(isDone)
        cout<<Todolist[i]<<" [Done] "<<endl;  
        else 
            cout<<Todolist[i]<<" [ ] "<<endl;  
        isDone = false;
    }
    return 0;
}