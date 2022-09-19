//
//  main.cpp
//  C++ ДЗ 23
//
//  Created by Павел on 19.09.2022.
//

#include <iostream>
using namespace std;

template <typename T>
void show_arr (T *arr, const T length){
cout<<"[ ";
for(int i = 0; i<length; i++){
cout<<arr[i]<<" ";
}
    cout<<"]\n";
}

//Задача 1
template <typename T>
void three_max( T &num1, T &num2,T &num3){
    T max=0;
    if(num1>num2){
        if(num1>num3){
            max=num1;
        }else
            max=num3;
            }else
                if(num2>num3){
                  max=num2;
                }else
                    max=num3;
   cout<<"Максимум : "<< max<< endl;
    num1=max; num2=max; num3=max;
}

//Задача 2. Ссылка на первый элемент массива
template <typename T>
T &first_num_arr(T arr[], const T length){
    for(int i=0; i<length; i++){
        if (arr[i]<0){
            cout<<"Первый отрицательный элемент массива = ";
           return arr[i];
            break;
        }
    }
    cout<<"Отрицательные элементы отсутствуют. Первый элемент массива = ";
    return arr[0];
}


//Задача 3. Два массива
void two_arr( int arr1[], const int size1, int arr2[], const int size2){
  for(int *i=arr1; i<(arr1+size1); i++){
        for(int *j=arr2; j<(arr2+size2); j++){
            if(*i == *j)
                *j=0;
        }
    }
}

int main(int argc, const char * argv[]) {
 
    //Задача 1.
    cout<<"Задача 1 . Введите три числа : \n";
    int a,b,c;
    cin>>a>>b>>c;
    three_max(a,b,c);
    cout<<"Новые значения чисел : "<<a<<"  "<<b<<"  "<<c<<endl;
    
    
    //Задача 2.
    cout<<"\nЗадача 2 . Введите размер массива : ";
    int size;
    cin>>size;
    int arr[size];
    cout<<"Введите "<<size<<" элементов массива : ";
    for(int i=0; i<size; i++){
            cin>>arr[i];
    }
    cout<<"Исходный массив : ";
    show_arr (arr,size);
    cout<<first_num_arr(arr,size)<<"\n\n";
   
    
    //Задача 3.
    cout<<"\nЗадача 2 .  \n";
    const int size1=7;
    int arr1[size1]={3, 6, 4, 1, 4, 8, 2};
    const int size2=6;
    int arr2[size2]={5, 3, 1, 5, 10, 8};
    cout<<"Массив 1 : ";
    show_arr (arr1,size1);
    cout<<"Массив 2 : ";
    show_arr (arr2,size2);
    cout<<"Массив 2 измененный : ";
    two_arr (arr1,size1,arr2,size2);
    show_arr(arr2,size2);
    cout<<endl;
    
    return 0;
}
