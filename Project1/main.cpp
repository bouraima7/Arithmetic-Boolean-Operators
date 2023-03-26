#include <iostream>
using namespace std;

int main() {
	int x =0;
	cout << "Part 1: " <<endl;
	cout << " " << endl;
	x = (12 - 4 * 2 - 8);
	cout << "01. "; cout << x <<endl;
	x = (24 / 2 + 1 * 4);
	cout << "02. "; cout << x << endl;
	x = (12 - 9 + 4 * 2 + 3^ 4);
	cout << "03. "; cout << x << endl;
	x = (24/(3+2)*4);
	cout << "04. "; cout << x << endl;
	x = (2 * (5 - 3) + 7);
	cout << "05. "; cout << x << endl;
	x = (12 - (15/5 - 2)* 5);
	cout << "06. "; cout << x << endl;
	x = (20 - 15/((5 - 2) * 5));
	cout << "07. "; cout << x << endl;
	x = (13 % 5);
	cout << "08. "; cout << x << endl;
	x = ( 24 / 2 + 1 * 4 - 15 /((5-2) * 5));
	cout << "09. "; cout << x << endl;
	x = ( 2016 % 104);
	cout << "10. "; cout << x << endl;

	int a = 12;
	int b = 3;
	int c = 6;
	int d = 2 + b;
	x = 0; 

	x = (a + b / c - d ^ 2);
	cout << "11. "; cout << x << endl;
	x = (a + b / (c - d ^ 2));
	cout << "12. "; cout << x << endl;
	x = ((a + b ) % c);
	cout << "13. "; cout << x << endl;
	x = ((a + b) / c - d ^ 2);
	cout << "14. "; cout << x << endl;
	x = (a % b / c - d ^ 2);
	cout << "15. "; cout << x << endl;
	x = (d * b/a % c );
	cout << "16. "; cout << x << endl;
	x = ((a/a * b) % (c/b * d ));
	cout << "17. "; cout << x << endl;
	x = (a %  d * (b - c / d));
	cout << "18. "; cout << x << endl;
	x = (a % (c / b) - d ^ 2);
	cout << "19. "; cout << x << endl;
	x = (d + (a / b) * d % c);
	cout << "20. "; cout << x << endl;

	cout << " " << endl;
	cout << "Part 2:" <<endl;
	cout << " " << endl;
	bool y = true;
	string yy = "";
	bool aa = false;
	bool bb = false;
	bool cc = false;
	bool dd = true;
	int ee = 10;
	int ff = 15;

	y = aa && bb;
	if (y == true) {
		yy = "true";
	}
	else { yy = "false"; }
	cout << "21. "; cout << yy << endl;
	y = cc || dd;
	if (y == true) {
		yy = "true";
	}
	else { yy = "false"; }
	cout << "22. "; cout << yy << endl;
	y = !cc;
	if (y == true) {
		yy = "true";
	}
	else { yy = "false"; }
	cout << "23. "; cout << yy << endl;
	y = !(aa && dd);
	if (y == true) {
		yy = "true";
	}
	else { yy = "false"; }
	cout << "24. "; cout << yy << endl;
	y = !cc && bb;
	if (y == true) {
		yy = "true";
	}
	else { yy = "false"; }
	cout << "25. "; cout << yy << endl;
	y = (ee < 10) && (ee == ff);
	if (y == true) {
		yy = "true";
	}
	else { yy = "false"; }
	cout << "26. "; cout << yy << endl;
	y = aa && bb || cc && dd;
	if (y == true) {
		yy = "true";
	}
	else { yy = "false"; }
	cout << "27. "; cout << yy << endl;
	y = !(aa && bb) || !(dd && cc);
	if (y == true) {
		yy = "true";
	}
	else { yy = "false"; }
	cout << "28. "; cout << yy << endl;
	y = ((aa || bb) && (cc || dd));
	if (y == true) {
		yy = "true";
	}
	else { yy = "false"; }
	cout << "29. "; cout << yy << endl;
	y = !dd;
	if (y == true) {
		yy = "true";
	}
	else { yy = "false"; }
	cout << "30. "; cout << yy << endl;
	y = !bb;
	if (y == true) {
		yy = "true";
	}
	else { yy = "false"; }
	cout << "31. "; cout << yy << endl;
	y = !cc || !dd;
	if (y == true) {
		yy = "true";
	}
	else { yy = "false"; }
	cout << "32. "; cout << yy << endl;
	y = !aa;
	if (y == true) {
		yy = "true";
	}
	else { yy = "false"; }
	cout << "33. "; cout << yy << endl;
	y = !(aa || dd);
	if (y == true) {
		yy = "true";
	}
	else { yy = "false"; }
	cout << "34. "; cout << yy << endl;
	y = dd && (!bb && !aa);
	if (y == true) {
		yy = "true";
	}
	else { yy = "false"; }
	cout << "35. "; cout << yy << endl;
	y = (ee <= 10) && (cc || dd);
	if (y == true) {
		yy = "true";
	}
	else { yy = "false"; }
	cout << "36. "; cout << yy << endl;
	y = (aa && !bb) || (ee < ff);
	if (y == true) {
		yy = "true";
	}
	else { yy = "false"; }
	cout << "37. "; cout << yy << endl;
	y = !aa || !bb || !cc || !dd;
	if (y == true) {
		yy = "true";
	}
	else { yy = "false"; }
	cout << "38. "; cout << yy << endl;
	y = !aa && !bb && !cc && !dd;
	if (y == true) {
		yy = "true";
	}
	else { yy = "false"; }
	cout << "39. "; cout << yy << endl;
	y = !(ee <= ff && ee == ff) && dd || aa || !bb && !cc;
	if (y == true) {
		yy = "true";
	}
	else { yy = "false"; }
	cout << "40. "; cout << yy << endl;








	return 0;
}

