#include<iostream>

using namespace std;

int main() {
	int donVi, chuc, tram;
	int nghin, chucNghin, tramNghin;
	int trieu, chucTrieu, tramTrieu;
	int n;
	cout << "Nhap vao so can doc: ";
	cin >> n;

	donVi = n % 10;
	n = n / 10;

	chuc = n % 10;
	n = n / 10;

	tram = n % 10;
	n = n / 10;

	nghin = n % 10;
	n = n / 10;

	chucNghin = n % 10;
	n = n / 10;

	tramNghin = n % 10;
	n = n / 10;

	trieu = n % 10;
	n = n / 10;

	chucTrieu = n % 10;
	n = n / 10;

	tramTrieu = n;
	//xu li phan tram trieu
	switch (tramTrieu) {
	case 1: cout << "Mot tram "; break;
	case 2: cout << "Hai tram "; break;
	case 3: cout << "Ba tram "; break;
	case 4: cout << "Bon tram "; break;
	case 5: cout << "Nam tram "; break;
	case 6: cout << "Sau tram "; break;
	case 7: cout << "Bay tram "; break;
	case 8: cout << "Tam tram "; break;
	case 9: cout << "chin tram "; break;
	}
	//chuc trieu
	if (tramTrieu!=0 && chucTrieu == 0 && trieu !=0)
	{
		cout << "linh ";
	}

	switch (chucTrieu) {
	case 1: cout << "muoi "; break;
	case 2: cout << "hai muoi "; break;
	case 3: cout << "ba muoi "; break;
	case 4: cout << "bon muoi "; break;
	case 5: cout << "nam muoi "; break;
	case 6: cout << "sau muoi "; break;
	case 7: cout << "bay muoi "; break;
	case 8: cout << "tam muoi "; break;
	case 9: cout << "chin muoi "; break;
	}
	//trieu
	switch (trieu) {
	case 1: cout << "mot "; break;
	case 2: cout << "hai "; break;
	case 3: cout << "ba "; break;
	case 4: cout << "bon "; break;
	case 5: cout << "lam "; break;
	case 6: cout << "sau "; break;
	case 7: cout << "bay "; break;
	case 8: cout << "tam "; break;
	case 9: cout << "chin "; break;
	}
	if (trieu != 0 || chucTrieu != 0 || tramTrieu!=0 )
	{
		cout << "trieu ";
	}
	//xu li tram ngan
	if (trieu!=0 && tramNghin == 0) {
		cout << "khong tram ";
	}
	switch (tramNghin) {
	case 1: cout << "Mot tram "; break;
	case 2: cout << "Hai tram "; break;
	case 3: cout << "Ba tram "; break;
	case 4: cout << "Bon tram "; break;
	case 5: cout << "Nam tram "; break;
	case 6: cout << "Sau tram "; break;
	case 7: cout << "Bay tram "; break;
	case 8: cout << "Tam tram "; break;
	case 9: cout << "chin tram "; break;
	}
	//chuc nghin
	if (tramNghin !=0 && chucNghin==0 && nghin!=0)
	{
		cout << "linh ";
	}
	switch (chucNghin) {
	case 1: cout << "muoi "; break;
	case 2: cout << "hai muoi "; break;
	case 3: cout << "ba muoi "; break;
	case 4: cout << "bon muoi "; break;
	case 5: cout << "nam muoi "; break;
	case 6: cout << "sau muoi "; break;
	case 7: cout << "bay muoi "; break;
	case 8: cout << "tam muoi "; break;
	case 9: cout << "chin muoi "; break;
	}
	//nghin
	switch (nghin) {
	case 1: cout << "mot "; break;
	case 2: cout << "hai "; break;
	case 3: cout << "ba "; break;
	case 4: cout << "bon "; break;
	case 5: cout << "lam "; break;
	case 6: cout << "sau "; break;
	case 7: cout << "bay "; break;
	case 8: cout << "tam "; break;
	case 9: cout << "chin "; break;
	}
	if (tramNghin!=0 || chucNghin !=0 || nghin != 0)
	{
		cout << "nghin ";
	}
	//tram
	if (nghin !=0 && tram == 0&& chuc!=0)
	{
		cout << "khong tram ";
	}
	switch (tram) {
	case 1: cout << "Mot tram "; break;
	case 2: cout << "Hai tram "; break;
	case 3: cout << "Ba tram "; break;
	case 4: cout << "Bon tram "; break;
	case 5: cout << "Nam tram "; break;
	case 6: cout << "Sau tram "; break;
	case 7: cout << "Bay tram "; break;
	case 8: cout << "Tam tram "; break;
	case 9: cout << "chin tram "; break;
	}
	//chuc
	if (tram !=0 && chuc ==0 && donVi != 0)
	{
		cout << "linh ";
	}
	switch (chuc) {
	case 1: cout << "muoi "; break;
	case 2: cout << "hai muoi "; break;
	case 3: cout << "ba muoi "; break;
	case 4: cout << "bon muoi "; break;
	case 5: cout << "nam muoi "; break;
	case 6: cout << "sau muoi "; break;
	case 7: cout << "bay muoi "; break;
	case 8: cout << "tam muoi "; break;
	case 9: cout << "chin muoi "; break;
	}
	//don vi
	switch (donVi) {
	case 1: cout << "mot "; break;
	case 2: cout << "hai "; break;
	case 3: cout << "ba "; break;
	case 4: cout << "bon "; break;
	case 5: cout << "lam "; break;
	case 6: cout << "sau "; break;
	case 7: cout << "bay "; break;
	case 8: cout << "tam "; break;
	case 9: cout << "chin "; break;
	}
	return 0;
}