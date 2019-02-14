#include <iostream>
#include <stdlib.h>
using namespace std;
int main (){
	int c,d,f,g;
	string a,b;
	system ("color 06");
	cout<<"=============IT SERVICE================"<<endl;
	cout<<"========ACP SMKN 4 PADALARANG=========="<<endl;
	cout<<"==========Jl.Raya Padalarang==========="<<endl;
	
	int jumlah;
	char question1[] ="No.          	:";
	string question2 ="Tanggal      	:";
	string question3 ="Nama            :";
	string question4 ="jenis laptop 	:";
	string question5 ="No.Seri      	:";
	string question6 ="Telpon       	:";
	
	cout<<"Form Keluhan"<<endl;
	
	string question7 ="Keluhan laptop   :";
	string question8 ="Perkiraan Selesai:";
	char answer[80];
	string answer1;
	string answer2;
	string answer3;
	string answer4;
	string answer5;
	string answer6;
	string answer7;
	int answer8;
	cout<<question1;
	cin>>question1;
	cout<<question2;
	cin>>question2;
	cout<<question3;
	cin>>question3;
	cout<<question4;
	cin>>question4;
	cout<<question5;
	cin>>question5;
	cout<<question6;
	cin>>question6;
	cout<<"Form Keluhan"<<endl;
	cout<<question7;
	cin>>question7;
	cout<<question8;
	cin>>question8;

cout<<"Tampilkan Nota"<<endl;	


cout<<"Nama pelanggan :"<<endl;
getline(std::cin,answer1);
cout<<answer1<<endl;
cout<<"No.Barang"<<endl;
getline(std::cin,answer2);
cout<<answer2<<endl;
cout<<"Tanggal"<<endl;
getline(std::cin,answer3);
cout<<answer3<<endl;
cout<<"Jenis laptop :"<<endl;
getline(std::cin,answer4);
cout<<answer4<<endl;
cout<<"telepon :"<<endl;
getline(std::cin,answer5);
cout<<answer5<<endl;
cout<<"No.seri"<<endl;
getline(std::cin,answer6);
cout<<answer6<<endl;
cout<<"Keluhan Laptop"<<endl;
getline(std::cin,answer7);
cout<<answer7<<endl;


system("PAUSE");
return 0;	
	
}
