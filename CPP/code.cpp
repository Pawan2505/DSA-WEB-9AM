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



//Array


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




#include<iostream>
using namespace std;

class Student{
  // public :
  // static int age;
  // static int marks;
  // static int display(){
  //   cout<<"Age : "<<age<<endl;
  // }

};

// int Student::age = 24;
// int Student::marks = 123;

int main(){

// Student::display();

cout<<"Size of class : "<<sizeof(Student)<<endl;

}

