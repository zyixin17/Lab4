#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

class User {
    private:
        std::string userName;
        std::string email;
        std::vector<User*> friendList;

    public:
        void setUserName(const std::string& userName);
        void setEmail(const std::string& email);
        std::string getUserName() const;
        std::string getEmail() const;
        void addFriend(User* user);
        void removeFriend(const std::string& userName);
        int numFriends() const;
        User* getFriendAt(int index);
};

#endif