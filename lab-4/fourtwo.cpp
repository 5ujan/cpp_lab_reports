/* 2.Write a program that has a class with a dynamically allocated character array as its data member. One object should contain "Engineers are" and another should contain " Creatures of logic". Member function join() should concatenate two strings by passing two objects as arguments. Display the concatenated string through a member function. Use constructors to allocate and initialize the data member. Also, write a destructor to free the allocated memory for the character array. Make your own function for the concatenation of two strings.

*/

#include <iostream>
#include <cstring>

using namespace std;

class Str{
    char *str;
    public:
        Str(const char *text){
                
            str= new char[strlen(const_cast<char*>(text))+1];
            strcpy(str, text);
        }
        ~Str(){
            delete[] str;
            cout<<"memory cleared"<<endl;
        }
        void join(const Str& str1, const Str& str2){
            char *result= new char[strlen(str1.str)+strlen(str2.str)+1];
            strcpy(result, str1.str);
            strcat(result, str2.str);
            cout<<"The concatenated string is :"<<result<<endl;
        }

};

int main(){
    Str str1("Engineers are"), str2(" Creatures of logic ");
    Str result("");
    result.join(str1, str2);

    cout<<"about to clear memory"<<endl;
 
    return 0;
}