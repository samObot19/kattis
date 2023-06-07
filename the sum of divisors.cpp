#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int length;
  int sum = 0;
  cin >> length;

  int store[length];
  int number[length];
  int power[length];
  
  for (int i = 0; i < length; i++)
  {
    cin >> number[i] >> power[i];
  }

  
  for (int j = 0; j < length; j++){
  for (int i = 1; i <= number[j]; i++)
  {
    if(number[j] % i == 0){
        sum += pow(i, power[j]); 
    }
  }
   store[j] = sum;
   sum = 0;
}

for (size_t k = 0; k < length; k++)
{
    cout << "case" << k + 1 << ": " << store[k]<< endl;
}
}
