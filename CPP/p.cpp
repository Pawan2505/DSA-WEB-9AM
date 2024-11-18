// #include <iostream>

// using namespace std;

// class Data {
// public:
//     Data() {
//         cout << "Data Constructor called" << endl;
//     }

//     ~Data() {
//         cout << "Data Destructor called" << endl;
//     }
// };

// int main() {
//     // Allocating an array of Data objects
//     Data* dataArray = new Data[3];

//     // Each element's constructor is called individually.
//     cout << "Array of Data objects created." << endl;

//     // Deallocating memory
//     delete[] dataArray; // Calls destructor for each element
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int arr[6] = {12,34,56,32,56,32};
//     int find = 322;
//     bool ispresent = false;

//     for(int i = 0; i < 6; i++){
//         if(arr[i] == find){
//             cout<<"Present at index : "<<i<<endl;
//             ispresent = true;
//         }
//     }

//     if(ispresent){
//         cout<<"Element is present...";
//     }else{
//         cout<<"Sorry, Element is not present...";
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int arr[6] = {12,34,56,32,56,32};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<n<<endl;
//     int find = 322;
//     bool ispresent = false;

//     for(int i = 0; i < n; i++){
//         if(arr[i] == find){
//             cout<<"Present at index : "<<i<<endl;
//             ispresent = true;
//         }
//     }

//     if(ispresent){
//         cout<<"Element is present...";
//     }else{
//         cout<<"Sorry, Element is not present...";
//     }
// }