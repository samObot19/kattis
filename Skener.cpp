#include<iostream>
#include<vector>

using namespace std;

void duplcate(string &arg, int const &scale){
    string s = "";

    for (size_t i = 0; i < arg.length(); i++)
    {
        for (size_t j = 0; j < scale; j++)
        {
            s += arg[i];
        }
    }
    arg = s;
}

int main(){
    int row, column, ZR, ZC;

    cin >> row >> column >> ZR >> ZC;
    string lne;
    vector<string> args_row;
    
    for (size_t i = 0; i < row; i++)
    {
        cin >> lne;
        args_row.push_back(lne);
    }

    for(auto var : args_row)
    {
        duplcate(var, ZC);
        for (size_t i = 0; i < ZR; i++)
        {
          cout << var << endl;    
        }
    }
}
