   #include<iostream>

using namespace std;

int main(){
    int* pPointer = nullptr;

    int intVal = 5;

    pPointer = &intVal;

    cout << "intVal = " << intVal<< endl;
    cout << "address of intVal = " << &intVal<< endl;
    cout << "pPointer = " << pPointer<< endl;
    cout << "address of pPointer = " << &pPointer << endl;
    return 0;
}
