// #include<iostream>   // library
// using namespace std;
// int main(){

// cout<<"Hello World "<<endl;  //output  endl=> next line

// cout<<"Hey, How are you?";  //output

// }



// #include<iostream>   // library

// using namespace std;

// int main(){

// cout<<"Hello World "<<endl;  //output  endl=> next line

// cout<<"Hey, How are you?";  //output

// }




// #include<iostream>
// using namespace std;

// int main(){
//     int number;
//     // int 123number;
//     int number123;

//     // int variuable name;
//     int variuable_name;

//     // int @variuable;
//     // int #variuable;
//     int $variuable;
//     int _variuable;

//     int Name;
//     int name;


// }



//Datatype

// #include<iostream>
// using namespace std;

// int main(){
   
//    int number = 10;  // declaration & insilisiation

//    cout<<"Number = "<<number;

// }


// #include<iostream>
// using namespace std;

// int main(){
   
// //    int number;

//    number = 20;

//    cout<<"Number = "<<number;

// }


// #include<iostream>
// using namespace std;

// int main(){
   
//    int number;

//    number = 20;
//     cout<<"Number1 = "<<number<<endl;
//    number = 40;

//    cout<<"Number2 = "<<number;

// }



// #include<iostream>
// using namespace std;

// int main(){
   
//  const int number = 320;

   
// cout<<"Number1 = "<<number<<endl;


// }



// user input -> cin

// #include<iostream>
// using namespace std;

// int main(){
   
// int number;
// cout<<"Please enter Number :";
// cin>>number;

   
// cout<<"Number1 = "<<number<<endl;


// }



// #include<iostream>
// using namespace std;

// int number = 30; // global variable

// int main(){
//     int number = 10;  // global variable

    
//     cout<<number<<endl;

//     {  // block of scope
//             int number =20;   // local variable

//             cout<<"Output 1 = "<<number;
//     }
// }




// #include<iostream>
// using namespace std;

// int number = 30; // global variable

// int main(){
//     int number = 10;  // global variable

    
//     cout<<number<<endl;

//     {  // block of scope
//             int number =20;   // local variable

//             cout<<"Output 1 = "<<number<<endl;
//     }

//     cout<<"Global Variable = "<<::number<<endl;
// }


// we can declared same variable name in diffrent scope. but we can not declared same variable in same scope.



// How to use namespace keyword for declaration same variable name


// #include<iostream>
// using namespace std;

// namespace na{
//     int number = 22;
// }
// namespace nb{
//     int number = 999;
// }

// int number = 30; // global variable

// int main(){
//     int number = 10;  // global variable

    
//     cout<<number<<endl;

//     {  // block of scope
//             int number =20;   // local variable

//             cout<<"Output 1 = "<<number<<endl;
//     }

//     cout<<"Global Variable = "<<::number<<endl;
//     cout<<"Namespace keyword = "<<na::number<<endl;
//     cout<<"Namespace keyword = "<<nb::number<<endl;

// }



// #include<iostream>
// using namespace std;

// namespace na{
//     int number = 22;
// }
// namespace nb{
//     int number = 999;
// }

// int number = 30; // global variable

// int main(){
//     int number = 10;  // global variable

//     // namespace nc{     //namespace definition is not allowed here
//     //     int number =100;
//     // }
    
//     cout<<number<<endl;

//     {  // block of scope
//             int number =20;   // local variable

//             cout<<"Output 1 = "<<number<<endl;
//     }

//     cout<<"Global Variable = "<<::number<<endl;
//     cout<<"Namespace keyword = "<<na::number<<endl;
//     cout<<"Namespace keyword = "<<nb::number<<endl;

// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     a++;  // post increment

//     cout<<"Value = "<<a<<endl;   // output : 11
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     ++a;   // pre increment

//     cout<<"Value = "<<a<<endl;   // output : 11
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//    int result = a++ + ++a;  // 10 + 12 = 22

//     cout<<"Value = "<<a<<endl;   // output : 
//     cout<<"Result = "<<result<<endl;   // output : 


// }




// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     a--;  // post decrement

//     cout<<"Value = "<<a<<endl;   // output : 

// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     --a;  // pre decrement

//     cout<<"Value = "<<a<<endl;   // output : 

// }




// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     int result = a-- - --a; //10 - 8 = 2

//     cout<<"Value = "<<a<<endl;   // output : 8
//     cout<<"Result = "<<result<<endl;   // output : 2

// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a = 20;
//     int b = 4;

// // int result =  a+b;

//     cout<<"Addition = "<<a+b<<endl;

//     cout<<"Subtract = "<<a-b<<endl;

//     cout<<"Multiply = "<<a*b<<endl;

//     cout<<"Divide = "<<a/b<<endl;

//     cout<<"Remainder = "<<a%b<<endl;

// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a = 23;
//     int b = 4;


//     cout<<"Divide = "<<a/b<<endl;


// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a = 23;
//     int b = 4;

//     float result = (float)a/b;   // Type Casting
//     cout<<"Divide = "<<result<<endl;


// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a = 23;
//     int b = 42;

//     cout<<"Divide = "<<a%b<<endl;

// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a = 23;
//     int b = 42;

//     cout<<"Equal to Equal to : "<< (a==b) <<endl;

//     cout<<"Greater Than Equal to :  "<< (a >= b) <<endl;

//     cout<<" Greater Than : " << (a > b) <<endl;

//     cout<< "Less Than : "<< ( a<b) <<endl;

//     cout<<"Less Than Equal to : "<< (a<=b) <<endl;

//     cout<<"Not Equal to : "<< (a != b ) <<endl;

// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a = 23;
//     int b = 42;
//     int c = 12;


//     cout<<"Result = "<<((a>b) && (a>c))<<endl;
  

// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a = 233;
//     int b = 42;
//     int c = 12;


//     cout<<"Result = "<<((a>b) && (a>c))<<endl;
  

// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a = 23;
//     int b = 42;
//     int c = 12;


//     cout<<"Result = "<<((a>b) || (a>c))<<endl;
  

// }


// #include<iostream>
// using namespace std;

// int main(){
//     int a = 231;
//     int b = 42;
//     int c = 12;


//     cout<<"Result = "<<((a>b) || (a>c))<<endl;
  

// }



// #include<iostream>
// using namespace std;

// int main(){
  
//   bool isValue = true;


//     cout<<"Result = "<<(!isValue)<<endl;
  

// }


// #include<iostream>
// using namespace std;

// int main(){
  
//   bool isValue = false;


//     cout<<"Result = "<<(!isValue)<<endl;
  

// }




// Bitwise Operator


// #include<iostream>
// using namespace std;

// int main(){
//     int num1 = 10;
//     int num2 = 5;

//     int result = num1&num2;

//     cout<<"Result = "<<result<<endl;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int num1 = 10;
//     int num2 = 5;

//     int result = num1|num2;

//     cout<<"Result = "<<result<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num1 = 10;
  

//     int result = num1<<2;

//     cout<<"Result = "<<result<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num1 = 10;
  

//     int result = num1>>2;

//     cout<<"Result = "<<result<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int num1 = ~15;
  

//     cout<<"Result = "<<num1<<endl;
// }




// #include<iostream>
// using namespace std;

// int main(){
//     int num1 = 10;
//     int num2 = 5;
  

//     int result = num1^num2;

//     cout<<"Result = "<<result<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int num1 = 10;
   
// //    num1 = num1+5;

//     num1 += 5;

//     cout<<"Result = "<<num1<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num1 = 10;
   
// //    num1 = num1%5;

//     num1 %= 5;

//     cout<<"Result = "<<num1<<endl;
// }


// Ternary Operator

// #include<iostream>
// using namespace std;

// int main(){
//     int num1 = 10;
   
//     int num2 = 15;

//     (num1>num2)? cout<<"Greater A" : cout<<"Greater B";
// }

// #include<iostream>
// using namespace std;

// int main(){
//    int marks;

//    cout<<"Please enter your marks : ";   // as it print 

//    cin>>marks;  // user se input liya hai

//    if(marks >= 90 ){
//     cout<<"Grade A";
//    }else{
//     cout<<"Sorry, You are not eligible";
//    }
// }


// #include<iostream>
// using namespace std;

// int main(){
//    int marks;

//    cout<<"Please enter your marks : ";   // as it print 

//    cin>>marks;  // user se input liya hai

//    if(marks >= 90 ){
//     cout<<"Grade A";
//    }
// }



// #include<iostream>
// using namespace std;

// int main(){
//    int marks;

//    cout<<"Please enter your marks : ";   // as it print 

//    cin>>marks;  // user se input liya hai

//    if((marks>90) && (marks<=100)){
//     cout<<"Grade A";
//    }
//    else if((marks>80) && (marks<=90)){
//     cout<<"Grade B";
//    }
//    else if((marks>70) && (marks<=80)){
//     cout<<"Grade C";
//    }else{
//     cout<<"Sorry, You are not eligible!";
//    }
// }


