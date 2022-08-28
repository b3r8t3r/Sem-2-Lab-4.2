#include <locale.h>
#include <stdio.h>

#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using vector1d = vector<int>;

ostream& operator<<(ostream& out, const vector1d& v) {
  out << "< ";
  for (int i = 0; i < int(v.size()); ++i) {
    out << v[i] << " ";
  }
  out << ">";
  return out;
}

vector<int> arr = {1, 2, 3, 4};

void outMas(const vector<int>& mas, int num, string s) {
  cout << "Входные значения: " << endl;
  cout << " mas = " << mas << ", num = " << num << ", s = [" << s << "]"
       << endl;
  if (num == mas.size()) {
    cout << s << endl;
    return;
  }
  outMas(mas, num + 1, s);
  s = s + to_string(mas[num]) + ' ';
  outMas(mas, num + 1, s);
}

int main() {
  int n;
  cout << "Введите число: " << endl << ": ";
  cin >> n;     //Длина множества чисел от 1 до n
  arr.clear();  //Очистка вектора arr от всех значений
  for (int i = 0; i < n; i++)  //Заполнение вектора arr
    arr.push_back(i + 1);

  outMas(arr, 0, "");

  return 0;
}