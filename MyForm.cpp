#include "MyForm.h"

int  app1::MyForm::str_to_int(System::String^ str) {
	if (str[0] == '-') {
		str = str->Substring(1);
		int liczba = System::Convert::ToInt64(str);
		return liczba - 2 * liczba;
	}
	return System::Convert::ToInt64(str);
}

void app1::MyForm::res() {
	pierwszy = false;
	switch (znak)
	{
	case '+':
		wynik += str_to_int(a_str);
		break;
	case '-':
		wynik -= str_to_int(a_str);
		break;
	case '*':
		wynik *= str_to_int(a_str);
		break;
	case '/':
		wynik /= str_to_int(a_str);
		break;
	default:
		a_str = "ERROR";
		return;
	}
	znak = '0';
	result->Text = System::Convert::ToString(wynik);
	a_str = "";
}


System::Void app1::MyForm::label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
System::Void app1::MyForm::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
System::Void app1::MyForm::button_1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a_str != "ERROR") {
		a_str += "1";
		result->Text = a_str;
	}
}
System::Void app1::MyForm::button_2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a_str != "ERROR") {
		a_str += "2";
		result->Text = a_str;
	}
}
System::Void app1::MyForm::button_3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a_str != "ERROR") {
		a_str += "3";
		result->Text = a_str;
	}
}
System::Void app1::MyForm::button_4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a_str != "ERROR") {
		a_str += "4";
		result->Text = a_str;
	}
}
System::Void app1::MyForm::button_5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a_str != "ERROR") {
		a_str += "5";
		result->Text = a_str;
	}
}
System::Void app1::MyForm::button_6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a_str != "ERROR") {
		a_str += "6";
		result->Text = a_str;
	}
}
System::Void app1::MyForm::button_7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a_str != "ERROR") {
		a_str += "7";
		result->Text = a_str;
	}
}
System::Void app1::MyForm::button_8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a_str != "ERROR") {
		a_str += "8";
		result->Text = a_str;
	}
}
System::Void app1::MyForm::button_9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a_str != "ERROR") {
		a_str += "9";
		result->Text = a_str;
	}
}
System::Void app1::MyForm::button_0_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a_str != "ERROR") {
		a_str += "0";
		result->Text = a_str;
	}
}
System::Void app1::MyForm::button_znak_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a_str == "" && wynik != 0) {
		wynik = wynik - 2 * wynik;
		result->Text = System::Convert::ToString(wynik);
	}
	if (a_str == "" || a_str == "ERROR")
		return;
	if (a_str[0] == '-')
		a_str = a_str->Substring(1);
	else
		a_str = "-" + a_str;
	result->Text = a_str;
}
System::Void app1::MyForm::button_dziel_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a_str == "" || a_str == "ERROR") {
		znak = '/';
		return;
	}
	if (pierwszy) {
		znak = '+';
		res();
		znak = '/';
	}
	else if (a_str == "0")
	{
		//znak = 'E';
		//res();
		a_str = "ERROR";
		result->Text = a_str;
	}
	else {
		res();
		znak = '/';
	}
}
System::Void app1::MyForm::button_mnoz_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a_str == "" || a_str == "ERROR") {
		znak = '*';
		return;
	}
	if (pierwszy) {
		znak = '+';
		res();
		znak = '*';
	}
	else {
		res();
		znak = '*';
	}
}
System::Void app1::MyForm::button_odejmij_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a_str == "" || a_str == "ERROR") {
		znak = '-';
		return;
	}
	if (pierwszy) {
		znak = '+';
		res();
		znak = '-';
	}
	else {
		res();
		znak = '-';
	}
}
System::Void app1::MyForm::button_dodaj_Click(System::Object^ sender, System::EventArgs^ e) {
	if (a_str == "" || a_str == "ERROR") {
		znak = '+';
		return;
	}
	if (pierwszy) {
		znak = '+';
		res();
		znak = '+';
	}
	else {
		res();
		znak = '+';
	}
}
System::Void app1::MyForm::button_wynik_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((znak == '/' && a_str == "0") || a_str == "ERROR") {
		//znak = 'E';
		a_str = "ERROR";
		result->Text = a_str;
		return;
	}
	res();
}
System::Void app1::MyForm::button_C_Click(System::Object^ sender, System::EventArgs^ e) {
	a_str = "";
	wynik = 0;
	znak = '0';
	pierwszy = true;
	result->Text = "0";
}