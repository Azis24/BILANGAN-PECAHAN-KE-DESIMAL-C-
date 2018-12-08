#include<iostream>
using namespace std;
typedef struct pecahan{
	int pb;
	int py;
    };
int main(int argcc, char *argv[])
{
	system ("color B");
	pecahan p1, p2;
	cout<<"******************************************"<<endl;
	cout<<" MENGUBAH BILANGAN PECAHAN KE BILANGAN BULAT "<<endl;
	cout<<"******************************************"<<endl;
	cout<<" MASUKAN PEMBILANG : ";
	cin>>p1.pb;
	cout<<" MASUKAN PENYEBUT : ";
	cin>>p1.py;
	cout<<"\t     "<<p1.pb <<endl;
	cout<<"\tp1 = - "<<endl;
	cout<<"\t     "<< p1.py<<endl;
		if ("/")
{
	cout<<" HASILNYA = "<<(p1.pb)/(p1.py)<<endl;
}
return 0;
}
