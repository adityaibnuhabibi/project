#include <iostream>
#include <conio.h>
using namespace std;
void pilihan(int y);
void input(int nilai[], char unit[][100], int banyakdata);
void kasir(int nilai[], char unit[][100], int banyakdata);
int main()
{
	
	bool a,menu;
	do{
	cout<<"LOGIN";
	{
		string x;
	    string y="";
	    char c;
	    
	cout<<"\nUSERNAME\t:";cin>>x;
	cout<<"PASSWORD\t:";
	c=getch();
	while(c!='\r'){
		c=getch();
		if(c=='\b'){
			if(y.size()!=0){
				cout<<"\b \b";
				y.erase(y.size()-1,1);
			}
			continue;
		}else if((c<='9'&&c>='0')||(c>='a'&&c<='z')||(c>='A'&& c<='Z')){
			y+=c;
			cout<<"*";
		}else continue;
	}
	
	
	if(x=="kelompok6"&& y=="kelasa")
	{
		int x;
		cout<<"\nLOGIN BERHASIL\n";	
		cout<<"TEKAN ENTER UNTUK MELANJUTKAN";
	    getchar();
	    getchar();
	    system("cls");
	    do{	
		cout<<"Menu:";
	    cout<<"\n1.INPUT DATA MASTER";
	    cout<<"\n2.KASIR";
	    cout<<"\n3.EXIT";
	    cout<<"\nMasukkan Pilihan Anda\t:";cin>>x;
	    pilihan(x);
        cout<<"Kembali Ke Menu input 1 jika Keluar input 2\n";
        cin>>x;
        system("cls");
        if (x==1)
        menu=1;
        else
        exit(0);
	}while (menu);
	}
	    else
	    {
		cout<<"\nLOGIN SALAH";
	    cout<<"\nTEKAN ENTER UNTUK LOGIN KEMBALI";
	    getchar();
	    getchar();
	    system("cls");
	    a=1;}
	}
}
while (a);
}
void pilihan(int y)
{
	switch(y)
	{
		int nilai[100],banyakdata;
		char unit[100][100];
		case 1://input//
		input(nilai,unit,banyakdata);
		break;
		case 2://kasir//
		kasir(nilai,unit,banyakdata);
		break;
		case 3://exit//
		exit(0);
	}
	
		
}
void input(int nilai[], char unit[][100], int banyakdata)
{
	
	cout<<"jumlah data\t=";cin>>banyakdata;
	if (banyakdata>0)
	{
	for(int i=1;i<=banyakdata;i++)
	{cout<<"NO.POLI/UNIT KE-"<<i<<endl;
	cout<<"POLI/UNIT\t:";cin>>unit[i];
    cout<<"NIlAI(Rp)\t:";cin>>nilai[i];
    cout<<endl;
    }
}
}
void kasir(int nilai[], char unit[][100], int banyakdata)
{
	int i,z,r,x;
	cout<<"KASIR\n";
	cout<<"NO RM\t:";cin>>x;
	{for(i=1; i<banyakdata; i++)
		    cout<<endl;
			cout<<"NO POLI/UNIT\t:";cin>>i;
			cout<<"POLI/UNIT\t:";cout<<unit[i];
            cout<<"\nNILAI(Rp)\t:";cout<<nilai[i];
            cout<<"\nBPJS(1)/UMUM(2)\t:";cin>>z;
    if (z==1)
    cout<<"Tidak dipungut biaya"<<endl;
    else if(z==2)
	{cout<<"BAYAR\t:";cin>>r;
	cout<<"KEMBALI\t:"<<r-nilai[i]<<endl;}
    else
    cout<<"kode salah";	
	
}
}
