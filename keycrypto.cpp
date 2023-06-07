#include<iostream>
#include<map>
#include<queue>

using namespace std;

string decrypt(string message, string key){

    map<char, int> corespond;
    map<int, char> Char;
    string sa = "";
    int len;

    char enkrypt = 65;

    for (int i = 0; i <= 25; i++)
    {
        corespond[enkrypt] = i;
        Char[i] = enkrypt;              //intalize the map
        enkrypt++;
    }
    if (key.length() > message.length())
    {
        len = message.length();
    }else
    {
        len = key.length();
    }
    for (int i = 0; i < len; i++)
    {
        int c;    
        if (corespond[key[i]] > corespond[message[i]])
        {
        c = 26 - abs(corespond[message[i]] - corespond[key[i]]);
        }else
        {
        c = corespond[message[i]] - corespond[key[i]];   
        }
        string s(1, Char[c]);
        sa += s;
    }
    return sa;
}

void Decrypt(string message, string &key){
    if(key.length() >= message.length()){
        key = decrypt(message, key);
        return;
    };
    queue<string> v;
    string str = key;
    key = decrypt(message, key);
    v.push(key);
    key = str + v.front();

    while (true)
    {
        key = decrypt(message, key);
        if(key.length() == message.length()) return;
        v.push(key);
        v.pop();
        key = str + v.front();
    }
}
int main()
{
    string message;
    string key;
    cin >> message >> key;
    Decrypt(message, key);
    cout << key;
    return 0;
}