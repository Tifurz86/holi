#include <iostream>
using namespace std;
int main() {

		// pago total empresario = cotizacion + salario bruto
		const double COTIZACION = 1.3435; // social 25,5675%
		// los siguiente "impuestos" son a descontar del salio bruto (bruto = dato a pedir)
		const double IRPF = 0.1116985; // retencion 11,169%
		const double CONTINGENCIAS = 0.0470023175360226; // comunes 4,70023175360226% 
		const double FORMACION = 0.016498169482417; // desempleo 1,6498169482417%
		// constantes para la segunda parte del programa si no han tirado del cable
		const double HIPOTECA=0.06, LUZ=0.5702, AGUA=0.10, TELEFONO=0.23, GASOLINA=0.59, COMIDA=0.07, OCIO=0.1843;
		
		//"cajones" variables para guardar la informacion que necistamos para almacenar y mostrar en nuestro programa
		
		
		double salario_neto, salario_bruto, social, retencion, cotizacion, comunes, desempleo;
		
	
		// "cajones" para guardar la informacion que pedimos al cliente y profundizar mas en el programa
		
		int  hipoteca, luz, agua, telefono, gasolina, comida, ocio, imp_hipoteca, imp_luz, imp_agua, imp_telefono, imp_gasolina, imp_comida, imp_ocio;
		
		double total_impuestos;
			
			//dato que nos tiene que aportar el usuario para poder mostrarle el resto de la informacion:
			
			cout<<"\n 	Ingrese su salario bruto mensual en € : ";
			cin>>salario_bruto;
						
			//formula mostrar lo que el empresario paga por cliente en total:
				
			social = salario_bruto * COTIZACION;
			cout<<"\n 	El empresario paga por usted un total de: "<<social;cout<<" €"<<endl;
				
			//formula para descontar "impuestos" del salario en bruto que nos proporciona el cliente : irpf, contigencias comunes y formacion y desempleo:
				
			retencion = salario_bruto * IRPF;
			cout<<"\n 	Su retencion del IRPF es de: "<<retencion;cout<<" €"<<endl;
			
			comunes = salario_bruto * CONTINGENCIAS;
			cout<<"\n 	El pago que realiza por contingencias comunes es de: "<<comunes;cout<<" €"<<endl;
			
			desempleo = salario_bruto * FORMACION;
			cout<<"\n 	El pago que realiza por formacion y desempleo es de: "<<desempleo;cout<<" €"<<endl;
			
			//formula para saber el salario neto que cobra el cliente despues de la deducciones
			
			salario_neto = salario_bruto - retencion - comunes - desempleo;
			cout<<"\n ***************************************************************"<<endl;
			cout<<"\n 	Usted recibe un salario neto de: "<<salario_neto;cout<<" €"<<endl;
			cout<<"\n ***************************************************************"<<endl;
			
			// datos para profundizar mas en los impuestos
			

			cout<<"\n 	calcule el total de impuestos que gasta aproximadamente en un mes:"<<endl;
			cout<<""<<endl;
	
			cout<<"\n 	introduzca en € la cantidad que paga por su hipoteca: "<<endl; //IBI
			cin>>hipoteca;
			imp_hipoteca = hipoteca * HIPOTECA;
			cout<<"\n 	paga de IBI por su hipoteca: "<<imp_hipoteca;cout<<" €"<<endl;
			
			cout<<"\n 	introduzca en € la cantidad que paga en el recibo de luz: "<<endl;
			cin>>luz;
			imp_luz = luz * LUZ;
			cout<<"\n 	paga "<<imp_luz;cout<<"€ de impuestos por su recibo de luz."<<endl;
			
			cout<<"\n 	introduzca en € la cantidad que paga en el recibo del agua: "<<endl;
			cin>>agua;
			imp_agua = agua * AGUA;
			cout<<"\n 	paga "<<imp_agua;cout<<"€ de impuestos por su recibo de agua."<<endl;
			cout<<""<<endl;
			
			cout<<"\n 	introduzca en € la cantidad que paga por sevicios de telefonia e internet: "<<endl;
			cin>>telefono;
			imp_telefono = telefono * TELEFONO;
			cout<<"\n 	paga "<<imp_telefono;cout<<"€ de impuestos por su recibo de telefonia e internet."<<endl;
			
			cout<<"\n 	introduzca en € la cantidad que paga en gasolina: "<<endl;
			cin>>gasolina;
			imp_gasolina = gasolina * GASOLINA;
			cout<<"\n 	paga "<<imp_gasolina;cout<<"€ de impuestos en gasolina."<<endl;
			
			cout<<"\n 	introduzca en € la cantidad que paga en comida: "<<endl;
			cin>>comida;
			imp_comida = comida * COMIDA;
			cout<<"\n 	paga "<<imp_comida;cout<<"€ de impuestos en comida."<<endl;
			
			cout<<"\n 	introduzca en € la cantidad que paga en ocio: "<<endl;
			cin>>ocio;
			imp_ocio = ocio * OCIO;
			cout<<"\n 	paga "<<imp_ocio;cout<<"€ de impuestos en ocio."<<endl;
			
			//formula total impuestos
			
			total_impuestos = social - salario_bruto + retencion + comunes + desempleo + imp_hipoteca + imp_luz + imp_agua + imp_telefono + imp_gasolina + imp_comida + imp_ocio;
			cout<<"\n ****************************************************************************"<<endl;
			cout<<"\n 	En total paga "<<total_impuestos;cout<<"€ de impuestos aproximadamente en un mes"<<endl;
			cout<<"\n ****************************************************************************"<<endl;
			
}
