#include<iostream>

int main(){
  int i = 5,k = 0;
  
  for(i = 5; i > 0; i++){
    for (k = 0; k < i; k++){
        std::cout << i - k;
    }
    std::cout << "/n";
  }


}
