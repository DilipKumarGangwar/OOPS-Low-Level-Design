#include "User.h"
#include "System.h"
#include<unordered_map>
using namespace std;

unordered_map<string, User *> System::users;

void System::AddUser(string userId, User * p_user)
{
    users[userId] = p_user;
}
User* System:: getUser(string userId)
{
     return users[userId];
}
