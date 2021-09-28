#include <iostream>
#include <conio.h>
#include <sstream>
using namespace std;

class Siam{
    private :
        string nama;
        string nim;
        string jurusan;
    public :
        
        void setNama(string nama){
            cout<<"Masukan Nama     = " ;
            getline(cin,nama);
            this->nama=nama;}
            
        void setNim(string nim){
            cout<<"Masukan NIM      = " ;
            getline(cin,nim);
            this->nim=nim;}
            
        void setJurusan(string jurusan){
            cout<<"Masukan Jurusan  = ";
            getline(cin,jurusan);
            this->jurusan=jurusan;}
            

};

class Matkul{
    private :
        string namaMatkul;
        string kode,pilihan1;
        string CCID1,CCID2,CCID3,CCID4,CCID5,CCID6;
        int pilihan;
        int totalSks,sum;
        string ipk;
        float ip;
        int sks,sksAtas,sksBawah;
    public :
        void setIp(float ip){
            cout<<"Masukan IP       = " ;
            getline(cin,ipk);
            stringstream(ipk)>>ip;
            this->ip=ip;}
        
        void setSks(){
            if(ip>=3.00 && ip<=4.00){ 
                sksAtas=24,sksBawah=20;
        	}else if(ip>=2.00 && ip<=2.99){
    		    sksAtas=19,sksBawah=15;
    	    }else if(ip>=1.00 && ip<=1.99){
    		    sksAtas=14,sksBawah=10;
    	    }else{
                cout<<"ERROR!! IP HANYA 0.00 - 4.00" ;
                return;
            }
	         cout<<"SKS yang dapat diambil    = "<<sksBawah<<"-"<<sksAtas<<endl; 
        }
        void addMatkul(){
            cout<<"===================================================================="<<endl;
            cout<<"\t\t Mata Kuliah             "<<endl; 
            cout<<"1.Algoritma Struktur Data      = 5 sks Kode CCID1"<<endl;
            cout<<"2.Pemrograman Lanjut           = 5 sks Kode CCID2"<<endl;
            cout<<"3.Agama                        = 3 sks Kode CCID3"<<endl;
            cout<<"4.Statistika                   = 3 sks Kode CCID4"<<endl;
            cout<<"5.Basis Data Terapan           = 5 sks Kode CCID5"<<endl;
            cout<<"6.Matematika Komputasi Lanjut  = 4 sks Kode CCID6"<<endl;
           
        do{
            cout<<"Pilih Mata Kuliah = ";
            getline(cin,pilihan1);
            stringstream(pilihan1)>>pilihan;
            cout<<"----------------------------------"<<endl;
                
                switch(pilihan){

                    case 1:
                        totalSks = 5;
                        kode = CCID1;
                        cout<<"Mata Kuliah yang diambil Algoritma Struktur Data"<<endl;
                        cout<<"Total SKS Mata Kuliah adalah "<<totalSks<<endl;
                        break;
                    case 2:
                        totalSks = 5;
                        kode = CCID2;
                        cout<<"Mata Kuliah yang diambil Pemrograman Lanjut"<<endl;
                        cout<<"Total SKS Mata Kuliah adalah "<<totalSks<<endl;
                        break;
                    case 3:
                        totalSks = 3;
                        kode = CCID2;
                        cout<<"Mata Kuliah yang diambil Agama"<<endl;
                        cout<<"Total SKS Mata Kuliah adalah "<<totalSks<<endl;
                        break;
                    case 4:
                        totalSks = 3;
                        kode = CCID2;
                        cout<<"Mata Kuliah yang diambil Statistika"<<endl;
                        cout<<"Total SKS Mata Kuliah adalah "<<totalSks<<endl;
                        break;
                    case 5:
                        totalSks = 5;
                        kode = CCID2;
                        cout<<"Mata Kuliah yang diambil Basis Data Terapan"<<endl;
                        cout<<"Total SKS Mata Kuliah adalah "<<totalSks<<endl;
                        break;
                    case 6:
                        totalSks = 4;
                        kode = CCID2;
                        cout<<"Mata Kuliah yang diambil Matematika Komputasi Lanjut Kode "<<endl;
                        cout<<"Total SKS Mata Kuliah adalah "<<totalSks<<endl;
                        break;
                        default : cout<<" "<<endl;
                }
                    sum+=totalSks;
                    cout<<"Total SKS anda = "<<sum<<endl;
                    cout<<"----------------------------------"<<endl;
        }while(sum<=sksAtas);
    }
};

int main(){
    Siam *mhs1 = new Siam();
    Matkul *maha1 = new Matkul();
    
    mhs1->setNama("");
    mhs1->setNim("");
    mhs1->setJurusan("");
    maha1->setIp(0.0);
    maha1->setSks();
    maha1->addMatkul();
    cout<<"=========================================="<<endl;
    Siam *mhs2 = new Siam();
    Matkul *maha2 = new Matkul();
    
    mhs2->setNama("");
    mhs2->setNim("");
    mhs2->setJurusan("");
    maha2->setIp(0.0);
    maha2->setSks();
    maha2->addMatkul();
    cout<<"=========================================="<<endl;
    Siam *mhs3 = new Siam();
    Matkul *maha3 = new Matkul();
    
    mhs3->setNama("");
    mhs3->setNim("");
    mhs3->setJurusan("");
    maha3->setIp(0.0);
    maha3->setSks();
    maha3->addMatkul();
    cout<<"=========================================="<<endl;
       
getch();
return 0;   
}
