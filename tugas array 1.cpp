#include <iostream>
#include <string>

using namespace std;

int main(){
 //mendeklarasikan array
 int angka[5]={9,30,46,73,2};

 //menggunakan perulangan untuk menampilkan array
 for(int i = 0; i<=4; i++){
  cout<<"Nilai dari index ke-["<<i<<"] : "<<angka[i];
  cout<<endl;
 }
 cout<<"\n\n";
 //menampilkan array tanpa perulangan
 cout<<"nilai dari index ke-[0] : "<<angka[0]<<endl;
 cout<<"nilai dari index ke-[1] : "<<angka[1]<<endl;
 cout<<"nilai dari index ke-[2] : "<<angka[2]<<endl;
 cout<<"nilai dari index ke-[3] : "<<angka[3]<<endl;
 cout<<"nilai dari index ke-[4] : "<<angka[4]<<endl;
}
