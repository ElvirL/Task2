/*
  Напишите калькулятор для расчёта полной стоимости товара. Она рассчитывается так: стоимость товара + стоимость доставки – скидка. Все значения сохраните в переменные и выводите в нужных местах, имитируя ввод данных (речь про cout).
*/

#include <iostream>

using namespace std;

int main() { 
  int price = 100;
  int delivery = 10;
  int discount = 5;
  int answer = price + delivery - discount;
  cout << answer;
}