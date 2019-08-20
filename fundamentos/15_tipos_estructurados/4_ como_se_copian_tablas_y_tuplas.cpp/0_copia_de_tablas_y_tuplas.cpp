#include <iostream>
using namespace std;

typedef double TresReales[3];

struct Grupito{
  int a;
  bool b;
  char c;
};

int main(){
  TresReales R = {0.5, 1.0, 2.0};
  TresReales S;
  Grupito G = {1, false, 'S'};
  Grupito H;
  H = G;// struct si que se puede hacer 
  // S = R en array no se puede hacer
  for(int i = 0;i < 3; i++) S[i] = R[i];
}