// #include<iostream>
// using namespace std;

// int main(){

// // ?:
// // (condition)? statement1 : statement2;

// int num1 = 12;
// int num2 = 23;

// (num1>num2)?cout<<"Greater Num1": cout<<"Greater Num2";

// }



// #include<iostream>
// using namespace std;

// int main(){

// int num1 = 1332;
// int num2 = 223;
// int num3 = 30;

// ((num1>num2) && (num1>num3))?cout<<"Greater Num1": ((num2>num1) && (num2>num3))?cout<<"Greater Num2":cout<<"Greater Num3";

// }


// #include<iostream>
// using namespace std;

// int main(){


// //?:
// int num1 = 1332;
// int num2 = 223;
// int num3 = 30;

// ((num1>num2))? (num1>num3)?cout<<"Greater Num1": (num2>num1)? (num2>num3)? cout<<"Greater Num2": cout<<"Greater Num3";

// }



// Switch Case


// #include<iostream>
// using namespace std;

// int main(){
//    int num1;
//    cout<<"Please enter first Number : ";
//    cin>>num1;
//    char op;

//    cout<<"Please enter operator : ";
//    cin>>op;
//    int num2;
//    cout<<"Please enter Second Number : ";
//    cin>>num2;

   

//    switch(op){
//       case '+':
//                cout<<"Sum : "<<num1+num2;
//                break;
//       case '-':
//                cout<<"Subtract : "<<num1-num2;
//                   break;
//       case '*':
//                cout<<"Multiple : "<<num1*num2;
//                   break;
//       case '/':
//                cout<<"Divide : "<<num1/num2;
//                   break;
//       case '%':
//                cout<<"Remainder : "<<num1%num2;
//                   break;

//       default: 
//       cout<<"Please enter correct operator"<<endl;
//    }


// }


// #include<iostream>
// using namespace std;

// int main(){

//    for(int num = 1; num <=10; num++){
//       cout<<"Number : "<<num<<endl;
//    }
// }


// #include<iostream>
// using namespace std;

// int main(){

//    int num = 1;

//    for(; num <=10; num++){
//       cout<<"Number : "<<num<<endl;
//    }
// }


// #include<iostream>
// using namespace std;

// int main(){

//    int num = 1;

//    for(; num <=10; ){
//       cout<<"Number : "<<num<<endl;
//       num++;
//    }
// }


// #include<iostream>
// using namespace std;

// int main(){

//    int num;

//    for(num = 1; num <=10; ){
//       cout<<"Number : "<<num<<endl;
//       num++;
//    }
// }


// #include<iostream>
// using namespace std;

// int main(){
//    int num = 10;
// int newNum;
// cout<<"Please enter newNum : ";
// cin>>newNum;

//    while(newNum == num){
//      cout<<"Number : "<<num<<endl;
//    break;  
//    }
// }


// #include<iostream>
// using namespace std;

// int main(){
//    int num = 11;

//    do{
//      cout<<"Number : "<<num<<endl;
//      num++;
//    }while(num<=10);
// }


// #include<iostream>
// using namespace std;

// int main(){

//     //Outer loop

//     for(int row = 1; row<=4; row++){

//         //Inner Loop

//         for(int col =1; col<=4; col++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;

//     }
// }


// #include<iostream>
// using namespace std;

// int main(){

//     //Outer loop

//     for(int row = 0; row<4; row++){

//         //Space 

//         for(int space = 0; space<row; space++){
//             cout<<" ";
//         }

//         // Star 

//         for(int col =1; col<=4; col++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;

//     }
// }


// #include<iostream>
// using namespace std;

// int main(){

//     //Outer loop

//     for(int row = 1; row<=4; row++){

//         //Space 

//         for(int space = 4; space>row; space--){
//             cout<<" ";
//         }

//         // Star 

//         for(int col =1; col<=4; col++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;

//     }
// }


// #include<iostream>
// using namespace std;

// int main(){

//     //Outer loop

//     for(int row = 1; row<=4; row++){

//         // Star 

//         for(int star =1; star<=row; star++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;

//     }
// }



// #include<iostream>
// using namespace std;

// int main(){

//     //Outer loop

//     for(int row = 1; row<=4; row++){

//         // Star 

//         for(int star =1; star<=row; star++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;

//     }
// }




// #include<iostream>
// using namespace std;

// int main(){

//     //Outer loop

//     for(int row = 1; row<=4; row++){


//         // space

//         for(int space = 4; space>row; space--){

//             cout<<" ";

//         }


//         // Star 
  

//         for(int star = 1; star<=(2*row-1); star++){

//             cout<<"*";

//         }
        
//         cout<<endl;

//     }
// }




// #include<iostream>
// using namespace std;

// int main(){


//     //Outer loop

//     for(int row = 1; row<=4; row++){

//         // inner loop

