#include <iostream>

/*
void Increasing_Array(){
    /*
    You are given an array of n integers. 
    You want to modify the array so that it is increasing, 
    i.e., every element is at least as large as the previous element.

    On each move, you may increase the value of any element
    by one. What is the minimum number of moves required?
    */
    /*

    long long requares = 0;
    int n;
    std::cin >> n;
    long long X[n];
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

void Weird(){
    long long n;
    std::cin >> n;
    std::cout << n << " ";
    while(n != 1){
        if (n % 2 == 1)
        {
            n = n*3+1;
            std::cout << n << " ";
        }
        else
        {
            n=  n/2;
            std::cout << n << " ";
        }
    }
}
*/

void Collecting_Numbers(){
    int rounds = 1;
    int n;
    std::cin >> n;
    int arr[n];
    int poses[n];
    for(int i=0; i <n; i++){
        std::cin >> arr[i];
        poses[arr[i]-1] = i;
    }
    for(int i=1; i<n; i++) {
        if(poses[i] < poses[i-1])
            rounds++;
    }
    std::cout << rounds;

}

int main(){
    //Increasing_Array();
    //Weird();
    Collecting_Numbers();
    return 0;
}