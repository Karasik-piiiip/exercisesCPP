#include <iostream>

void Increasing_Array(){
    /*
    You are given an array of n integers. 
    You want to modify the array so that it is increasing, 
    i.e., every element is at least as large as the previous element.

    On each move, you may increase the value of any element
    by one. What is the minimum number of moves required?
    */
    
    int requares = 0;
    int n;
    std::cin >> n;
    int X[n];
    for (int i=0; i < n; i++){
        // Ввод
        std::cin >> X[i];
    }

    for (int i=1; i < n; i++){
        if(X[i-1] > X[i]){
            requares += X[i-1] - X[i];
            X[i] = X[i-1];
        }
    }
    std::cout << requares;
}

int main(){
    Increasing_Array();
    return 0;
}