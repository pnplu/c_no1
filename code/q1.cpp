#include<iostream>

using namespace std;

int main() {

  int get_num = 0;
  string a = "Cherprang";
  string b = "BNK48";

  cout<<"Input your number: ";
  cin>>get_num;

  for(int i=1; i<=get_num; i++) {
    if(i%3==0 && i%5==0) {
      cout<<a+" "+b<<endl;
    }
    else if(i%3==0) {
      cout<<a<<endl;
    }
    else if(i%5==0) {
      cout<<b<<endl;
    }
    else {
      cout<<i<<endl;
    }
  }

  return 0;
}
