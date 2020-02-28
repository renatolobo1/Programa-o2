#include <iostream>

using namespace std;

int main(){

    int dia1=27, 
        mes1=2, 
        anoinicio=2000, 
        dia2=28, 
        mes2=02, 
        anoatual=2019, 
        diaTotalAno=0,
        quantAnoBissexto = 0 ,
        quantDiasAnoAtual=0,
        variavel1=0;

    

    // Pega o AnoInicio com o AnaAtual e vê quantos anos Bissextos teve, 
    // Não conta nem o ano inicio e nem o atual
    for(int i = anoinicio+1; i < anoatual; i++){ 
        
        if(i % 4 == 0 && (i % 400 == 0 || i % 100 != 0)){
            quantAnoBissexto = quantAnoBissexto + 1;
        } 
    }

// Pegar a quantidade de dia do ano inicial (Esse ano e quebrado)
    switch (mes1)
    {
    case 01:
        quantDiasAnoAtual=(31-dia1)+334;
        break;
    case 02:
       quantDiasAnoAtual=(28-dia1)+306;
        break;    
    case 03:
        quantDiasAnoAtual=(31-dia1)+275;
        break;
    case 04:
        quantDiasAnoAtual=(30-dia1)+245; 
        break;
    case 05:
        quantDiasAnoAtual=(31-dia1)+214;
        break;
    case 06:
        quantDiasAnoAtual=(30-dia1)+184;
        break;
    case 07:
        quantDiasAnoAtual=(31-dia1)+153;
        break;
    case 8:
        quantDiasAnoAtual=(31-dia1)+122;
        break;
    case 9:
        quantDiasAnoAtual=(30-dia1)+92;
        break;
    case 10:
        quantDiasAnoAtual=(31-dia1)+61;
        break;
    case 11:
        quantDiasAnoAtual=(30-dia1)+31;
        break;
    case 12:
        quantDiasAnoAtual=(31-dia1);
        break;
    default:
        break;
    }

    // Pegar a quantidade de dia do ano inicial (Esse ano e quebrado)
        // if (mes1==01){
        //     quantDiasAnoAtual=(31-dia1)+334; 
        // } else if (mes1==2){
        //    quantDiasAnoAtual=(28-dia1)+306; 
        // }else if (mes1==3){
        //    quantDiasAnoAtual=(31-dia1)+275; 
        // }else if (mes1==4){
        //    quantDiasAnoAtual=(30-dia1)+245; 
        // }else if (mes1==5){
        //    quantDiasAnoAtual=(31-dia1)+214; 
        // }else if (mes1==6){
        //    quantDiasAnoAtual=(30-dia1)+184; 
        // }else if (mes1==7){
        //    quantDiasAnoAtual=(31-dia1)+153; 
        // }else if (mes1==8){
        //    quantDiasAnoAtual=(31-dia1)+122; 
        // }else if (mes1==9){
        //    quantDiasAnoAtual=(30-dia1)+92; 
        // }else if (mes1==10){
        //    quantDiasAnoAtual=(31-dia1)+61; 
        // }else if (mes1==11){
        //    quantDiasAnoAtual=(30-dia1)+31; 
        // }else if (mes1==12) {
        //    quantDiasAnoAtual=(31-dia1); 
        // }


        // Olhando o Ano se e bissexto e caso for feverreiro ver se e necessario acrescentar + 1
         if(anoinicio % 4 == 0 && mes1 <=2 &&  (anoinicio % 400 == 0 || anoinicio % 100 != 0)){
            if ( dia1<=28){
               quantDiasAnoAtual = quantDiasAnoAtual +1  ;
            } else {
                quantDiasAnoAtual = quantDiasAnoAtual;
            }
                
        } 
    
    // Pegar a quantidade de dia do ano atual 
        if (mes2==01){
            variavel1=dia2; 
        } else if (mes2==2){
           variavel1=dia2+31; 
        }else if (mes2==3){
           variavel1=dia2+59; 
        }else if (mes2==4){
           variavel1=dia2+90; 
        }else if (mes2==5){
           variavel1=dia2+120; 
        }else if (mes2==6){
           variavel1=dia2+151; 
        }else if (mes2==7){
           variavel1=dia2+181; 
        }else if (mes2==8){
           variavel1=dia2+212; 
        }else if (mes2==9){
           variavel1=dia2+243; 
        }else if (mes2==10){
           variavel1=dia2+273; 
        }else if (mes2==11){
           variavel1=dia2+304; 
        }else if (mes2==12) {
           variavel1=dia2+334; 
        }
       



    diaTotalAno = (((anoatual-1)-(anoinicio)) * 365) + quantAnoBissexto;    
    std::cout << variavel1+quantDiasAnoAtual+diaTotalAno << "\n";

    return 0;
}