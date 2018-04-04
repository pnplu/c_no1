#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

float cal_grade(float a[]);

int main() {

  float keep_grade_num[] = {0, 0, 0, 0, 0, 0, 0};
  string grade;

  for(int i=0; i<7; i++) {
    cout<<"Input grade Subject: ";
    cin>>grade;

    if(grade == "A" || grade == "a") {
      keep_grade_num[i] = {4};
    }
    else if(grade == "B+" || grade == "b+") {
      keep_grade_num[i] = {3.5};
    }
    else if(grade == "B" || grade == "b") {
      keep_grade_num[i] = {3};
    }
    else if(grade == "C+" || grade == "c+") {
      keep_grade_num[i] = {2.5};
    }
    else if(grade == "C" || grade == "c") {
      keep_grade_num[i] = {2};
    }
    else if(grade == "D+" || grade == "d+") {
      keep_grade_num[i] = {1.5};
    }
    else if(grade == "D" || grade == "d") {
      keep_grade_num[i] = {1};
    }
    else {
      keep_grade_num[i] = {0};
    }
  }

  ;

  cout<<setprecision(3);
  cout<<cal_grade(keep_grade_num)<<endl;

  return 0;
}

float cal_grade(float a[]) {
  float sum, avg = 0;
  for(int i=0; i<7; i++) {
    sum += a[i];
  }

  avg = sum/7;

  return avg;
}
