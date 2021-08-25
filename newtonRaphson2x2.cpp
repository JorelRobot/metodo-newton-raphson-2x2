#include <cstdio>
#include <cmath>

int main(){
	
	printf("\n\t.:NEWTON RAPHSON 2X2:.");
	
	int opc;
	int iter = 0;
		
	float x = 1.5;
	float y = 3.5;
	
	/*	Ecuaciones:
		
		x^2 + xy = 10
		y + 3xy^2 = 57
		
		x^2 + xy - 10 = 0
		y + 3xy^2 - 57 = 0
	*/
	
	float du_dx;
	float du_dy;
	float dv_dx;
	float dv_dy;
	
	float u;
	float v;
	
	float determinante;
	
	do{
		
		printf("\n-------------ITERACION No. %i-------------\n", iter);
		
		du_dx = 2*x + y;
		du_dy = x;
		dv_dx = 3*(pow(y, 2));
		dv_dy = 6*x*y + 1;
		
		printf("\ndu/dx = %f", du_dx);
		printf("\ndu/dy = %f", du_dy);
		printf("\ndv/dx = %f", dv_dx);
		printf("\ndv/dy = %f", dv_dy);
		
		printf("\n\n");	
		
		u = (pow(x, 2) + x*y)- 10;
		v = (y + 3*x*(pow(y, 2))) - 57;
		
		determinante = (du_dx*dv_dy) - (du_dy*dv_dx);
		
		printf("\nu = %f", u);
		printf("\nv = %f", v);
		printf("\nDeterminante = %f", determinante);
		
		printf("\n\n");
		
		x = x - ((u*dv_dy - v*du_dy) / determinante);
		y = y - ((v*du_dy - u*dv_dx) / determinante);
		
		printf("\nNueva x = %f", x);
		printf("\nNueva y = %f", y);
		
		printf("\n\nContinuar: ");
		scanf("%i", &opc);	
		
		iter++;
		
		printf("\n\n");
		
	}while (opc == 1);

	
	return 0;
}
