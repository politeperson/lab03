#include <iostream>

using namespace std;

int main(){
  string countries[] = { "Bra","Col","Uru","Chi","Arg","Per","Par","Ecu","Bol","Ven" };
  string auxcoun[] = { "Bra","Col","Uru","Chi","Arg","Per","Par","Ecu","Bol","Ven" };
  int per[] = {36,25,24,23,23,21,21,20,10,7};
  int aux[] = {36,25,24,23,23,21,21,20,10,7};
  cout << "Tabla de posiciones actual: " << endl;
  for(int i = 0; i < 10; i++){
    cout << countries[i] << " : " << per[i] << endl;
  }
  cout << endl;
  int mayor = per[5];
  /*Cree cinco for ya que en la fecha 16 se jugaran 5 partidos que son los siguientes:
    Bolivia vs Chile
    Colombia vs Brasil
    Ecuador vs Peru
    Argentina vs Venezuela
    Paraguay vs Uruguay
   las condicionales if son para evaluar lo siguiente:
   -si el iterador es 0 el primer equipo habra ganado
  -si el iterador es 1 ambos equipos habran ganado
  -si el iterador es 2 el segundo equipo gana*/

  for(int i = 0; i < 3; i++){
    if(i == 0){
      aux[5] += 3;
    }
    else if(i == 1){
      aux[5] += 1;
      aux[7] += 1;
    }
    else{
      aux[7] += 3;
    }
    for(int j = 0; i < 3; i++){
      if(j == 0){
	aux[1] += 3;
      }
      else if(j == 1){
	aux[0] += 1;
	aux[1] += 1;
      }
      else{
	aux[0] += 3;
      }
      for(int k = 0; i < 3; i++){
	if(k == 0){
	  aux[6] += 3;
	}
	else if(k == 1){
	  aux[6] += 1;
	  aux[2] += 1;
	}
	else{
	  aux[2] += 3;
	}
	for(int l = 0; i < 3; i++){
	  if(l == 0){
	    aux[4] += 3;
	  }
	  else if(l == 1){
	    aux[4] += 1;
	    aux[9] += 1;
	  }
	  else{
	    aux[9] += 3;
	  }
	  for(int m = 0; i < 3; i++){
	    if(m == 0){
	      aux[8] += 3;
	    }
	    else if(m == 1){
	      aux[8] += 1;
	      aux[3] += 1;
	    }
	    else{
	      aux[3] += 3;
	    }
	    if(aux[5] == mayor){//aqui evaluo si Peru obtiene mejor puntaje que su anterior partido
	      int loc,min;
	      mayor = aux[5];
	      /*uso el ordenamiento: selection sort; para mostrar la tabla con las posiciones respectivas*/
	      cout << "Tabla para que Peru llegue al mundial: " << endl;
	      for(int i = 0; i < 9;i++){
		min = aux[i];
		loc = i;
		for(int j = i+1 ; j < 10 ; j++){
		  if(min < aux[j]){
		    min = aux[j];
		    loc = j;
		  }
	      }
		int temp = aux[i];
		aux[i]=aux[loc];
		aux[loc]=temp;
		string tempi = countries[i];//aqui tambien intercambio el nombre del pais que respectivamente gano empato o perdio
		countries[i]=countries[loc];
		countries[loc]=tempi;
	      }
	      //aqui imprimo la tabla ya ordenada
	      for(int i = 0; i < 10; i++){
		cout << countries[i] << " : " << aux[i] << endl;
	      }
	      cout << endl;
	    }
	    //aqui lo que hago es reiniciar la tabla aux a la original para ver nuevas posibilidades
	    for(int i = 0; i < 10; i++){
	      aux[i] = per[i];
	      countries[i] = auxcoun[i];
	    }
	  }
	}
      }
    }
  }
  return 0;
}
