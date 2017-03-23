#include<iostream>
using namespace std;

void insert(int *array, unsigned int position, int value) {

  int temp = *(array + position), temp2;
  *(array + position) = value;
  while(++position < 10) {
    temp2 = *(array + position);
    *(array + position) = temp;
    temp = temp2;
  }
}

void remove(int *array, unsigned int position) {

  while(position < 10) {
    if(position == (10 - 1))
      *(array + position + 1) = 0;
    *(array + position) = *(array + position + 1);
    ++position;
  }
}

unsigned int find(int *array, int value) {

  unsigned int i;
  for(i = 0; i < 10; i++) {
    if(*(array + i) == value) {
      return i;
    }
    continue;
  }
}

void sort(int *array) {
  int temp, i, j;
  for(i = 0; i < 10; i++) {
    temp = *(array + i);
    for(j = 0; j < 10; j++) {
      if(*(array + j) > temp) {
        *(array + i) = *(array + j);
        *(array + j) = temp;
        temp = *(array + i);
      }
    }
  }
}

void print_array(int *array) {

  for(unsigned int i = 0; i < 10; i++) {
    cout << *(array + i) << "  ";
  }
  cout << endl;
}

int main(void) {

  int int_arr[10] = {1, 2, 3, 5, 6, 7, 8, 9, 10};
  cout << "Initial Array:" << endl;
  print_array(int_arr);

  cout << endl << "Array after inserting 69 in 4th position: " << endl;
  insert(int_arr, 4, 69);
  print_array(int_arr);

  cout << endl << "Array after Deleting 4th element: " << endl;
  remove(int_arr, 4);
  print_array(int_arr);

  cout << endl << "Array after sorting: " << endl;
  sort(int_arr);
  print_array(int_arr);

  cout << endl << "Index of 5 is: " << find(int_arr, 5) << endl;
  return 0;
}
