 
#include <iostream>
using namespace std; 
  
int main() 
{ 
    string name[6] = { "Chris FauerBach", "Jane Doe", 
                         "Timmy Jacobs", "Marissa Madden" , "Alyssa Borden" , "Janie Jacobs"}; 
   
    for (int i = 0; i < 1; i++) 
        cout << "Please enter student for index 0: " << name[0] << endl; 
        cout << "Please enter student for index 1: " << name[1] << endl;
        cout << "Please enter student for index 2: " << name[2] << endl; 
        cout << "Please enter student for index 3: " << name[3] << endl;
        cout << "Please enter student for index 4: " << name[4] << endl;
        cout << "Please enter student for index 5: " << name[5] << endl;

        cout << "students[0] = " << name[0] << endl; 
        cout << "students[1] = " << name[1] << endl;
        cout << "students[2] = " << name[2] << endl;
        cout << "students[3] = " << name[3] << endl;
        cout << "students[4] = " << name[4] << endl;
        cout << "students[5] = " << name[5] << endl;

  
    return 0;
} 
