#include <iostream>
#include <string>

class CFactory
{
private:
	std::string m_sName = "";
	std::string m_sRole = "";
public:
	virtual void create(std::string sName, std::string sRole) = 0;
	void attack(std::string sEnamy) { };
};

class CLiliputFactory : public CFactory
{
private:
	std::string m_sName = "";
	std::string m_sRole = "";
public:
	void create(std::string sName, std::string sRole)
	{
		m_sName = sName;
		m_sRole = sRole;
	}
	void attack(std::string sEnamyName, std::string sEnamyRole)
	{
		std::cout << "Liliput " << m_sRole << " " << m_sName << " attack Giant " << sEnamyRole << " " << sEnamyName << std::endl;
	}
};

class CGiantFactory : public CFactory
{
private:
	std::string m_sName = "";
	std::string m_sRole = "";
public:
	void create(std::string sName, std::string sRole)
	{
		m_sName = sName;
		m_sRole = sRole;
	}
	void attack(std::string sEnamyName, std::string sEnamyRole)
	{
		std::cout << "Giant " << m_sRole << " " << m_sName << " attack liliput " << sEnamyRole << " " << sEnamyName << std::endl;
	}
};

int main()
{
	CGiantFactory Michel;
	Michel.create("Michel", "Pilot");
	CLiliputFactory Roger;

	Roger.create("Roger", "Pilot");
	Michel.attack("Roger", "Pilot");
}