#include <iostream>
using namespace std;

int solve(int arr[] , int size , int index){
    //base case 
    if(index>=size){
        return 0; 
    }
   
   int option1 = arr[index] + solve(arr , size , index+2);
   int option2 = 0+ solve(arr , size , index);

   int finalAns = max(option1, option2);
   return finalAns;

}

int rob(int arr[]){
    
}