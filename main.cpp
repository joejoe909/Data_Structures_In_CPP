#include <QCoreApplication>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <array>
#include <sstream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

       //The diffrence of array and int a[n]

       int aArray[10];
       array<int, 10> arr;
       for(int i = 0; i < arr.size(); i++)
       {
           aArray[i] = i;
           arr[i] =i;
           qDebug() <<"adding value to arr" <<arr[i]<< "adding value to aArray" << aArray[i];
       }

       //show contents in arr using an iterator
       for(auto element: arr)
       {
           qDebug() << element;
       }

       for(auto it = arr.begin(); it != arr.end(); it++){
           auto element =(*it);
           qDebug() << element;
       }


    return a.exec();
}
