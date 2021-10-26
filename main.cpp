#include <iostream>
using namespace std;

int main (){
    int Nomor;
    cout<<"\t Cooking Conversion Calculator \n";
    cout<<"\t================================\n";
    cout<<"\n";
    cout<<"Tekan 1 untuk konversi dari Fahrenheit(F) ke Celcius(C) \n";
    cout<<"Tekan 2 untuk konversi dari Pound ke Kilogram(kg) \n";
    cout<<"Tekan 3 untuk konversi dari Ounce(oz) ke Gram \n";
    cout<<"Tekan 4 untuk konversi dari Cup ke Mililiter \n";
    cout<<"Tekan 5 untuk konversi dari Tablespoon(tbsp) ke Mililiter(ml) \n";
    cout<<"Tekan 6 untuk konversi dari Teaspoon(tsp) ke Mililiter(ml) \n";
    
    cout<<"Pilih salah satu : ";
    cin>>Nomor;

    switch(Nomor){
    int suhu, berat, volume;
        case 1:
            cout<<"Masukkan suhu dalam Fahrenheit : ";
            cin>>suhu;
            cout<<"Suhu dalam Celcius adalah : "<<(suhu-32)*5/9<<" Celcius";
            break;
        case 2:
            cout<<"Masukkan berat dalam Pound : ";
            cin>>berat;
            cout<<"Berat dalam kilogram adalah : "<<berat*0.45359<<" kg";
            break;
        case 3:
            cout<<"Masukkan berat dalam Ounce(oz) : ";
            cin>>berat;
            cout<<"Berat dalam gram adalah : "<<berat*28.3495<<" gram";
            break;
        case 4:
            cout<<"Masukan volume dalam Cup : ";
            cin>>volume;
            cout<<"Volume dalam mililiter adalah :"<<volume/0.0042268<<" gram";
            break;
        case 5:  
            cout<<"Masukkan volume dalam Tablespoon : ";
            cin>>volume;
            cout<<"Volume dalam mililiter adalah : "<<volume*15<<" ml";
            break;
        case 6:
            cout<<"Masukkan volume dalam Teaspoon : ";
            cin>>volume;
            cout<<"Volume dalam mililiter adalah : "<<volume*5<<" ml";
            break;
        default :
            cout<<"Input yang dimasukkan salah"<<endl;
    }
}
