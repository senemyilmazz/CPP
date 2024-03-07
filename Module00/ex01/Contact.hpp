#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact {
    
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string theDarkestSecret;

    public:
        void setFirstName(std::string firstName);
        void setLastName(std::string lastName);
        void setNickName(std::string nickName);
        void setPhoneNumber(std::string phoneNumber);
        void setTheDarkestSecret(std::string secret);
        
        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
        std::string getPhoneNumber();
        std::string getTheDarkestSecret();

        void showContactInfos();
};

#endif