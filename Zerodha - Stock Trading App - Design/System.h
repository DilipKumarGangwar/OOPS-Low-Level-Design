#pragma once
#include "User.h"
#include<unordered_map>
using namespace std;

class System
{
    static unordered_map<string, User *> users;
    public:
      static void AddUser(string userId, User * p_user);
      static User* getUser(string userId);
};