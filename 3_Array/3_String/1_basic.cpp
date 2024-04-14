#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    // create string
    string str;

    cout << "enter string:";
    // input
    getline(cin, str);

    // print
    cout << "entered string :" << str << endl;

    cout << "string length :" << str.length() << endl;
    cout << "Is string empty :" << str.empty() << endl;

    str.push_back('V');
    cout << str << endl;

    str.pop_back();
    cout << str << endl;

    cout << str.substr(0, 3) << endl; // 0,3 represent start from 0th index and give 3 words

    string a = "vivek";
    string b = "mishra";

    if (a.compare(b) == 0)
    {
        cout << "string a and b are same ";
    }
    else
    {
        cout << "string a and b are different ";
    }
    cout << endl;

    string x = "zbc";
    string y = "wxy";
    cout << x.compare(y) << endl; // z>w so ans is 1  if (abc & wxy )a <w ans -1;

    string sentence = "hello vivek how are you ";
    string target = "yours";
    if(sentence.find(target)==std::string::npos){
        cout<< "Not found "<<endl;
    }
    else{
    cout<<"target string started from index :"<<sentence.find(target);
    }


    //replace
    string st = "he is a good boy ";
    string word = "vivek";
    st.replace(0,2,word); //from 0 index remove 2 character  ,
    cout<<st<<endl;
 
    //replace 
    string vivek = "hello how are you";
    vivek.erase(0,5); //strat from 0 index and remove 5 character 
    cout<<vivek<<endl;
    return 0;
}