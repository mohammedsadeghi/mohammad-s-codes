#include <iostream>
#include <vector>
#include <string>
using namespace std;
class movies{
private:
  int watched;
  string name;
  int rate;
public:
  movies(string n,int w,int r);
  void display();
};
