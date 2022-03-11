#include <iostream>

using namespace std;

string sec ;

void Toplam(){
int toplami=0;
int sayilar[10];


    for(int i=0;i<10;i++){
     cout<<"Deger giriniz: ";
     cin>>sayilar[i];
        }
    for(int i=0;i<10;i++){
        toplami+=sayilar[i];
    }
   cout<<" sayilarin toplami: "<<toplami<<endl;


}
void ucgen(){
float ucgenk = 0;// kenar
float ucgeny = 0;// yükseklik
float ucgenalan= 0; // alan
    cout<<"ucgenin yukseklik Degerini giriniz: ";
    cin>>ucgeny;
    cout<<"ucgenin kenarinin Degerini giriniz: ";
    cin>>ucgenk;
    ucgenalan=(ucgenk*ucgeny)/2 ;
    cout<<"ucgenin alani: "<<ucgenalan<<endl;



}


int main()
{

cout<<"hangi kodu istersiniz Toplam ,ucgenalan (lutfen burda yazanin aynisini yaziniz) :";
cin>>sec;
 if(sec=="Toplam"){
        Toplam();
 return 0 ;
 }
 if(sec=="ucgenalan"){
        ucgen();

 return 0 ;
 }







 return 0;
}


