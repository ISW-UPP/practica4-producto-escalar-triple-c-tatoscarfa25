#include <iostream>
using namespace std;
int main()
{
int	i;
	float vector1[3];
		float vector2[3];
			float vector3[3];
			int vectori,j,k,vectorf;
		
			cout<<"introduzca los valoresde x,y,z del arreglo 1 "<<endl;
	for(i=0;i<3;i++)
	{
		cout<<i<<"valor:"<<endl;
		cin>>vector1[i];
}
		cout<<"introduzca los valoresde x,y,z del arreglo 2 "<<endl;
	for(i=0;i<3;i++)
	{
		cout<<"valor:"<<i<<endl;
		cin>>vector2[i];
}
		cout<<"introduzca los valoresde x,y,z del arreglo 3 "<<endl;
	for(i=0;i<3;i++)
	{
		cout<<"valor:"<<i<<endl;
		cin>>vector3[i];
}
vectori=(vector2[1]*vector3[2])-(vector3[1] * vector2[2]);
j=(vector2[0]*vector3[2])-(vector3[0]*vector2[2]);
k=(vector2[0]*vector3[1])-(vector3[0]*vector2[1]);

vectorf=(vector1[0]*vectori)+(vector1[1]*j)+(vector1[2]*k);

cout<<"el producto final es "<<vectorf<<endl;
}


