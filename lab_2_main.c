#include <stdarg.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double math_func1(double  x, double  y, double  z){
		double  result;
    result =  (x - y / (z + pow(x, 2) / 4));
    
    return result;
}

double math_func2(double  x, double  y, double  z, double (*func)(double  x, double  y, double  z)){
		double  result;
    result = log(fabs((y - sqrt(fabs(x)) * func(x,y,z))));
    
    return result;
}

double average_var_args_pointer(int count, int *arr) {
    int i ;
		double sum = 0.0;	
    for (i = 0; i < count; i++) {
        sum += arr[i];
    }
    
    
    return sum / count;
}

double average_var_args(int count, ...) {
    va_list args;
		int i;
    double sum = 0.0;
    va_start(args, count);
		
    for ( i= 0; i < count; i++) {
        sum += va_arg(args, int);
    }
    va_end(args);
    
    return sum / count;
}

void task1(){
		int arr[10];
    int i ;
    srand(time(NULL));
    for (i=0; i < 10; i++) {
        arr[i] = rand() % 100 + 1; 
    }

    double avg = average_var_args(10, arr[0], arr[1], arr[2], arr[3], arr[4], 
                                 arr[5], arr[6], arr[7], arr[8], arr[9]);

}
void task2(){
		int arr[10];
    int i ;
		int* p=&arr;
    srand(time(NULL)+1);
    for (i=0; i < 10; i++) {
        arr[i] = rand() % 100 + 1; 
    }

    double avg_pointer = average_var_args_pointer(10, p);

}
void task3(){
		double x=1.2;
		double y=4.2;
		double z=1.1;
		double func_in_func=math_func2(x,y,z,math_func1);
}

void task4(){
		int arr1[10], arr2[10];
    int i ;
    srand(time(NULL));
    for (i=0; i < 10; i++) {
        arr1[i] = rand() % 100 + 1; 
				arr2[i] = rand() % 100 + 1; 
    }
		arr2[12]=999;
		int* p1=&arr1[0];
		int* p2=&arr2[9];
		int* r=p1-p2;
		*(p2+1)=999;
		
    

}
int main() {
		task1();
    task2();
		task3();
		task4();
}
