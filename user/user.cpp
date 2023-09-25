#include "user.h"
#include <iostream>

void User::setUserName(const std::string& userName) {
    this->userName = userName;
}

void User::setEmail(const std::string& email) {
    this->email = email;
}

std::string User::getUserName() const {
    return userName;
}

std::string User::getEmail() const {
    return email;
}

void User::addFriend(User* user) {
    friendList.push_back(user);
}

void User::removeFriend(const std::string& userName) {
    for (int i = 0; i < friendList.size(); i++) {
        if (friendList[i]->getUserName() == userName) {
            friendList.erase(friendList.begin() + i);
            return;
        }
    }
}

int User::numFriends() const {
    return friendList.size();
}

User* User::getFriendAt(int index) {
    return friendList[index];
}


int main() {
    User* user1 = new User();
    user1->setUserName("user1");
    user1->setEmail("test");
    std::cout << user1->getUserName() << std::endl;
    std::cout << user1->getEmail() << std::endl;
    delete user1;
    return 0;
}