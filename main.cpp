#include <iostream>
#include <string>
using namespace std;

// bool max1(int a){
//   int b;

// }
/*
1. define a structure to keep student's score (english, math, and physicals).
struct student_score {
  name string,
  english float,
  math float
  physical float
  avg float;

  student_score(name, english, math, physicals) {
      this.* =
      this.average = // = (english + math + physical) / 3
  }

  get_average(){
    return avg.
  }
}
2. have an array to keep 3 students' records.
   tom = new student_score("Tom", 89, 99, 65)
   jack,
   jill,

   student_score[3] students = {tom, jack, jill}
3. two outputs
   3.a: print out the max average score.
   3.b: print out 3 students name, english, math, physical, avg and
differrences.

// loop to get 3 students records
max_avg = 0
for 1 -> 3;
    n <<
    english <<
    ...
    s = studdent_score(name, ....)
    students.append(s)
    if(max_avg < s.get_average(0)) max_avg = s.get_average()

// print out 3.b
for 1 -> 3:
  print n, e, m, p, a, differ = (max - a)

*/

int main() {
  struct student_struct {
    // scores
    string name;
    float eng;
    float math;
    float pe;
    float avg;

    void find_avg() {
      // for(int i = 0; i<3-1; i++){
      // TODO, it's wrong to get avg
      this->avg = (eng + math + pe) / 3;
      // return avg[i];
      // }
    }
    // TODO, u should a global var for max averge.
    // float get_max(){
    //   // for(int i = 0; i<3-1; i++){
    //     return avg;
    //   // }
    //   // return 0;
    // }
    void input() { 
      cin >> this->name >> this->eng >> this->math >> this->pe; }
    void output() {
      cout << name << " " << eng << " " << math << " " << pe << " " << avg << " ";
    }
  };
  student_struct a[3];
  float m_avg = 0;
  for (int i = 0; i < 3; i++) {
    a[i].input();
    a[i].find_avg();

    if (m_avg < a[i].avg) {
      m_avg = a[i].avg;
    }
    // if(max_avg < s.get_average(0)) max_avg = s.get_average()
  }

  // for(int i = 0; i<3; i++){
  //   a[i].find_avg();
  //   float s = a[i].get_max();
  //   if(m_avg<s){
  //     m_avg=s;
  //   }
  // }

  cout << m_avg << endl;

  for (int i = 0; i < 3; i++) {
    a[i].output();
    float differ = m_avg - a[i].avg;
    cout << differ<<endl;
  }
  //   /*
  // input: (name, 1, 2, 3)x3
  // output:
  // top average:
  // (name, 1, 2, 3, average, difference from top)x3

  // use a for loop for input, as well as calculate in another for loop to find
  // the top average and maybe another for finding difference?
  // */
  //   int first[3], second[3], third[3], fourth[3];
  //   // int num[8];
  //   int c;
  //   string name[3];
  //   for(int i = 0; i<3; i++){
  //     cin>>name[i];
  //     cin>>first[i]>>second[i]>>third[i];
  //     cout<<first[i]<<second[i]<<third[i]<<endl;
  //     // int j = 0;
  //     // while(j<2){
  //     //   cin>>[j];
  //     //   j++;
  //     //   cout<<j<<" ";
  //     //   //maybe make only one variable for input numbers?
  //     // }
  //   }
  // /*
  // 1 + 2 + 3/3 = 2
  // */
  //   double a = first[1]+second[1]+third[1]/3;
  //   for(int i = 0; i<2; i++){
  //     double b = first[i+1]+second[i+1]+third[i+1]/3;
  //     cout<<b<<" "<<a<<" ";
  //     c = max(a,b);
  //     double d = min(a, b);
  //     // fourth[i] = c-d;
  //     a = c;
  //   }
  //   //why 7?
  //   cout<<a;
  //   // for(int i = 0; i<3; i+=2){
  //   //   int a = num[i];
  //   //   int j = 0;
  //   //   //make another loop? how to loop all three int? make one?
  //   function???
  //   //   while(j<1){
  //   //     int b = num[i+2];
  //   //     c = max(a,b);
  //   //     a = c;
  //   //     j++;
  //   //   }
  //   // }
  //   // cout<<c;
}