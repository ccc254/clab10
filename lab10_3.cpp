#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
        int count = 0;
        float sum = 0;
        float sum_of_square = 0;
        string textline;
        ifstream source("score.txt");
        float Y = 0;
        while (getline(source,textline))
        {
                count++;
                Y = atof(textline.c_str());
                sum += Y;
                sum_of_square += pow(Y,2);       
        }
        float X = sum/count;
        float Z = sqrt((sum_of_square/count)-pow(X,2));

        cout << "Number of data = " << count << "\n";
        cout << setprecision(3);
        cout << "Mean = " << X << "\n";
        cout << "Standard deviation = " << Z;
}