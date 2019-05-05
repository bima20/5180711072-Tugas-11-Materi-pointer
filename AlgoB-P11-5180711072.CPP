#include<iostream>
using namespace::std;

int jenis, harga[10], total=0, jml, status, bim;
string barang, member, nomor[5]={"A001","A002","A003","A007","A008"};
string identitas,nama[5]={"Bayu","irvan","Susiati","Diana","Roni"};
float diskon;

void garis(){
cout<<"\n________________________________________\n";
}
void cabang(){
    cout<<"\n Mau beli berapa banyak barang = "; cin>>jenis;
    for(int i=1;i<=jenis; i++){
    cout<<"\n Barang ke "<<i<<" = "; cin>>barang;
    cout<<" Jumlah barang = "; cin>>jml;
    cout<<" Harga barang = "; cin>>harga[i];
    total=total+(harga[i]*jml);}
    cout<<"\n Total harga = "<<total;
    garis();}
void sorting(){
for (int b=jenis-2; b>=0; b--){
    for (int i=0; i<=b; i++){
        if (harga[i]>harga[i]+1){
           bim=harga[i];
           harga[i]=harga[i]+1;
           harga[i+1]=bim;
        }}}
        cout<<"\n _____________Urutran harga barang setelah di sorting_____________ ";
    for (int a=1; a<=jenis; a++){
        cout<<"\n Harga barang ke "<<a<<" : "<<harga[a];
    }
}
void diskont(){
    diskon=total*0.05;

    garis();}
main(){
cout<<"\n\n________SELAMAT DATANG DI MINIMARKET________\n\n";
cout<<"\n Apakah anda member di toko ini(ya/tdk) = "; cin>>member;
if(member=="ya"||member=="Ya"||member=="YA")
{
    cout<<"\n Masukan nomor identitas = "; cin>>identitas;
    status=0;
    for(int i=0; i<5; i++)
    {
        if(identitas==nomor[i]){
            status=1;
                cout<<"\n Nama anda adalah = "<<nama[i];cout<<endl;}}
    cabang();
    sorting();
    diskont();
    cout<<"\n Total harga = "<<total;
    cout<<"\n Anda mendapat diskon sebesar = "<<diskon;
    cout<<"\n Harga setelah didiskon = "<<total-diskon;
    }
else if(member=="tdk"||member=="Tdk"||member=="TDK"){
    cout<<"\n nama Pelanggan = "; cin>>nama[5];
    cabang();
    cout<<"\n Total harga = "<<total;}
    }
