// <20127674>
// <Le Duc Dat>
// <20CLC08>
// Test case 1
// Input:1, 2, 1
// Output:Phuong trinh co nghiem kep: x1 = x2 = -1.00
// Test case 2
// Input:1, 2, 3
// Output:Phuong trinh vo nghiem
// Test case 3
// Input:0, 2, 3
// Output:Phuong trinh co nghiem duy nhat: -1.50
#include <bits/stdc++.h>
using namespace std; 
int main()
{
 
    double a, b, c, delta, x1, x2;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    cout << "Nhap c = ";
    cin >> c;
    if(a == 0) 
	{
            if(b == 0)
			 {
            	if (c == 0) 
				{
                	cout << "Phuong trinh vo so nghiem" << endl;
            	} 
				else 
				{
                	cout << "Phuong trinh vo nghiem" << endl;
            	}
        		} 
				else 
				{
            		cout << "Phuong trinh co nghiem duy nhat: " <<fixed<< setprecision(2)<< -c/b << endl;
        		}
    } else 
		{
        	delta = b*b - 4*a*c;
        	if(delta > 0) 
			{
            	x1 = (-b+sqrt(delta))/(2*a);
            	x2 = (-b-sqrt(delta))/(2*a);
            	cout << "Nghiem thu nhat x1 = " <<fixed<< setprecision(2)<< x1 << endl;
            	cout << "Nghiem thu hai x2 = " <<fixed<< setprecision(2)<< x2 << endl;
        	} else if ( delta == 0)
				{
            		cout << "Phuong trinh co nghiem kep: x1 = x2 = " <<fixed<< setprecision(2)<<-b/2*a << endl;
        		} else
				{
            		cout << "Phuong trinh vo nghiem" << endl;
        		}
    }
 return 0;
}
