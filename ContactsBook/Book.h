#pragma once
#include "Contact.h"
class Book :  public Contact
{
	std::string name;
	Contact* contacts;
public:
	Book();
	Book(std::string name);
	~Book();
	std::string getName() const;
	Contact* getContact() const;
	void addContact(const Contact& c) const;
	void delContact(std::string name) const;
};