//         for(int col = 1; col<=4; col++){
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){


//     //Outer loop

//     for(int row = 1; row<=4; row++){
//             if(row == 1){
//                 cout<<"3 3 3"<<endl;
//             }
//              if(row == 2){
//                 cout<<"3 1 3"<<endl;
//             }

//               if(row == 3){
//                 cout<<"3 2 3"<<endl;
//             }
//               if(row == 4){
//                 cout<<"3 3 3"<<endl;
//             }
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){


//     //Outer loop

//     for(int row = 1; row<=4; row++){
         
//          if(row == 1 || row == 4){
//             for(int col = 1; col<=3; col++){
//                 cout<<"3 ";
//             }
//             cout<<endl;
//          }

//          if(row == 2){
//             cout<<"3 1 3"<<endl;
//          }
//          if(row == 3){
//             cout<<"3 2 3"<<endl;
//          }
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){


//     //Outer loop

//     for(int row = 1; row<=4; row++){
         
//          if(row == 1 || row == 4){
//             for(int col = 1; col<=3; col++){
//                 cout<<"3 ";
//             }
//             cout<<endl;
//          }

//          if(row == 2){
//             cout<<"3 1 3"<<endl;
//          }
//          if(row == 3){
//             cout<<"3 2 3"<<endl;
//          }
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){


//     //Outer loop

//     int count = 1;

//     for(int row = 1; row<=4; row++){

//         //Inner Loop
         
//          for(int col = 1; col<=row;  col++){
//             cout<<count<<" ";
//             count++;
//          }
//         cout<<endl;
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){


//     //Outer loop

//     int count = 10;

//     for(int row = 4; row>=1; row--){

//         //Inner Loop
         
//          for(int col = 1; col<=row;  col++){
//             cout<<count<<" ";
//             count--;
//          }
//         cout<<endl;
//     }
// }



// Array  


// #include<iostream>
// using namespace std;

// int main(){

//     int array[10];

//     cout<<"Array : "<<endl;

//     for(int i = 0; i<10; i++){
//         cout<<"Please enter value at "<<i<<" index : ";
//         cin>>array[i];
//     }


//     for(int i = 0; i <10; i++){
//         cout<<"Array value at "<<i<<" Index : "<<array[i]<<endl;
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){

//     int array[10];
//     int findout = 99;
//     bool ispresent = false;

//     cout<<"Array : "<<endl;

//     for(int i = 0; i<10; i++){
//         cout<<"Please enter value at "<<i<<" index : ";
//         cin>>array[i];
//     }

//     cout<<"Original Array : "<<endl;

//     for(int i = 0; i <10; i++){
//         cout<<"Array value at "<<i<<" Index : "<<array[i]<<endl;
//     }

//     for(int i = 0; i <10; i++){
        
//         if(array[i] == findout){
//             cout<<"Array element present at index : "<<i<<endl;
//             ispresent = true;
//         }
//     }

//     if(!ispresent){
//         cout<<"Sorry, Array element not present in Given array !";
//     }

// }






// #include<iostream>
// using namespace std;

// int main(){

//     int arr[5];

//     cout<<"Please Enter Element in Array : "<<endl;

//     for(int i = 0; i<5; i++){
//         cout<<"Please enter value at "<<i<<" index : ";
//         cin>>arr[i];
//     }

//     cout<<"Output : "<<endl;

//         for(int i = 0; i<5; i++){
//         // cout<<"Output at "<<i<<" index : "<<arr[i]<<endl;

//         cout<<arr[i]<<" ";
       
//         }
// }



// #include<iostream>

// using namespace std;

// int main(){

//     int arr[] = {2,45,67,89,98,34,45,68,96,85};

//     int n = sizeof(arr)/sizeof(arr[0]);

//     cout<<n<<endl;

//    for(int i = 0; i < n; i++){
//         cout<<arr[i]<<" ";
//    }
// }


// #include<iostream>

// using namespace std;

// int main(){

//   cout<<sizeof(int)<<endl;
//   cout<<sizeof(double)<<endl;

//   int num = 20;

//   cout<<sizeof(num);
// }


// #include<iostream>

// using namespace std;

// int main(){

//  int row = 3;
//  int col = 4;

//  int arr[row][col];

//  arr[0][0] = 11;
//  arr[0][1] = 22;
//  arr[0][2] = 33;
//  arr[0][3] = 44;
//  arr[1][0] = 55;
//  arr[1][1] = 66;
//  arr[1][2]  = 543;
//  arr[1][3] = 12;
//  arr[2][0] = 23;
//  arr[2][1] = 65;
//  arr[2][2] = 98;
//  arr[2][3] = 100;

 

//  for( int i = 0; i < row; i++){
//     for(int j = 0; j < col; j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//  }
// }




// #include<iostream>

// using namespace std;

// int main(){

//  int row = 3;
//  int col = 4;

//  int arr[row][col] =    {{12,34,56,78},
//                         {90,22,44,55},
//                         {67,88,99,23}};

//  for( int i = 0; i < row; i++){
//     for(int j = 0; j < col; j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//  }
// }





// #include<iostream>

// using namespace std;

// int main(){

//  int row = 3;
//  int col = 4;

//  int arr[row][col];

//  cout<<"Please enter Element in array : "<<endl;

//   for( int i = 0; i < row; i++){
//     for(int j = 0; j < col; j++){
//         cout<<"Please enter value at row "<<i<<" index and Col "<<j<<" index : ";
//         cin>>arr[i][j];
//     }
//  }

//  cout<<"Output : "<<endl;

//  for( int i = 0; i < row; i++){
//     for(int j = 0; j < col; j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//  }
 
// }



// 1. Write program to insert element at ith index without delete element present at that index.
// 2. 


// #include<iostream>
// using namespace std;

// int main(){

// int n = 6;
// int arr[n] = {12,34,56,78,8};

// int value = 100;

// int present = 2;

// for(int i = n; i>= present; i--){
//     arr[i] = arr[i-1];

//     if(i == present){
//         arr[present] = value;
//     }
// }

// for(int i = 0; i < n; i++){
//     cout<<arr[i]<<" ";
// }


// }


// Take Nothing, Return Nothing

// #include<iostream>
// using namespace std;

// void addition(){
// int x = 12;
// int y = 15;
// int value = x+y;

// cout<<"Result : "<<value<<endl;

// }

// int main(){

// addition();

// }


// Take Nothing, Return Something

// #include<iostream>
// using namespace std;

// int addition(){
//     int x = 12;
//     int y = 15;
//     int value = x+y;

//     return value;

// }

// int main(){

// // addition();

// cout<<"Result : "<<addition();

// }





// #include<iostream>

// using namespace std;

// int addition(){

//     int x = 12;
//     int y = 15;
//     int value = x+y;

//     return value;

// }

// int main(){

// int result = addition();

// cout<<"Result : "<<result;

// }





// Take Something, Return Nothing

// #include<iostream>
// using namespace std;

// int addition(int x, int y){   // parameter

//     int result = x+y;

//     cout<<"Resulte : "<<result<<endl;

// }

// int main(){

//     addition(30,50);   // argument

// }



// Take Something, Return something

// #include<iostream>
// using namespace std;

// int addition(int x, int y){   // parameter

//     int result = x+y;

//   return result;
// // cout<<result;

// }

// int main(){

//  int value = addition(30,50);   // argument

// cout<<"Sum of both number : "<<value<<endl;

// }



// #include<iostream>
// using namespace std;

// int addition(int x, int y);  // function declaration

// int main(){

//  int value = addition(30,50);   // argument

// cout<<"Sum of both number : "<<value<<endl;

// }


// int addition(int x, int y){   // function definition

//     int result = x+y;

//   return result;
// // cout<<result;

// }



//Nested Functions


// #include<iostream>
// using namespace std;

// //Outer Function

// int operation(){

//        int x = 10;
//         int y = 20;

//     // Inner function

//     auto addition = [=](){
     

//         int result = x+y;

//         cout<<"Result : "<<result<<endl;
//     };

//     addition();
// }

// int main(){

// operation();
// return 0;

// }


// #include<iostream>
// using namespace std;

// int main(){
//     int  a = 10;

//     int *ptr = &a;


//     cout<<" a = "<<a<<endl;
//     cout<<" *ptr = "<<*ptr<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int  a = 10;

//     int *ptr = &a;

// // Both value will be same

//     cout<<" a = "<<a<<endl;
//     cout<<" *ptr = "<<*ptr<<endl;

// // Both variable address will be same 

// cout<<" Address of a : "<<&a<<endl;
// cout<<" Address of ptr : "<<ptr<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int  a = 10;

//     int *ptr = &a;

// // Both value will be same

//     cout<<" a = "<<a<<endl;
//     cout<<" *ptr = "<<*ptr<<endl;

// // Both variable address will be same 

// cout<<" Address of a : "<<&a<<endl;
// cout<<" Address of ptr : "<<ptr<<endl;


// *ptr = 100;

// cout<<"Updated Value : "<<endl;

// // Both value will be same

//     cout<<" a = "<<a<<endl;
//     cout<<" *ptr = "<<*ptr<<endl;

// // Both variable address will be same 

// cout<<" Address of a : "<<&a<<endl;
// cout<<" Address of ptr : "<<ptr<<endl;
// }



// #include<iostream>
// using namespace std;

// int display(int value){

//     value *= 5;

//     cout<<value<<endl;

// }

// int main(){
//     int num = 10;

//     display(num);

// }


// #include<iostream>
// using namespace std;

// int display(int &value){

//     value *= 5;
    
//     cout<<&value<<endl;
//     cout<<value<<endl;

// }

// int main(){
//     int num = 10;

//     display(num);
//     cout<<&num<<endl;
//     cout<<num<<endl;

// }



// #include<iostream>
// using namespace std;

// int display(int *value){

//     *value *= 5;
    
  
//     cout<<*value<<endl;

// }

// int main(){
//     int num = 10;

//     display(&num);
 
// }


// #include<iostream>
// using namespace std;

// int display(int brr[], int s){

//   for(int i = 0; i < s; i++){
//     cout<<brr[i]<<" ";
//   }

// }

// int main(){
// int n = 6;
// int arr[n] = {12,43,56,76,87,3};

// display(arr, n);
 
// }



// #include<iostream>
// using namespace std;

// class Employee{

// }

// int main(){

//   Employee emp;

// }



// #include<iostream>
// using namespace std;

// class Employee{
// public :

//   void displayDetails(){
//      cout<<"Hello Class";
//   }


// };

// int main(){

//   // Employee emp;
//   // emp.displayDetails();  // Ok

//   displayDetails();   // Not Ok

// }



// #include<iostream>
// using namespace std;

// class Employee{
// public :

//   string name;
//   int age;

// public :

//   void displayDetails(){
//      cout<<"Name : "<<name<<endl;
//      cout<<"Age : "<<age<<endl;
//   }


// };

// int main(){


//   Employee emp;  // create object -> memory allocated to data member
  
//   emp.name = "Pawan";
//   emp.age = 24;

//   emp.displayDetails();


// }


// #include<iostream>
// using namespace std;

// class Employee{
// private :

//   string name;
//   int age;



//   void displayDetails(){
//      cout<<"Name : "<<name<<endl;
//      cout<<"Age : "<<age<<endl;
//   }


// };

// int main(){


//   Employee emp;  // create object -> memory allocated to data member
  
//   emp.name = "Pawan";
//   emp.age = 24;

//   emp.displayDetails();


// }



// #include<iostream>
// using namespace std;

// class Employee{
// private :

//   string name;
//   int age;

//   public :

// Employee(){
//   cout<<"Constructor called...";
// }

//   void displayDetails(){
//      cout<<"Name : "<<name<<endl;
//      cout<<"Age : "<<age<<endl;
//   }


// };

// int main(){


//   Employee emp;  // create object -> memory allocated to data member

// }



// #include<iostream>
// using namespace std;

// class Employee{
// private :

//   string name;
//   int age;
//   int salary;

//   public :

// Employee(){

//   this->name = "Sejal";
//   this->age = 16;
//   this->salary = 2000000;
 
// }

// Employee(string name, int age){

//   this->name = name;
//   this->age = age;
 
// }

// Employee(string name, int age, int salary){

//   this->name = name;
//   this->age = age;
//   this->salary = salary;
 
// }

//   void displayDetails(){
//      cout<<"Name : "<<name<<endl;
//      cout<<"Age : "<<age<<endl;
//      cout<<"Salary : "<<salary<<endl;
//   }


// };

// int main(){

//   Employee em;
//   em.displayDetails();
//   Employee emp("Pawan",24);  // create object -> memory allocated to data member
//   // create object -> memory allocated to data member


//   emp.displayDetails();
  

// }



// #include<iostream>
// using namespace std;

// class Student{

//   // Data Member / Properties
//   public :

//     string name;
//     int rollno;
//     int marks;



//     Student(){
//      name = "";
//      rollno = 0;
//      marks = 0;
//     }

//     Student(string nam, int roll, int mark){
//       name = nam;
//       rollno = roll;
//       marks = mark;
//     }

//     void display(){
//     cout<<"Name : "<<name<<endl;
//     cout<<"Roll No : "<<rollno<<endl;
//     cout<<"Marks : "<<marks<<endl;
//     }

// };

// int main(){

//   Student s1;
//   Student s2("Pawan",123,12345);

//   s1.display();
//   s2.display();

// }



// #include<iostream>
// using namespace std;

// class Student{

//   // Data Member / Properties
//   public :

//     string name;
//     int rollno;
//     int marks;



//     Student(){
//      name = "";
//      rollno = 0;
//      marks = 0;
//     }

//     Student(string name, int rollno, int marks){
//       this->name = name;
//       this->rollno = rollno;
//       this->marks = marks;
//     }

//     void display(){
//     cout<<"Name : "<<name<<endl;
//     cout<<"Roll No : "<<rollno<<endl;
//     cout<<"Marks : "<<marks<<endl;
//     }

// };

// int main(){

//   Student s1;
//   Student s2("Pawan",123,12345);

//   s1.display();
//   s2.display();

// cout<<"Class Size : "<<sizeof(Student)<<endl;
// cout<<"String Size : "<<sizeof(string)<<endl;


// }



// #include<iostream>
// using namespace std;

// class Student{

//   // Data Member / Properties
//   private :

//     string name;
//     int rollno;
//     int marks;


//   public :

//   void setValue(string name, int rollno, int marks ){
//     this->name = name;
//     this->rollno = rollno;
//     this->marks = marks;
//   }

//   void getdisplay(){
//     cout<<"Name : "<<name<<endl;
//     cout<<"Roll No : "<<rollno<<endl;
//     cout<<"Marks : "<<marks<<endl;
//     }

// };

// int main(){

//   Student s1;
//   s1.setValue("Pawan",123,1234);

//   s1.getdisplay();

// }




// #include<iostream>
// using namespace std;

// class Student{

//   // Data Member / Properties
//   private :

//     string name;
//     int rollno;
//     int marks;


//   public :

//   void setValue(string name, int rollno, int marks ){
//     this->name = name;
//     this->rollno = rollno;
//     this->marks = marks;
//   }

//   void getdisplay(){
//     cout<<"Name : "<<name<<endl;
//     cout<<"Roll No : "<<rollno<<endl;
//     cout<<"Marks : "<<marks<<endl;
//     }

//   int getMarks(){
//     return marks;
//   }


// };

// int main(){

//   Student s1;
//   s1.setValue("Pawan",123,1234);

//   s1.getdisplay();

// cout<<"Marks : "<<s1.getMarks();

// }




// #include<iostream>
// using namespace std;

// class Student{

// public :

//  Student(){
//   cout<<"Constructor called..."<<endl;
//  }

// ~Student(){

// cout<<"Destructor called.."<<endl;

// }

// };

// int main(){
//   Student s1;
// }




// #include<iostream>
// using namespace std;

// class Student{
//   public :
//   static int age;

//   static int display(){
//     cout<<"Age : "<<age<<endl;
//   }

// };

// int Student::age = 24;

// int main(){

// Student::display();

// }




// #include<iostream>
// using namespace std;

// class Student{
//   // public :
//   // static int age;
//   // static int marks;
//   // static int display(){
//   //   cout<<"Age : "<<age<<endl;
//   // }

// };

// // int Student::age = 24;
// // int Student::marks = 123;

// int main(){

// // Student::display();

// cout<<"Size of class : "<<sizeof(Student)<<endl;

// }




// Array of Objects



// #include<iostream>
// using namespace std;

// class Student{

//   private :

//     string name;
//     int rollno;
//     int marks;


//   public :

//   void setValue(string name, int rollno, int marks ){
//     this->name = name;
//     this->rollno = rollno;
//     this->marks = marks;
//   }

//   void getdisplay(){
//     cout<<"Name : "<<name<<endl;
//     cout<<"Roll No : "<<rollno<<endl;
//     cout<<"Marks : "<<marks<<endl;
//     }

// };

// int main(){

//   Student s1[3];
 
//  s1[0].setValue("Pawan",12,100);
//  s1[0].getdisplay();
//  s1[1].setValue("Vishwa",122,100);
//  s1[1].getdisplay();
//  s1[2].setValue("Priyanshi",125,100);
//  s1[2].getdisplay();

// }



// #include<iostream>
// using namespace std;

// class Student{

//   public :

//     string name;
//     int rollno;
//     int marks;


//   public :

//   void getdisplay(){
//     cout<<"Name : "<<name<<endl;
//     cout<<"Roll No : "<<rollno<<endl;
//     cout<<"Marks : "<<marks<<endl;
//     }

// };

// int main(){

//   Student *s1 = new Student();  // object created

//     // s1.name = "Pawan"; // Not ok
//     // s1.rollno = 12; // Not ok
//     // s1.marks = 99; // Not ok

//     // s1.getdisplay(); // Not ok


//     s1->name = "Pawan"; // ok
//     s1->rollno = 12; //  ok
//     s1->marks = 99; //  ok

//     s1->getdisplay(); //  ok


// }

//  Inheritance 

// #include<iostream>
// using namespace std;

// class Base{
//     public:

//     void display(){
//         cout<<"Parent Behaviour...";
//     }
// };

// class Chlid : public Base{
    
// };


// int main(){
//         Chlid ch;

//         ch.display();
// }




// #include<iostream>
// using namespace std;

// class Base{
//     public:

//     void display(){
//         cout<<"Parent Behaviour...";
//     }
// };

// class Chlid : public Base{
//     public:
//     void display(){
//         cout<<"Child Behaviour...";
//     }
// };


// int main(){
//         Chlid ch;

//         ch.display();
// }


// inheritance ambiguity

// #include<iostream>
// using namespace std;

// // Base class A

// class A {
// 	public:

// 	void behaviour() {
// 		cout << " I am in class A" << endl;
// 	}
// };

// // Base class B

// class B {
// 	public:

// 	void behaviour() {
// 		cout << " I am in class B" << endl;
// 	}
// };

// // Derived class C

// class C: public A, public B {


// };

// // Driver Code

// int main() {

// 	// Created an object of class C

// 	C c1;

// 	// Calling function func()

// 	c1.behaviour();

// 	return 0;
// }



// Reference Variable

// #include<iostream>
// using namespace std;

// int main(){
// 	int a = 15;

// 	int &ref = a;

// 	cout<<"Value of a : "<<a<<endl;
// 	cout<<"Value of ref : "<<ref<<endl;


// 	cout<<"Address of a : "<<&a<<endl;
// 	cout<<"Address of ref : "<<&ref<<endl;
// }


// #include<iostream>
// using namespace std;

// class Student{
// 	public :
// 	int age;
// 	int marks;

// 	public :

// 	//Constructor

// 	Student(int age, int marks){
// 		this->age = age;
// 		this->marks= marks;
// 	}

// 	//Copy Constructor

// 	Student(Student &other){
// 		this->age = other.age;
// 		this->marks= other.marks;
// 	}

// 	int display(){
// 		cout<<"Age : "<<age<<endl;
// 		cout<<"Marks : "<<marks<<endl;
// 	}


// };

// int main(){

// 	Student s1(24,99);   // constructor
// 	Student s2 = s1;    // Call copy constructor  => shallow copy

// 	s2.display();
	
// }


// #include<iostream>
// using namespace std;

// class Student{
// 	public :
// 	int *age;
// 	int marks;

// 	public :

// 	//Constructor

// 	Student(int age1,int marks){
// 		age = new int;   //Allocated memory
// 		*age = age1;     // inisilization
// 		this->marks = marks;
	
// 	}



// 	int display(){
// 		cout<<"Age : "<<*age<<endl;
// 		cout<<"Marks : "<<marks<<endl;
		
// 	}


// };

// int main(){

// 	Student s1(24,100);   // constructor
// 	s1.display();
// }



//  Single Inheritance

// #include<iostream>
// using namespace std;

// class Food{
// 	public :

// 	string name;

// 	public :

// 	string setfood(string op){
// 		name = op;
// 	}

// 	string energy(){
// 		cout<<"Food give energy..."<<endl;

// 		cout<<name<<endl;
// 	}
// };

// class Beans : public Food{
// 	public : 

// 	void protiens(){
// 		cout<<"Beans give protiens...";
// 	}
// };

// int main(){

// 	Food f1;

// 	f1.setfood("Orange");

// 	Beans b1;

// 	b1.energy();

// }



// #include<iostream>
// #include<string>
// using namespace std;

// class Food{

// 	public :

// 	string name;

// 	public :

// 	void setfood(string op){
// 		this->name = name;
// 	}

// 	void energy(){
// 		cout<<"Food give energy..."<<endl;

// 		cout<<this->name<<endl;
// 	}
// };

// class Beans : public Food{
// 	public :

// 	public :
// 	void protien(){
// 		cout<<"Name : "<<this->name<<endl;
// 	}
// };


// int main(){

// 	Food f1;
// 		f1.setfood("Orange");

// 		f1.energy();


// 	Beans b1;

// 	b1.protien();

// 	b1.energy();

// }


// #include<iostream>
// using namespace std;

// class Student{
// 	public :

// 	int age;
// 	int marks;

// public :

// 	Student(int age, int marks){
// 	this->age = age;
// 	this->marks = marks;
// 	}

// };

// class Vishva: public Student{
	
// 	public :
// 	Vishva(int age, int marks) : Student(age,marks) {

// 	}

// 	void print(){
// 		cout<<"Age : "<<age<<endl;
// 		cout<<"Marks : "<<marks<<endl;
// 	}
// };

// int main(){
// 	// Student s1(24);

// 	Vishva v1(24,100);

// 	v1.print();
// }





// #include<iostream>
// using namespace std;

// class Student{
// 	public :

// 	int age;
// 	int marks;

// public :

// 	Student(int age, int marks){
// 	this->age = age;
// 	this->marks = marks;
// 	}

// };

// class Vishva: public Student{
	
// 	public :
// 	Vishva(int age, int marks) : Student(age,marks) {

// 	}

// 	void print(){
// 		cout<<"Age : "<<age<<endl;
// 		cout<<"Marks : "<<marks<<endl;
// 	}
// };

// int main(){
// 	// Student s1(24);

// 	Vishva v1(24,100);

// 	v1.print();
// }






// #include<iostream>
// using namespace std;

// class Student{


// public :

// 	void students(){
// 		cout<<"Student Class..."<<endl;
// 	}
// };

// class Vishva: public Student{
	
// public:

// 	void print(){
// 		cout<<"Child class..."<<endl;
// 	}
// };

// int main(){
// 	// Student s1(24);

// 	Vishva v1;

// 	v1.print();
// 	v1.students();
// }


// Multilevel Inheritance



// #include<iostream>
// using namespace std;

// class Student{


// public :

// 	void students(){
// 		cout<<"Student Class..."<<endl;
// 	}
// };

// class Vishva: public Student{
	
// public:

// 	void print(){
// 		cout<<"Child class..."<<endl;
// 	}
// };


// class Sejal: public Vishva{
// 	public:
	
// 	void sejals(){
// 		cout<<"Sejal Class.."<<endl;
// 	}
// };

// int main(){
// 	// Student s1(24);

// 	// Vishva v1;

// 	// v1.print();
// 	// v1.students();


// 	Sejal sj;
// 	sj.sejals();
// 	sj.print();
// 	sj.students();
// }


//   Multiple Inheritance


// #include<iostream>
// using namespace std;

// class Student{


// public :

// 	void students(){
// 		cout<<"Student Class..."<<endl;
// 	}
// };

// class Vishva{
	
// public:

// 	void print(){
// 		cout<<"Child class..."<<endl;
// 	}
// };


// class Sejal: public Vishva , public Student{
// 	public:
	
// 	void sejals(){
// 		cout<<"Sejal Class.."<<endl;
// 	}
// };

// int main(){
// 	// Student s1(24);

// 	// Vishva v1;

// 	// v1.print();
// 	// v1.students();


// 	Sejal sj;
// 	sj.sejals();
// 	sj.print();
// 	sj.students();
// }



// Hierarchical Inheritance


// #include<iostream>
// using namespace std;

// class Student{


// public :

// 	void students(){
// 		cout<<"Student Class..."<<endl;
// 	}
// };

// class Vishva : public Student{
	
// public:

// 	void print(){
// 		cout<<"Child class..."<<endl;
// 	}
// };


// class Sejal: public Student{
// 	public:
	
// 	void sejals(){
// 		cout<<"Sejal Class.."<<endl;
// 	}
// };

// int main(){

// 	Vishva v1;

// 	v1.students();


// 	Sejal s1;

// 	s1.students();

// }




// inheritance ambiguity

// #include<iostream>
// using namespace std;

// // Base class A

// class A {
// 	public:

// 	void behaviour() {
// 		cout << " I am in class A" << endl;
// 	}
// };

// // Base class B

// class B {
// 	public:

// 	void behaviour() {
// 		cout << " I am in class B" << endl;
// 	}
// };

// // Derived class C

// class C: public A, public B {


// };

// // Driver Code

// int main() {

// 	// Created an object of class C

// 	C c1;

// 	// Calling function func()

// 	c1.A::behaviour();
// 	c1.B::behaviour();

// 	return 0;
// }


// Hybrid Inheritance

// #include<iostream>
// using namespace std;

// // Base class A

// class A {
// 	public:

// 	void behaviour() {
// 		cout << " I am in class A" << endl;
// 	}
// };



// class B : virtual public A  {
// 	public:

// 	void behaviour() {
// 		cout << " I am in class B" << endl;
// 	}
// };



// class C:virtual public A {
// 	public:
// void behaviour() {
// 		cout << " I am in class C" << endl;
// 	}

// };

// class D: public B, public C {
// 	public:
// void behaviour() {
// 		cout << " I am in class D" << endl;
// 	}

// };

// // Driver Code

// int main() {

// 	D d1;

// 	d1.behaviour();
// 	d1.B::behaviour();
// 	d1.C::behaviour();

// 	return 0;
// }

//Mode of inheritance 

// public to public, protected, private

// #include<iostream>
// using namespace std;

// class Student{
// 	public :

// 	int age;
// };

// class Vatsal : private Student{

// 	public :

// 	void display(){    
// 		cout<<"Age : "<<age<<endl;
// 	}

// };



// int main(){
// Vatsal v1;

// v1.display();  // Derive class k andar access ho raha 

// // cout<<"public way access age : "<<v1.age<<endl;   //public -> bahar se acess   // Not Ok

// }





// // protected to public, protected, private

// #include<iostream>
// using namespace std;

// class Student{
// 	protected :

// 	int age;
// };

// class Vatsal : private Student{

// 	public :

// 	void display(){    
// 		cout<<"Age : "<<age<<endl;
// 	}

// };



// int main(){
// Vatsal v1;

// v1.display();  // Derive class k andar access ho raha 

// // cout<<"public way access age : "<<v1.age<<endl;   //public -> bahar se acess   // Not Ok

// }



// private to public, protected, private

// #include<iostream>
// using namespace std;

// class Student{
// 	private :

// 	int age;
// };

// class Vatsal : private Student{

// 	public :

// 	void display(){    
// 		cout<<"Age : "<<age<<endl;
// 	}

// };



// int main(){
// Vatsal v1;

// v1.display();  // Derive class k andar access ho raha 

// // cout<<"public way access age : "<<v1.age<<endl;   //public -> bahar se acess   // Not Ok

// }



// Polymorphism  -> compile time 



// #include<iostream>
// using namespace std;

// class Student{

// 	public :

// 	string name;

// public :

// 	void display(){
// 		cout<<"Hello Students ..."<<endl;
// 	}
// 	int display(string name){
// 		cout<<"Hello Students ..."<<endl;
// 	}


// };





// int main(){

// Student s1;

// s1.name = "Pawan";

// s1.display();

// }





// #include<iostream>
// using namespace std;

// class Student{

// 	public :

// 	string name;

// public :

// 	void display(){
// 		cout<<"Parameterless Hello Students ..."<<endl;
// 	}

// 	void display(string name){
// 		this->name = name;
// 		cout<<"Parameterized Hello Students ..."<<name<<endl;
// 	}


// };

// int main(){

// Student s1;


// s1.display();
// s1.display("Pawan");

// }





// #include<iostream>
// using namespace std;

// class Student{

// 	public :

// 	int id;
// 	string name;
// 	float salary;


// public :

// Student(){
// 	id = 12;
// 	name = "Pawan";
// 	salary = 12345;
// }


// Student(int id, string name, float salary){
// 	this->id = id;
// 	this->name = name;
// 	this->salary = salary;
// }

// 	void display(){
// 		cout<<"Id : "<<id<<endl;
// 		cout<<"Name : "<<name<<endl;
// 		cout<<"Salary : "<<salary<<endl;
// 	}

// };

// int main(){

// Student s1;
// s1.display();
// Student s2(1,"Rahul",1222);
// s2.display();
// Student s3(2,"Ram",999.58);
// s3.display();


// }





// #include<iostream>
// using namespace std;

// class Jyoti{

// 	public :

// virtual	void teaching(){
// 		cout<<"Madam teaches backend..."<<endl;
// 	}

// };

// class Pawan : public Jyoti{
// public :

// 	void teaching() override{
// 		cout<<"I teach Frontend..."<<endl;
// 	}
// };

// int main(){

// 	Pawan p1;

// 	p1.teaching();

// }



// Run-time Polymorphism


// #include<iostream>
// using namespace std;

// class Jyoti{

// 	public :

// virtual	void teaching(){
// 		cout<<"Madam teaches backend..."<<endl;
// 	}

// };

// class Pawan : public Jyoti{
// public :

// 	void teaching() override{

// 		// Jyoti::teaching();
// 		cout<<"I teach Frontend..."<<endl;
// 	}
// };

// int main(){

// 	// Jyoti j1;
// 	// j1.teaching();

// 	Pawan p1;

// 	p1.teaching();

// 	p1.Jyoti::teaching();

// }


// Abstraction Class

// #include<iostream>
// using namespace std;

// class Student{

// public :

// virtual void study() = 0;  // pure vartual function

// void display(){
// 	cout<<"This is Abstract Class! "<<endl;
// }

// };


// int main(){

// 	Student s1;  // Not Ok

// 	// s1.display();

// }



// #include<iostream>
// using namespace std;

// class Student{

// public :

// virtual void study() = 0;  // pure vartual function

// void display(){
// 	cout<<"This is Abstract Class! "<<endl;
// }

// };

// class Sejal : public Student{
// 	public :

// 	void study()override{
// 	cout<<"Sejal Class..."<<endl;
// 	}
// };


// int main(){

// 	Sejal sj;

// 	sj.study(); 

// }





// #include<iostream>
// using namespace std;

// class Student{

// public :

// int age;
// int marks;

// Student(int age, int marks){
// 	this->age = age;
// 	this->marks = marks;

// 	// cout<<"Age : "<<age<<endl;
// 	// cout<<"Marks : "<<marks<<endl;

// }

// virtual void study() = 0;  // pure vartual function

// void display(){
// 	cout<<"This is Abstract Class! "<<endl;
// }

// };

// class Sejal : public Student{
// 	public :

// 	Sejal(int age, int marks) : Student(age,marks){}

// 	void study()override{
// 	cout<<"Sejal Class..."<<endl;
// 	cout<<"Age : "<<age<<endl;
// 	cout<<"Marks : "<<marks<<endl;
// 	}

// };


// int main(){

// 	Sejal sj(19, 100);

// 	sj.study(); 

// }




// #include<iostream>
// using namespace std;

// class Student{

// public :

// int age;
// int marks;

// Student(int age, int marks) : age(age), marks(marks){}

// virtual void study() = 0;  // pure vartual function

// void display(){
// 	cout<<"This is Abstract Class! "<<endl;
// }

// };

// class Sejal : public Student{
// 	public :

// 	Sejal(int age, int marks) : Student(age,marks){}

// 	void study()override{
// 	cout<<"Sejal Class..."<<endl;
// 	cout<<"Age : "<<age<<endl;
// 	cout<<"Marks : "<<marks<<endl;
// 	}

// };


// int main(){

// 	Sejal sj(19, 100);

// 	sj.study(); 

// }


// https://docs.google.com/document/d/15KPPKNqE8Sqix9bCv4SBBp8OQ4nUuPPkBUzAiAr4bJo/edit?tab=t.0
// https://docs.google.com/document/d/1zGlyazKn16JqkH2AOGI_FM3XDU3zYIseb4P69aOxguU/edit?tab=t.0
// https://docs.google.com/document/d/1t9Scukn0ElLTLhxqhb2F_LIDehR8xTAJXZPzgqK9Dv8/edit?tab=t.0
// https://docs.google.com/document/d/1mjJ_sZ9sOVkL6RPun-6RDagVVPIEt6DSNyYeYVnp7nE/edit?tab=t.0
// https://docs.google.com/document/d/1l0eJpbp2yW25oaKcfBpFYLJYhPpJUYCVzqcCeKBPj9k/edit?tab=t.0
// https://docs.google.com/document/d/1ze_amjGr65pheepsFy-k4YrJF0sjb1t6q83ZzBz9kZg/edit?tab=t.0
// https://docs.google.com/document/d/1ze_amjGr65pheepsFy-k4YrJF0sjb1t6q83ZzBz9kZg/edit?tab=t.0



// String  : 

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str = "Pawan Maurya";

//     cout<<str;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str;

//     cout<<"Please enter your name : ";
//     cin>>str;   // It not take space inside of string

//     cout<<str;
// }



// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str;

//     cout<<"Please enter your name : ";
//     // cin>>str;   // It not take space inside of string

//     getline(cin, str);

//     cout<<str;
// }


// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str;

//     cout<<"Please enter your name : ";
//     // cin>>str;   // It not take space inside of string

//     getline(cin, str);

//     cout<<str;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str;

//     cout<<"Please enter your name : ";
//     // cin>>str;   // It not take space inside of string

//     getline(cin, str);

//     cout<<str;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str1 = "Pawan";
//     string str2 = "Maurya";

//     cout<<str1 + " "+ str2<<endl;

// }
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str1 = "Pawan";
//     string str2 = " Maurya";

//     cout<<str1.append(str2)<<endl;

// }
// #include<iostream>
// #include<string>
// #include<cstring>
// using namespace std;

// int main(){
//     char str1[6] = "Pawan";

//     cout<<"First size : "<<sizeof(str1)<<endl;
//     char str2[8] = " Maurya";

//     strcat(str1,str2);

//     cout<<str1<<endl;
//      cout<<"Updated size : "<<sizeof(str1)<<endl;

// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
   
//    string str1 = "Pawan";

//    cout<<str1.size()<<endl;

// }


// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
   
//    string str1 = "Pawan";

//    string str2 = "Maurya";

//    cout<<str1.append(str2)<<endl;

//    cout<<str1.size()<<endl;

// }


// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
   
//    string str1 = "Pawan\0Maurya";

//    cout<<str1<<endl;


// }


// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
   
//    string str1 = "Pawan Maurya";

//     cout<<str1[5]<<endl;


// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
   
//    string str1 = "Pawan Maurya";

//     // cout<<str1.length()<<endl;
//     // cout<<str1.size()<<endl;


//     for(int i = 0; i < str1.length(); i++){
//         cout<<str1[i]<<endl;
//     }


// }


// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
   
//    string str1 = "Pawan Maurya";

//     // cout<<str1.length()<<endl;
//     // cout<<str1.size()<<endl;

//    str1[0] = 'q';

//     for(int i = 0; i < str1.length(); i++){
//         cout<<str1[i]<<endl;
//     }


// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
   
//    string str1 = "Pawan Maurya";

//   cout<<str1.insert(3, "Nancy");


// }


// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
   
//    string str1 = "Pawan Maurya";

//   cout<<str1.erase(2,2);


// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
   
//    string str1 = "Pawan Maurya";

//   cout<<str1.at(8);


// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
   
//    string str1 = "Pawan Maurya";

//   cout<<str1.find('a');


// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
   
//    string str1 = "Pawan Maurya";

//     str1.clear();

//   cout<<str1<<endl;


// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
   
//    int num = 'A';
//    int num1 = 'Z';

//    cout<<num<<endl;
//    cout<<num1<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;  // stack

//     int *p = &a;  // heap

//     cout<<*p<<endl;
// }




// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;  // stack

//     int *p = &a;  // heap -> allocate memory

//     cout<<*p<<endl;

//     delete p;   // Deallocate memory

//     cout<<*p<<endl;  
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int *p = new int;  // heap -> allocate memory

//     *p = 10;

//     cout<<*p<<endl;

//     delete p;   // Deallocate memory

//     cout<<*p<<endl;  


// }

// #include<iostream>
// using namespace std;

// int main(){

//     int *p = new int;  // heap -> allocate memory

//     *p = 10;

//     cout<<*p<<endl;

//     delete p;   // Deallocate memory

//     p = new int[5];   // dangling pointer -> kabhi unbehaviour show kr skta hai;

//     p[0]  = 11;
//     p[1] =12;
//     p[2] =13;
//     p[3] =14;
//     p[4] =15;


//     for(int i = 0; i < 5; i++){
//         cout<<*(p+i)<<endl;
//     }
  
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int *p = new int;  // heap -> allocate memory

//     *p = 10;

//     cout<<*p<<endl;

//     delete p;   // Deallocate memory

//     p = nullptr;  // nullptr prevent from dangling pointer 

//     p = new int[5];   

//     p[0]  = 11;
//     p[1] =12;
//     p[2] =13;
//     p[3] =14;
//     p[4] =15;


//     for(int i = 0; i < 5; i++){
//         cout<<*(p+i)<<endl;
//     }
  

//  delete[] p;    // Deallocate memory

//  return 0;

// }



// #include<iostream>
// using namespace std;

// class Student{
//     public : 
//     int *p;

//     Student(int a){

//         p = new int; // Allocated memory

//         cout<<"Allocated Memory !"<<endl;

//         *p = a;
//     }

//     ~Student(){
//         delete p;  // Deallocated memory

//         cout<<"Deallocated Memory!"<<endl;

//     }

//     void display(){
//         cout<<*p<<endl;
//     }
// };

// int main(){

//     Student s1(10);

//     s1.display();

// }

// #include<iostream>
// using namespace std;

// class Student{
//     public : 
//     int *p;

//     Student(int a){

//         p = new int; // Allocated memory

//         cout<<"Allocated Memory !"<<endl;

//         *p = a;
//     }

//     ~Student(){
//         delete p;  // Deallocated memory

//         cout<<"Deallocated Memory!"<<endl;

//     }

//     void display(){
//         cout<<*p<<endl;
//     }
// };

// int main(){

//     // Student s1(10);
//     // s1.display();


//     Student *s1 = new Student(10);

//     s1->display();

//     delete s1;

// }


// STL : Template -> Function

// #include<iostream>
// using namespace std;

//   template<typename T>

//   T addition(T num1 , T num2){
//     T result = num1+num2;

//     cout<<result<<endl;
//   }

// int main(){

// addition(10,20);
// }


// #include<iostream>
// using namespace std;

//   template<typename T1, typename T2>

//   T2 addition(T1 num1 , T2 num2){
//     T2 result = num1+num2;

//     cout<<result<<endl;
//   }

// int main(){

// addition(10,20.2);
// }


// #include<iostream>
// using namespace std;

//   template<typename T>

//   T names(T n){
//     cout<<n<<endl;
//   }

// int main(){

// names("Pawan");
// }


// Template  : Class

// #include<iostream>
// using namespace std;

// template<typename T1, typename T2>

// class Student{
//     public :
//     T1 age;
//     T2 marks;

//     Student(T1 age , T2 marks){
//        this->age = age;
//        this->marks = marks; 
//     }

//     void display(){
//         cout<<"Age : "<<age<<endl;
//         cout<<"Marks : "<<marks<<endl;
//     }

// };

// int main(){
//     Student<int,int> s1(20,58);
//     s1.display();
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//     vector<int> v1;

//     // push_back();

//     v1.push_back(10);
//     v1.push_back(20);
//     v1.push_back(30);
//     v1.push_back(40);
//     v1.push_back(50);

// // ForEach();

// cout<<"Using foreach loop : "<<endl;

//     for(int element : v1){
//         cout<<element<<" ";
//     }

//     cout<<endl;

//     // Size()

//     cout<<"Size of Vector : "<<v1.size()<<endl;



//     // For loop


//     cout<<"Using for loop : "<<endl;

//     for(int i = 0; i < v1.size(); i++){
//         cout<<v1[i]<<" ";
//     }

//     cout<<endl;
// }



// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int>v1(5);

//     cout<<"Taking input in vector from user : "<<endl;

//     for(int i = 0; i < v1.size(); i++){
//         cout<<"Please enter value at "<<i<<" index : ";
//         cin>>v1[i];
//     }


//     cout<<"Output : "<<endl;

// for(int element : v1){
//     cout<<element<<" ";
// }

// cout<<endl;
    
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int>v1 = {10,20,30,40,50};


//     for(int element : v1){
//         cout<<element<<" ";
//     }

//     cout<<endl;
    
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int>v1(5, 10);

//     for(int element : v1){
//         cout<<element<<" ";
//     }
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int>v1(5);

//     v1.push_back(10);
//     v1.push_back(20);
//     v1.push_back(30);
//     v1.push_back(40);
//     v1.push_back(50);
//     v1.push_back(60);
//     v1.push_back(70);
//     v1.push_back(80);

// cout<<"Vector element : "<<endl;
//     for(int element : v1){
//         cout<<element<<" ";
//     }

//     cout<<endl;

// cout<<"Size of vector after adding extra element from size : "<<v1.size()<<endl;
// }
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int>v1(5);

//     v1.push_back(10);
//     v1.push_back(20);
//     v1.push_back(30);
//     v1.push_back(40);
//     v1.push_back(50);
//     v1.push_back(60);
//     v1.push_back(70);
//     v1.push_back(80);

// cout<<"Vector element : "<<endl;
//     for(int element : v1){
//         cout<<element<<" ";
//     }

//     cout<<endl;

// cout<<"Size of vector after adding extra element from size : "<<v1.size()<<endl;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     vector<int>v1;

//     v1.push_back(10);
//     v1.push_back(220);
//     v1.push_back(30);
//     v1.push_back(440);
//     v1.push_back(50);
//     v1.push_back(600);
//     v1.push_back(70);
//     v1.push_back(80);

// cout<<"Vector element : "<<endl;
//     for(int element : v1){
//         cout<<element<<" ";
//     }

//     cout<<endl;

// cout<<"Size of vector after adding extra element from size : "<<v1.size()<<endl;


// // pop_back()


// cout<<"Vector After pop_back  : "<<endl;

// v1.pop_back();

//     for(int element : v1){
//         cout<<element<<" ";
//     }

//     cout<<endl;


//     // at()

//     cout<<"Element present at 3 index : "<<v1.at(3)<<endl;

//     // insert()

//     cout<<"Insert element at 2 index : "<<endl;

//     v1.insert(v1.begin()+2,1000);

//      for(int element : v1){
//         cout<<element<<" ";
//     }

//     cout<<endl;

//      cout<<"Delete element at 2 index : "<<endl;

//     v1.erase(v1.begin()+2);

//      for(int element : v1){
//         cout<<element<<" ";
//     }

//     cout<<endl;

//     // empty()

//     cout<<"Vector element present : "<<(v1.empty()? "NO":"YES")<<endl;
//       for(int element : v1){
//         cout<<element<<" ";
//     }

//     cout<<endl;

//     // clear()

//     cout<<"Clear vector : "<<endl;

//     // v1.clear();

//     //  cout<<"Vector element present : "<<(v1.empty()? "NO":"YES")<<endl;

//      // reverse()

//      cout<<"Vector Reverse : "<<endl;

//      reverse(v1.begin(),v1.end());

//         for(int element : v1){
//         cout<<element<<" ";
//     }

//     cout<<endl;

//     cout<<"Vector Sort : "<<endl;

//     sort(v1.begin(),v1.end());
//         for(int element : v1){
//         cout<<element<<" ";
//     }

//     cout<<endl;

//     // back() 

//     cout<<"Vector Last element : "<<v1.back()<<endl;

//     // *v1.begin()

//     cout<<"Vector First Element : "<<*v1.begin()<<endl;

//     //*(v1.end()-1)

//      cout<<"Vector Last element : "<<*(v1.end()-1)<<endl;

//      // front()

//      cout<<"Vector element at front : "<<v1.front()<<endl;
// }


// https://docs.google.com/document/d/1MiNz-8zwI8m3Tq1YeK-SPWYVEPqq4yxaNU1z9FkMHmg/edit?tab=t.0
// https://docs.google.com/document/d/1ZeuYVly9Ul7GOquVh5BaoI9XimkLq-ESfk2m5PwzQOU/edit?tab=t.0



// #include<iostream>
// using namespace std;

// // Create Node

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// // Insert at Tail

// void insertAtTail(Node* &head, int data){

// Node* newNode = new Node(data);

//     if(head == NULL){
//         head = newNode;
//         return;
//     }

//     Node* temp = head;

//     while(temp->next != NULL){
//         temp = temp->next;
//     }

//     temp->next = newNode;
// }

// // Linked List Print

// void print(Node* &head){

//     if(head == NULL){
//         cout<<"Linked List Empty!"<<endl;
//         return;
//     }

//     Node* temp = head;

//     while(temp != NULL){
//         cout<<temp->data<<"->";
//         temp= temp->next;
//     }

//     cout<<"NULL"<<endl;

// }

// int main(){
//     Node* head = NULL;

//     print(head);

//     cout<<"Insert 10 at tail : "<<endl;
//     insertAtTail(head, 10);

//     print(head);
//     cout<<"Insert 20 at tail : "<<endl;

//     insertAtTail(head, 20);
//     print(head);
//     cout<<"Insert 30 at tail : "<<endl;

//     insertAtTail(head, 30);
//     print(head);
//     cout<<"Insert 40 at tail : "<<endl;

//     insertAtTail(head, 40);
//     print(head);
//     cout<<"Insert 50 at tail : "<<endl;

//     insertAtTail(head, 50);
//     print(head);
// }


// Today : Task

// https://docs.google.com/document/d/1SmPzK3VuVPydQQlliW6PrMjLBaRqO0vusJABZgwor3E/edit?tab=t.0#heading=h.gjdgxs
// https://docs.google.com/document/d/1noHP_L2fZ6rIYkiqNLEbpwuOlNR7p19zz05nDpoMf10/edit?tab=t.0



// #include<iostream>
// using namespace std;

// class Node{
//     public :
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };


