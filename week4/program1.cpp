#include <iostream>
#include <cmath>
using namespace std;
int main() {

   int num[10] = {10,20,30,40,50, 60,70, 80, 90, 100};
   float sum = 0, mean, deviation;
   int i;


    
    cout<< "Enter the number for index 0: " << endl;
    cin >> num[0];
    cout<< "Enter the number for index 1: " << endl;
    cin >> num[1];
    cout<< "Enter the number for index 2: " << endl;
    cin >> num[2];
    cout<< "Enter the number for index 3: " << endl;
    cin >> num[3];
    cout<< "Enter the number for index 4: " << endl;
    cin >> num[4];
    cout<< "Enter the number for index 5: " << endl;
    cin >> num[5];
    cout<< "Enter the number for index 6: " << endl;
    cin >> num[6];
    cout<< "Enter the number for index 7: " << endl;
    cin >> num[7];
    cout<< "Enter the number for index 8: " << endl;
    cin >> num[8];
    cout<< "Enter the number for index 9: " << endl;
    cin >> num[9];
    

  
   for(i = 0; i < 10; ++i)
      sum += num[i];
      mean = sum/10;
      deviation = sqrt(pow ((num[0]- mean),2)+pow((num[1]- mean),2)+pow((num[2]- mean),2)+pow((num[3]- mean),2)+pow((num[4]- mean),2))+pow((num[5]- mean),2)+pow((num[6]- mean),2)+pow((num[7]- mean),2)+pow((num[8]- mean),2)+pow((num[9]- mean),2)/10;
      cout<< "results, "<<mean;
      cout<< "," << deviation;
 

   return 0;
}
