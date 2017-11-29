#include<iostream>

using namespace std;

int sum(int n);
int main(){
  int n;
  cout << "Enter an integer greater than one: "; cin >> n;
  cout << sum(n) << endl;
}
int sum(int n){
  int total = 0;
  for(int i = 0; i <= n; i++){
    total = i + total;
  }
  return total;
}
