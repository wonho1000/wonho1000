#include <iostream> 
#include<string.h>
#include<math.h>

using namespace std;

class Finding_mean_and_SD {
   public:
   float input_x1, input_x2, input_x3, input_x4, input_x5, input_x6, input_x7, input_x8, input_x9, input_x10;
   int N;
   float mean;
   float standard_deviation;
   int computing_mean(void);
   int computing_SD(void);
};

int Finding_mean_and_SD::computing_mean(void){
   N = 10;
   mean = (input_x1+input_x2+input_x3+input_x4+input_x5+input_x6+input_x7+input_x8+input_x9+input_x10) / N;
return (0);
}

int Finding_mean_and_SD::computing_SD(void){
   standard_deviation = sqrt( ((input_x1-mean)*(input_x1-mean)) + ((input_x2-mean)*(input_x2-mean)) + ((input_x3-mean)*(input_x3-mean))+
                        ((input_x4-mean)*(input_x4-mean)) + ((input_x5-mean)*(input_x5-mean)) +
                        ((input_x6-mean)*(input_x6-mean)) + ((input_x7-mean)*(input_x7-mean)) + 
                        ((input_x8-mean)*(input_x8-mean)) + ((input_x9-mean)*(input_x9-mean)) + 
                        ((input_x10-mean)*(input_x10-mean)) / N);
1
   return (0);

}

int main() {
   Finding_mean_and_SD Object_of_mean_and_SD;

   cout << "input_x1 = " ; cin >> Object_of_mean_and_SD.input_x1;
   cout << "input_x2 = " ; cin >> Object_of_mean_and_SD.input_x2;
   cout << "input_x3 = " ; cin >> Object_of_mean_and_SD.input_x3;
   cout << "input_x4 = " ; cin >> Object_of_mean_and_SD.input_x4;
   cout << "input_x5 = " ; cin >> Object_of_mean_and_SD.input_x5;
   cout << "input_x6 = " ; cin >> Object_of_mean_and_SD.input_x6;
   cout << "input_x7 = " ; cin >> Object_of_mean_and_SD.input_x7;
   cout << "input_x8 = " ; cin >> Object_of_mean_and_SD.input_x8;
   cout << "input_x8 = " ; cin >> Object_of_mean_and_SD.input_x9;
   cout << "input_x10 = " ; cin >> Object_of_mean_and_SD.input_x10;


   Object_of_mean_and_SD.computing_mean();
   cout << "mean : " << Object_of_mean_and_SD.mean << endl;

   Object_of_mean_and_SD.computing_mean();
   cout << "SD : " << Object_of_mean_and_SD.standard_deviation << endl;
   
   cout << "programming is terminated" << endl;
 } 