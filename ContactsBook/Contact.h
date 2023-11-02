#pragma once


class Contact
{
	std::string name;
	std::string city;
	std::string phone;
public:
	Contact();
	Contact(std::string name, std::string city, std::string phone);// Деструктор не нужен тк нет вказивникив
	std::string getName() const;
	std::string getCity() const;
	std::string getPhone() const;
};

