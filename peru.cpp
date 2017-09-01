#include <iostream>

using namespace std;

int main(){
  string countries[] = { "Bra","Col","Uru","Chi","Arg","Per","Par","Ecu","Bol","Ven" };
  int per[] = {36,25,24,23,23,21,21,20,10,7};
  int aux[] = {36,25,24,23,23,21,21,20,10,7};
     
  for(int i = 0; i < 10; i++){
    cout << countries[i] << " : " << per[i] << endl;
  }
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
    for(int i = 0; i < 3; i++){
      if(i == 0){
	aux[1] += 3;
      }
      else if(i == 1){
	aux[0] += 1;
	aux[1] += 1;
      }
      else{
	aux[0] += 3;
      }
      for(int i = 0; i < 3; i++){
	if(i == 0){
	  aux[6] += 3;
	}
	else if(i == 1){
	  aux[6] += 1;
	  aux[2] += 1;
	}
	else{
	  aux[2] += 3;
	}
	for(int i = 0; i < 3; i++){
	  if(i == 0){
	    aux[4] += 3;
	  }
	  else if(i == 1){
	    aux[4] += 1;
	    aux[9] += 1;
	  }
	  else{
	    aux[9] += 3;
	  }
	  for(int i = 0; i < 3; i++){
	    if(i == 0){
	      aux[8] += 3;
	    }
	    else if(i == 1){
	      aux[8] += 1;
	      aux[3] += 1;
	    }
	    else{
	      aux[3] += 3;
	    }
	    int loc,min;
	    /*selection sort*/
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
	      string tempi = countries[i];
	      countries[i]=countries[loc];
	      countries[loc]=tempi;
	    }
	    /*end*/
	    for(int i = 0; i < 10; i++){
	      cout << countries[i] << " : " << aux[i] << endl;
	    }
	    cout << endl;
	    for(int i = 0; i < 10; i++){
	      aux[i] = per[i];
	    }
	  }
	}
      }
    }
  }
  
  
  return 0;
}
