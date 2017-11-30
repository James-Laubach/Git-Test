#include<iostream>

using namespace std;

int sum(int n);
int product(int n);
int main(){
  int n;
  cout << "Enter an integer greater than one: "; cin >> n;
  cout << "sum: " << sum(n) << endl;
  cout << "product: " << product(n) << endl;
}
int sum(int n){
  int total = 0;
  for(int i = 0; i <= n; i++){
    total = i + total;
  }
  return total;
}

int product(int n){
  int total = 1;
  for(int i = 1; i <= n; i++){
    total = i * total;
  }
  return total;
}  