// void insertAtTail(Node* &head, int data){

//     // Create new Node

//     Node* newNode = new Node(data);

//     // If head point to NULL
//     if(head == NULL){
//         head = newNode;
//         return;
//     }

// // Create temp pointer for traverse
//     Node* temp = head;


// // Check temp->next point to NULL 
//     while(temp->next != NULL){
//         temp = temp->next;
//     }

// // Add newNode at Tail when temp->next point to NULL
//     temp->next = newNode;

// }

// void print(Node* &head){
//     // Check node is empty 

//     if(head == NULL){
//         cout<<"Linked List Empty!"<<endl;
//         return;
//     }

//     // if head not point to NULL then create temp pointer to traverse

//     Node* temp = head;

//     while(temp != NULL){
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }

//     cout<<"NULL"<<endl;
// }


// int main(){
//     Node * head = NULL;

//     cout<<"Check linked list empty or not : "<<endl;

//     print(head);

//     cout<<"Insert Node At Tail in Linked List : "<<endl;

//     insertAtTail(head, 10);
//     insertAtTail(head, 20);
//     insertAtTail(head, 30);
//     insertAtTail(head, 40);
//     insertAtTail(head, 50);
//     insertAtTail(head, 60);

//     print(head);
// }



// #include<iostream>
// using namespace std;

