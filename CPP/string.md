<!-- Initialization string: -->

string str = "Hello";


<!-- Initialization with another string: -->

string str1 = "Hello";
string str2 = str1;


<!-- Initialization with a substring: -->

string str = "Hello, World!";
string subStr = str.substr(0, 5);  // "Hello"


<!-- Assigning value: -->

string str;
str = "New Value";


<!--Concatenation :   -->

<!-- Using + operator: -->

string str1 = "Hello";
string str2 = "World";
string result = str1 + " " + str2;  // "Hello world"


<!-- Using append method: -->

string str = "Hello";
str.append(" World");  // "Hello World"


<!-- Accessing Characters -->

<!-- Using [] operator: -->

string str = "Hello";
char ch = str[0];  // 'H'


<!-- Using at method: -->


string str = "Hello";
char ch = str.at(0);  // 'H'


<!-- Length and Size -->

<!-- Using length method: -->

string str = "Hello";
size_t len = str.length();  // 5


<!-- Using size method: -->

string str = "Hello";
size_t size = str.size();  // 5


<!-- Empty Check -->


<!-- Using empty method: -->

string str;
bool isEmpty = str.empty();  // true


<!--Modifying Strings -->


<!--Inserting Substring: -->

string str = "Hello";
str.insert(5, ", World!");  // "Hello, World!"


<!-- Erasing Substring: -->

string str = "Hello, World!";
str.erase(5, 7);  // "Hello!"


<!-- Replacing Substring: -->

string str = "I like programming.";
str.replace(7, 11, "coding");  // "I like coding."


<!-- Finding Substrings -->

<!-- Using rfind method (find from the end): -->

string str = "Hello, World! World!";
size_t pos = str.rfind("World");  // 14


<!-- Substrings -->

<!-- Using substr method: -->

string str = "Hello, World!";
string subStr = str.substr(0, 5);  // "Hello"


<!-- Comparison -->

<!-- Using compare method: -->

string str1 = "abc";
string str2 = "xyz";
if (str1.compare(str2) < 0) {
    // str1 is less than str2
}


<!-- Conversion between Strings and Numbers -->

<!-- String to Integer: -->

string str = "123";
int num = stoi(str);


<!-- Iteration -->

for(int i = 0; i < s1.length(); i++){
    cout<<s1[i]<<endl;
}