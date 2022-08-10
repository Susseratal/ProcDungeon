#include "customLib.h"

using namespace L;

string Lib::titleCase(string S)
{
    string name;
    int len = S.length();
    char tmpChar[len + 1];
    strcpy(tmpChar, S.c_str());
    for (int i = 0; i < len; i++)
    {
        if(i == 0)
        {
            tmpChar[i] = toupper(tmpChar[i]);
        }
        else
        {
            tmpChar[i] = tolower(tmpChar[i]);
        }
    }
    name = string(tmpChar);
    return name;
}
