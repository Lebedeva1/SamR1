#include <iostream>
 using namespace std;
 
 int main(int argc, char* argv[])
 {
  int count; // ���������� ��� ������ � switch
  double a,b; // ���������� ��� �������� ���������
  cout << "Vvedite pervoe chislo: ";
  cin >> a;
  cout << "Vvedite vtoroe chislo: ";
  cin >> b;
  cout << "Vibirite deistvie: 4-delenie: ";
  cin >> count;
  switch (count) // ������ ��������� switch
  {
     case 4: // ���� count = 1
     {
     cout << a << " / " << b << " = " << a / b << endl; // ��������� �������
     break;
     }
     }
 system("pause");
 return 0;
}