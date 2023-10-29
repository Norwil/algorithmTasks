#include <iostream>
using namespace std;

void insertHelper(int a[], int n, int i){
  int key = a[i];
  int j = i-1;
  while(j >= 0 && a[j] > key) {
    a[j+1] = a[j];
    j = j - 1;
  }
  a[j+1] = key;
}

void insSort(int a[], int n){
  int i = 1;
  while (i < n) {
    insertHelper(a,n,i);
    i++;
  }
}

void display(int a[], int n) {
  for (int i = 0; i < n; i++){
    cout << a[i] << ", ";
  }
  cout<<endl;
}

int main() {
  int a[] = { 23, 53, 10, 2352, 5, 234234 };
  int size = sizeof(a)/sizeof(int);

  cout << "Unsorted Array" << endl;
  display(a, size);
  cout << "Sorted Array" << endl;
  insSort(a, size);
  display(a, size);

  return 0;

}