// class Node{
//     public :
//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertAtTail(Node* &head, int data){
//     Node* newNode = new Node(data);

//     if(head == NULL){
//         head = newNode;
//         return;
//     }

//     Node* temp = head;

//     while(temp->next != NULL){
//         temp = temp->next;
//     }

//     temp->next = newNode;
// }


// void insertAtHead(Node* &head, int data){

//     Node* newNode = new Node(data);

//     if(head == NULL){
//         head = newNode;
//         return;
//     }

//     newNode->next = head;
//     head = newNode;
// }


// void insertAtPosition(Node* &head, int position, int data ){

//     Node* newNode = new Node(data);

//     // Position 1

//     if(position == 1){
//         newNode->next = head;
//         head = newNode;
//         return;
//     }


//     Node* temp = head;

//     for(int i = 1; i < position-1 && temp != NULL; i++){
//         temp = temp->next;
//     }

//     if(temp == NULL){
//         cout<<"Position Out of bound!"<<endl;
//     }

//     newNode->next = temp->next;
//     temp->next = newNode;


// }



// void print(Node* &head){

//     if(head == NULL){
//         cout<<"Linked List is Empty!"<<endl;
//         return;
//     }

//     Node* temp = head;

//     while(temp != NULL){
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }


//     cout<<"NULL"<<endl;
// }


