#include<iostream>

int main(){
  int x;
  std::cout << "Enter a number";
  std::cin >> x;
  int arr[6] = {1,2,3,4,5,6,7};
  
  for(int i = 0; i < 7;i++){
    if(arr[i]== x){
    std::cout << "the number exists in array" << x;
    }
  }
  return 0;
}
