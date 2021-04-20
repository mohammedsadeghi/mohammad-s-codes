#include <iostream>

using namespace std;
class player{
private:
  int health;
public:
  int set_health(int n);
  void show(bool);
};
int player::set_health(int n){
  health=n;
}
void player::show(bool){
  cout<<health;
}
int main() {
  /* code */
  cout << "hello there my dear" << '\n';
  int y;
  cin>>y;
  {player ali;
  ali.set_health(y);
  ali.show(1);}

  return 0;
}
