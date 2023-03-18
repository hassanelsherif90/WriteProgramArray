#include <iostream>
#include <string>
using namespace std;


int ReadPositiveNumber(string Messag){
    int Number = 0;
    do
    {
        cout << Messag << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
void ReadyArray(int arr [100], int& Length){
    cout << "\nPlease Enter Number Of Elements\n";
    cin >> Length;
    cout << "\n Enter Array elements" << endl;
    for (int i = 0; i < Length ; i++)
    {
        cout << "Element ["<< i +1 <<"] : " ;
        cin >> arr[i];
    }

}

void PrintArray (int arr[100], int Length){
    cout << "Element ";
    for (int i = 0 ; i < Length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int TimesReapetes (int Number, int arr[100], int Length){
    int Counter = 0;
    for (int i = 0 ; i < Length ; i++)
    {
        if (Number == arr[i])
        {
            Counter ++;
        }
    }
    return Counter;
}

int main()
{
    int arr[100], Length, CheckNumber;
    ReadyArray(arr , Length);
    PrintArray(arr , Length);
    CheckNumber = ReadPositiveNumber("");
    cout << "\nNumber " <<TimesReapetes( CheckNumber, arr , Length);
    return 0;
}
