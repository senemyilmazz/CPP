#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"

class PhoneBook {

    private:
        Contact contactList[8];
    
    public:
        void addContact(Contact contact);
        Contact* getContactList();
        void searchContact(int contactNum);
        int getTotalContactCount();
};

#endif