// StaticLib1.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include <string>
struct User
{
	std::string UserName;
	std::string password;
};
// TODO: This is an example of a library function
User* fnStaticLib1(std::string name, std::string password)
{
	User* newUser = new User();
	newUser->UserName = name;

	
	//add
	
}
