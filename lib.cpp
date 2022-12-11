#Includi "lib.h"

float array(float a[], int dim){
    for(int i=0; i<dim; i++){
        if(a[0]<=a[i]){
            a[0]=a[i];
        }altro{
            a[i]=a[0];
        }
    }
    return a[0];
}
