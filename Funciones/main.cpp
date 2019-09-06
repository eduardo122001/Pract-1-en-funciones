#include <iostream>

using namespace std;


void ImprimirNumerosSeparados(int num){

    int a;
    int b;
    int c;
    int d;
    int e;
    a=num/10000;
    b=(num/1000)-(a*10);
    c=(num/100)-((a*100)+(b*10));
    d=(num/10)-((a*1000)+(b*100)+(c*10));
    e=(num/1)-((a*10000)+(b*1000)+(c*100)+(d*10));
    cout<<a<<'\t'<<b<<'\t'<<c<<'\t'<<d <<'\t'<<e<<endl;

   }
int NumeroDeDigitos(int g){
    int div=1;
    int cont=0;
    while(div<g){
        div=div*10;
        cont++;
    }
    return cont;

}
bool Polindrome5Digitos(int num){
    int a,b,c,d,e;
    a=num/10000;
    b=(num/1000)-(a*10);
    c=(num/100)-((a*100)+(b*10));
    d=(num/10)-((a*1000)+(b*100)+(c*10));
    e=(num/1)-((a*10000)+(b*1000)+(c*100)+(d*10));
    //tambien se puede poner la expresion y como en la siguiente linea y el maquina me puede regresar verdader o falsoo
    return ((a==e) && (b=d));//{
    //    return true;
    //}
    //return false;
}

int SerieFibonacci(int g){
    int d=1;
    int x=1;
    int y=0;
    int z=0;
    int r=2;
    while(d){
        z=x+y;

        y=x;
        x=z;
        if(r>g){
        d--;}
        r++;


    }
    return z;


}

bool esNumero(char a){
    int n =static_cast<int>(a);

    if((47<n)&&(n<58))
        return true;
    else
        return false;

}

char ConvAmayor(int m){
    m-=32;
    char b =static_cast<char>(m);
    return b;
}
char ConvAmenor(int m){
    m+=32;
    char b =static_cast<char>(m);
    return b;
}





bool EsLetra(char a){
    int m =static_cast<int>(a);

    if((96<m)&&(m<123)){

        cout<<ConvAmayor(m)<<endl;
        return true;
    }

    if((64<m)&&(m<91)){

        cout<<ConvAmenor(m)<<endl;
        return true;
    }
    return false;


}



int main()
{   ImprimirNumerosSeparados(12345);

    cout<<NumeroDeDigitos(12345)<<endl;
    cout<<Polindrome5Digitos(12345)<<endl;
    cout<<SerieFibonacci(5)<<endl;
    cout<<esNumero('4')<<endl;
    cout<<esNumero('a')<<endl;
    cout<<EsLetra('E')<<endl;
    cout<<EsLetra('a')<<endl;


}
