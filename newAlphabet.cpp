#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> obj;
    char arr[26] = {'a', 'b', 'c','d', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r','s','t', 'u', 'v', 'w', 'x', 'y', 'z'};
    string trans[26] = {"@", "8", "(", "|)", "3", "#", "6", "[-]", "|", "_|", "|<", "1", "[]\\/[]", "[]\\[]" ,"0", "|D", "(,)",
    "|Z", "$", "']['", "|_|", "\\/", "\\/\\/","}{", "/", "2"};

    string message;
    getline(cin, message);

    for (char& L: message)
    {
        L = tolower(L);
    }

   for (size_t i = 0; i < message.length(); i++)
    {
        for (size_t j = 0; j < 32; j++)
        {
            string c(1, message[i]);
            if (message[i] == arr[j])
            {
                obj.push_back(trans[j]);
                break;
            }else if(message[i] >= 30 && message[i] <= 64)
            {
                obj.push_back(c);
                break;
            }else if (message[i] >= 91 && message[i] <= 96)                
            {
                obj.push_back(c);   
                break;
            }else if (message[i] >= 123)
            {
                obj.push_back(c);
                break;
            }
            }
    }

    for(auto var : obj)
    {
        cout << var;
    }
    return 0;
}