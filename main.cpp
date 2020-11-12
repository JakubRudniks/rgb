#include <iostream>
#include <bitset>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

	int main()
	
	{
		long rgb =0x12345678;
		kolor(rgb);
		int a = 0x1;
		int b = 2;
		int c = 2 | 1;
	
 {
    int kolor = 0x00123456;
    int red = 0x00ff0000;
    int green = 0x0000ff00;
    int blue = 0x000000ff;
    int przezroczysty = 0xff000000;
    
    	cout<<"Czerwony:"<<hex<<(kolor & red)<<dec<<(kolor & red)<<endl;
    	cout<<"Zielony:"<<hex<<(kolor & green)<<dec<<(kolor & green)<<endl;
    	cout<<"Niebieski:"<<hex<<(kolor & blue)<<dec<<(kolor & blue)<<endl;
    	cout<<"Przezroczystosc:"<<hex<<(kolor & przezroczysty)<<dec<<(kolor & przezroczysty)<<endl;
    }
	
    	

    return 0;
}
