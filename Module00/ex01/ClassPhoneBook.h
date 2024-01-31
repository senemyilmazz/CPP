#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "ClassContact.h"

class PhoneBook {

    private:
        Contact contactList[8];
    
    public:
        Contact* getContactList();
        void addContact(Contact newContact);
        void searchContact(int contactNo);
};

#endif