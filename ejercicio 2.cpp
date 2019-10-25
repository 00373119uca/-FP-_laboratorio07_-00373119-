/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int caso1(){
	int n1, n2;
	cout<<"digite el primer numero: ";cin>>n1;
	cout<<"digite el segundo numero: ";cin>>n2;
	
	if(n1>n2){
		cout<<n1<<"  es mayor que "<<n2<<endl;
	}
	else if(n1<n2){
		cout<<n1<<" es menor que "<<n2<<endl;
	}
	else if(n1==n2){
		cout<<n1<<"  es igual a "<<n2<<endl;
	}	
}

int caso2(){
	int n1, n2, s1, s2;
	cout<<"digite el primer numero: ";cin>>n1;
	cout<<"digite el segundo numero: ";cin>>n2;
	cout<<"digite el primer numero: ";cin>>s1;
	cout<<"digite el segundo numero: ";cin>>s2;
	
	if(n1>n2){
		cout<<n1<<"es mayor que"<<n2<<endl;
		
	}
	else if(n1<n2){
		cout<<n1<<"  es menor que "<<n2<<endl;
	}
	else if(n1==n2){
		cout<<n1<<"  es igual a "<<n2<<endl;
	}
	
	if(s1>s2){
		cout<<s1<<"  es mayor que "<<s2<<endl;
	}
	else if(s1<s2){
		cout<<s1<<"  es menor que "<<s2<<endl;
	}
	else if(s1==s2){
		cout<<s1<<"   es igual a "<<s2<<endl;
	}		
	
}

int caso3(){
	int n1, n2, s1, s2, r1, r2;
	cout<<"digite el primer numero: ";cin>>n1;
	cout<<"digite el segundo numero: ";cin>>n2;
	cout<<"digite el primer numero: ";cin>>s1;
	cout<<"digite el segundo numero: ";cin>>s2;
	cout<<"digite el primer numero: ";cin>>r1;
	cout<<"digite el segundo numero: ";cin>>r2;
	
	if(n1>n2){
		cout<<n1<<"  es mayor que "<<n2<<endl;
	}
	else if(n1<n2){
		cout<<n1<<" es menor que "<<n2<<endl;
	}
	else if(n1==n2){
		cout<<n1<<" es igual a "<<n2<<endl;
	}
	
	if(s1>s2){
		cout<<s1<<" es mayor que "<<s2<<endl;
	}
	else if(s1<s2){
		cout<<s1<<" es menor que "<<s2<<endl;
	}
	else if(s1==s2){
		cout<<s1<<" es igual a "<<s2<<endl;
	}
	
	if(r1>r2){
		cout<<r1<<" es mayor que "<<r2<<endl;
	}
	else if(r1<r2){
		cout<<r1<<" es menor que "<<r2<<endl;
	}
	else if(r1==r2){
		cout<<r1<<" es igual a "<<r2<<endl;
	}				
}


int main(){
	int c;
	cout<<"observando que numero es mayor,menor e igual"<<endl;
	cout<<"digite el numero de casos a evaluar : ";cin>>c;
	
	while(c>0){
		if(c==1){
			caso1();
			cout<<"digite el numero de casos a evaluar: ";cin>>c;
		}
		else if(c==2){
			caso2();
			cout<<"digite el numero de casos a evaluar: ";cin>>c;
		}
		else if(c==3){
			caso3();
			cout<<"digite el numero de casos a evaluar: ";cin>>c;
		}
		else if(c>3){
			cout<<"maximo tres casos"<<endl;
			cout<<"digite el numero de casos a evaluar: ";cin>>c;
		}				
	}	
	return 0;
}