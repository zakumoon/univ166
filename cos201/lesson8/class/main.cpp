#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct shop
{
  char id[10];
  char name[10];
  int price;
  int instock;
};
int menu(int &n){
  cout<<setw(5)<<"MENU"<<endl;
  cout<<"1.Rgister"<<endl;
  cout<<"2.Sell"<<endl;
  cout<<"3.Check"<<endl;
  cout<<"4.Quit";
  cout<<"1234: ";
  int select;
  cin>>select;
  n++;
  return select;
}
void ()




int main(){
  int select;
  bool same = false;
  int n = 0;

  menu(n);
}