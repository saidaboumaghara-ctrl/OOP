#pragma once
#include <iostream>
#include<string>
using namespace std;
class clsperson
{
private:
	
	string _firstname;
	string _lastname;
	string _email;
	string _phone;

public :
	void SetFirstname(string Firstname)
	{
		_firstname = Firstname;
	}
	string GetFirstname()
	{
		return _firstname;
	}
	__declspec(property(get = GetFirstname, put = SetFirstname)) string FirstName;
	void SetLastname(string lastname)
	{
		_lastname = lastname;
	}
	string GetLastname()
	{
		return _lastname;
	}
	__declspec(property(get = GetLastname, put = SetLastname)) string LastName;
	void Setemail(string email)
	{
		_email = email;
	}
	string Getemail()
	{
		return _email;
	}
	__declspec(property(get = Getemail, put = Setemail)) string Email;

	void Setphone(int phone)
	{
		 _phone = phone;
	}
	string Getphone()
	{
		return  _phone;
	}
	__declspec(property(get = Getphone, put = Setphone)) int Phone;


	clsperson(string firstname, string lastname, string email, string phone)
	{
		this->_firstname = firstname;
		this->_lastname = lastname;
		this->_email = email;
		this->_phone = phone;
	}
	string FullName()
	{
		return _firstname + " " + _lastname;



	}
	void print()
	{
	cout << "INFO" << endl;
	cout << "-----------------" << endl;
	cout << "First Name :" << _firstname <<endl;
	cout << "Last Name :" << _lastname << endl;
	cout << FullName() << endl;
	cout << "Email :" << _email << endl;
	cout << "Phone number " << _phone<< endl;
	}
	void sendEmail(string subject,string Body)
	{
		cout << "The Following message sent successfully to email :" << _email << endl;
			cout << "Subject :" << subject << endl;
			cout << "Body :" << Body << endl;

	}
	void sendSMS(string sms)
	{
cout << "The Following message sent successfully to email :" << _phone << endl;
cout << "Body" << sms << endl;
		

	}
};