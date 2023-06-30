#include<iostream>

using namespace std;

size_t fabunachi(int nth){
    if(nth == 0) return 0;
    if (nth == 1|| nth == -1) return 1;
    int a = 1, b = 0, c;
    for (size_t i = 1; i <= nth; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main(){
    int num;
    cin >> num;
    cout << fabunachi(num - 1) << " " << fabunachi(num);
    return 0;
}