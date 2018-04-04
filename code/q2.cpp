#include <iostream>

using namespace std;

int Multiply_number_game(int, int);
void Title_header();

int main() {

  int get_a = 0;
  int get_b = 0;

  Title_header();
  cout<<"Value a: ";
  cin>>get_a;
  cout<<"Value b: ";
  cin>>get_b;
  cout<<endl;

  cout<<Multiply_number_game(get_a, get_b);

  return 0;
}
int Multiply_number_game(int a, int b) {

  int c =0;

  for(int i=1; i<=b; i++) {
    c += a;
  }
  return c;
}
void Title_header() {
  cout<<"Input 2 Value to program"<<endl;
}
