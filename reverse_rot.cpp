#include <iostream>
#include <algorithm>
#include <map>
#include <vector>


using namespace std;


int main ()
{
    map <int, char> keys;
    map <char, int> non_rotate;
    string message;
    vector <string>encrypted_messages;
    char c = 65;

    for (size_t i = 1; i <= 26 ; i++)
    {
        keys[i] = c;
        non_rotate[c] = i;
        c++;
    }
    keys[27] = '_';
    keys[28] = '.';
    non_rotate['_'] = 27;
    non_rotate['.'] = 28;
while (true){
    int rotatation;
    getline(cin, message);
    rotatation = stoi(message);
    if (rotatation == 0)
    {
        break;
    }
    string s = to_string(rotatation);
    int m = message.find(s) + s.length() + 1;
    message = message.substr(m, message.length() - 1);
    reverse(message.begin(), message.end());


    int num;
    int array[message.length()];
    char temp[message.length()];
    
    for (size_t i = 0; i < message.length(); i++)
    {
        num = (non_rotate[message[i]] + rotatation) % 28;
        if (num == 0)
        {
            array[i] = 28;
        }else{
            array[i] = num;
        }   
    }
    for (size_t i = 0; i < message.length(); i++)
    {
       temp[i] = keys[array[i]];
    }
    temp[message.length()] = '\0';

    encrypted_messages.push_back(temp);
}

    for(auto var : encrypted_messages)
    {
        cout << var << endl;
    }
    return 0;
}