// void updateData(Node* &head, int oldData, int newData){

//     if(head == NULL){
//         cout<<"Linked  list is Empty!"<<endl;
//         return;
//     }

//     Node* temp = head;

//     while(temp->data != oldData){
//         temp = temp->next;
//     }

//      temp->data = newData;
   
  
// }

// void deleteData(Node* &head, int pos){

//     if(head == NULL){
//         cout<<"Linked  list is Empty!"<<endl;
//         return;
//     }

//     Node* temp = head;
//     Node* prev = NULL;

//     for(int i=1;i<pos-1;i++)
//     {
//         prev = temp;
//         temp=temp->next;
       
//     }

//     prev->next = temp->next;

//     delete temp;

// }





// int main(){
//     Node* head = NULL;

//     cout<<"Insert Node at Tail : "<<endl;

//     insertAtTail(head,10);
//     insertAtTail(head,20);
//     insertAtTail(head,30);
//     insertAtTail(head,40);
//     insertAtTail(head,50);

//     print(head);


//     cout<<"Insert Node at Head : "<<endl;

//     insertAtHead(head,100);
//     insertAtHead(head,200);
//     insertAtHead(head,300);
//     insertAtHead(head,400);

//     print(head);

//     cout<<"Insert Node at Specific Possition : "<<endl;

