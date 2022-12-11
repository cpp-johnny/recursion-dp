#include <iostream>
#include <cstring>
using namespace std;
void towerOfHanoi(int disks, string s1, string s2, string s3);
static int a = 1, b = 1, c = 0;
int main() {
 cout << "***** TOWER OF HANOI *****" << endl;
 towerOfHanoi(5, "Peg 1", "Peg 2", "Peg 3");
 cout << endl;
 
}
void towerOfHanoi(int disks, string begin, string temp, string end) {
 if(disks == 1) {
  cout << begin << " ---->" << end << endl;
 } else {
  towerOfHanoi(disks - 1, begin, end, temp);
  cout << begin << " ---->" << end << endl;
  towerOfHanoi(disks - 1, temp, begin, end);
 }
}
