#include <stdio.h>
#include <stdlib.h>

struct funcionario{
    int anos;
    char estado_civil;
    float salario;
};


void teste(struct funcionario empregado){
    
    float salario_final;
    
    if(empregado.anos>5){
        if(empregado.estado_civil == 'c'){
           salario_final = empregado.salario + (empregado.salario*0.10);
        } else{
         salario_final = empregado.salario + (empregado.salario*0.08);   
         
        }
    } else{
                 salario_final = empregado.salario + (empregado.salario*0.08);   
    }
    
    float taxa_aumento = ((salario_final - empregado.salario)/empregado.salario)*100;
    
  printf("salario final: %.2f taxa de aumento: %.2f porcento ", salario_final,taxa_aumento);
}

int main(){
    
    struct funcionario empregado;
    
    printf("diga quantos anos de empresa ");
    scanf("%d", &empregado.anos);
    printf("estado civil ");
    scanf("%s", &empregado.estado_civil);
    printf("salario ");
    scanf("%f", &empregado.salario);
    
teste(empregado);    

return 0;