//     insertAtPosition(head, 3, 1000);

//     print(head);

//     cout<<"Insert Node at position 1 : "<<endl;

//       insertAtPosition(head, 1, 11111);

//       print(head);

//     //   cout<<"Insert Node at position out of bound : "<<endl;

//     //   insertAtPosition(head, 13, 11111000);

//     //   print(head);
    
//     //   cout<<"Update Linked List : "<<endl;

//     //   updateData(head,33, 3000);

//     //   print(head);

//       deleteData(head,3);
//       print(head);
// }



// Intro of Stack, its operations, and Creation


//  STL : Stack

// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//     stack<int>s;

// //push()
//     cout<<"Push element inside stack with push operation  :"<<endl;

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     s.push(60);

// // top()

// cout<<"Peek element in stack : "<<s.top()<<endl;

// // pop()

// s.pop();

// cout<<"Update stack after remove element from stack : "<<s.top()<<endl;

// // size()

// cout<<"Stack size : "<<s.size()<<endl;

// // empty()

// cout<<"Stack is empty or not : "<<s.empty()<<endl;

// // full

// // cout<<"Stack is full or not : "<<s.full()<<endl;

// // display stack

// cout<<"Stack size : "<<s.size()<<endl;

// while(s.size()>0){
//     cout<<s.top()<<" ";
//     s.pop();
// }

