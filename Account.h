#pragma once  
/*
#pragma once : 컴파일러에게 해당 헤더 파일이 한번만 빌드되도록 한다. 
해당 헤더파일이 여러번 include 되는 것을 막아준다. 
여러곳에서 include 되면 그때마다 각각 정의가 추가되어 중첩되는 경우가 생기기 때문이다. 
즉 중복된 내용이 여러번 빌드되는 것을 막기 위해 #pragma once를 사용한다.
*/
#include<iostream>
#include<string>

class Account {
public:
	Account(std::string accountName, int initialBalance)
		: name{ accountName } {
		if (initialBalance > 0) {
			balance = initialBalance;
		}
	}

	void deposit(int depositAmount) {
		if (depositAmount > 0) {
			balance += depositAmount;
		}
	}

	void withdraw(int withdrawAmount) {
		if (withdrawAmount <= balance) {
			balance -= withdrawAmount;
		}
		if (withdrawAmount > balance) {
			std::cout << "\nWithdrawa; amount exceeded account balance." << std::endl;
		}
	}

	int getBalance() const {
		return balance;
	}

	void setName(std::string accountName) {
		name = accountName;
	}

	std::string getName() const {
		return name;
	}

private:
	std::string name;
	int balance{ 0 };
};