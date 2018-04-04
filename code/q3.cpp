#include<iostream>

using namespace std;

int main() {

  int keep_num[] = {0, 0, 0, 0, 0};
  int sum = 0;

  cout<<"input a: ";
  cin>>keep_num[0];
  cout<<"input b: ";
  cin>>keep_num[1];
  cout<<"input c: ";
  cin>>keep_num[2];
  cout<<"input d: ";
  cin>>keep_num[3];
  cout<<"input e: ";
  cin>>keep_num[4];

  for(int i=0; i<5; i++) {
    sum += keep_num[i];
  }

  cout<<"Values: "<<sum<<endl;

  return 0;
}