// }




// #include<iostream>
// #include<stack>
// using namespace std;

// class Stack{
//     public : 
//     stack<int>s;
//     int capacity;

//     Stack(int cap){
//         capacity = cap;
//     }

//     void push(int data){

//         if(s.size() >= capacity){
//             cout<<"Stack Overflow!"<<endl;;
//             return;
//         }

//         s.push(data);
//         cout<<data<<" pushed in stack!"<<endl;

//     }

//     int pop(){

//         if(s.size() == 0){
//             cout<<"Stack Underflow!"<<endl;
//             return -1;
//         }

//         int topElement = s.top();
//         s.pop();

//         cout<<topElement<<" popped from stack!"<<endl;
//     }

//     void display(){
//         if(s.size() == 0){
//             cout<<"Stack is Empty!"<<endl;
//             return;
//         }

//         while(s.size()>0){
//             cout<<s.top()<<" ";
//             s.pop();
//         }
//         cout<<endl;
//     }

//     bool isFull(){

//         if(s.size() >= capacity){
//             return 1;
//         }else{
//            return 0;
//         }
//     }

//     void empty(){

//         if(s.empty()){
//             cout<<"Stack is Empty!"<<endl;
//         }else{
//             cout<<"Stack is not Empty!"<<endl;
//         }
//     }
// };

// int main(){
    
//     Stack mystack(5);

//     cout<<"Push element in stack : "<<endl;

//     mystack.push(10);
//     mystack.push(20);
//     mystack.push(30);
//     mystack.push(40);
//     mystack.push(50);
//     // mystack.push(60);
//     // mystack.push(60);


//     cout<<"Remove peek element : "<<endl;

//     // mystack.pop();
    
//   cout<<mystack.isFull()<<endl;

//     cout<<"Display stack : "<<endl;
//     mystack.display();

//     mystack.empty();


  
// }




// #include<iostream>
// using namespace std;

// class Stack{
//     public : 

//     int *arr;
//     int capacity;
//     int top;

//     Stack(int size){
//         arr = new int[size];
//         capacity = size;
//         top = -1;
//     }

//     void push(int data){
//         if(top >= capacity-1){
//             cout<<"Stack is overflow"<<endl;
//             return;
//         }

//         top++;

//         arr[top] = data;

//         cout<<data<<" push in stack!"<<endl;
//     }

//     int pop(){
//         if(top == -1){
//             cout<<"Stack is underflow!"<<endl;
//             return -1;
//         }

//         int topelement = arr[top];
//         top--;
//         cout<<topelement<<" popped from stack"<<endl;
        
//         return arr[top];
//     }


//     void display(){

//         if(top == -1){
//             cout<<"Stack is Empty!"<<endl;
//             return;
//         }

//         for(int i = top; i >=0; i--){
//             cout<<arr[i]<<" ";
//         }
//     }
// };


// int main(){

//     Stack mystack(5);

//     mystack.push(10);
//     mystack.push(20);
//     mystack.push(30);
//     mystack.push(40);
//     mystack.push(50);
//     mystack.push(60);

//     mystack.pop();

//     mystack.display();

// }





