#include <iostream>
#include <string>
#include <climits>

#include "shapes.h"
#include "readNum.h"

using namespace std;

int main ()
{
	cube cub;
	sphere sfe;
	cylinder sil;
	cone kon;
	rectangle rek;
	bool done=false;
	cout<<"\nThis program calculates the area and volume of shapes\n\n";
	while (done!=true){
		cout<<"Options\n\n1~Cube\n2~Sphere\n3~Cylinder\n4~Cone\n5~Rectangle\n6~Quit\n\n";
		int m=readInt("Please choose an option by number: ",1,6);
		switch (m){
			case 1:
				cout<<"\n~You have chosen a cube~\n";
				cub.input();
				cub.display();
				break;
			case 2:
				cout<<"\n~You have chosen a sphere~\n";
				sfe.input();
				sfe.display();
				break;
			case 3:
				cout<<"\n~You have chosen a cylinder~\n";
				sil.input();
				sil.display();
				break;
			case 4:
				cout<<"\n~You have chosen a cone~\n";
				kon.input();
				kon.display();
				break;
			case 5:
				cout<<"\n~You have chosen a rectangle~\n";
				rek.input();
				rek.display();
				break;
			case 6:
				cout<<"Have a radical day!\n";
				done=true;
				break;
			default:
				cerr<<"Something went wrong...\n";
		}
		EtoC();
	}
	return 0;
}