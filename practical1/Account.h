/* *******************************************************
* Name   : Account.h
* Purpose: Definition of an Account containing a balance
* Author : Your name here
* Version: 1.1
* ******************************************************/

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>
#include <iostream> 
#include <string> 

class Account {
public:  // Constructor  
	Account(std::string name = "") : customer(name), balance(0), overdraft(0) {}

	void withdraw(float amount);
	void deposit(float amount);
	float getBalance() const;

	std::string getCustomer() const;
	void setCustomer(std::string c);

	float getOverdraft();
	void setOverdraft(float over);

	std::string toString();

private:
	std::string customer;
	float balance;
	float overdraft;
};
#endif