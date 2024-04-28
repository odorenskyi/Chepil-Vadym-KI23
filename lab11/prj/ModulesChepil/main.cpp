#include "chepil_h.h"

using namespace std;

void getAccount(Employee account, int index) {
    try {
    cout << "||" << setw(6) << index+1 << "||" << setw(25) << left << "Дата створення запису:" << "||" << setw(38)
                 << (account.creationDate.day < 10 ? "0" : "") + to_string(account.creationDate.day) + "." +
                    (account.creationDate.month < 10 ? "0" : "") + to_string(account.creationDate.month) + "." +
                    to_string(account.creationDate.year) << "||" << endl << resetiosflags(ios::left);
    int edc = 0;
    for(int k = 0; k < 17; k++){
        cout << "||" << setw(7) << "||" << setw(25) << left;
        switch(k) {
        case 0:
            cout << "Реєстраційний номер:" << "||" << setw(45) << account.regNum;
            break;
        case 1:
            cout << "Ідентифікаційний номер (ID):" << "||" << setw(43) << account.ID;
            break;
        case 2:
            cout << "Стать:" << "||" << setw(45) << (account.gender == 'm' ? "чоловіча" : "жіноча");
            break;
        case 3:
            cout << "Вид роботи:" << "||" << setw(45) << (account.typeOfWork == 'f' ? "основна" : "за сумісництвом ");
            break;
        case 4:
            cout << "П.І.Б. працівника:" << "||" << setw(45) << account.fullName;
            break;
        case 5:
            cout << "Дата народження:" << "||" << setw(45) << (account.birthday.day < 10 ? "0" : "") +
            to_string(account.birthday.day) + "." + (account.birthday.month < 10 ? "0" : "") +
            to_string(account.birthday.month) + "." + to_string(account.birthday.year);
            break;
        case 6:
            cout << "Громадянство:" << "||" << setw(45) << account.citizenship;
            break;
        case 7:
            cout << "Освіта " + to_string(edc+1) + ":" << "||" << setw(45) << (account.placeOfEducation[edc] == "" ? "-" :
                                                    (account.education[edc] == Employee::basicSecondary ? "базова середня" :
                                                    account.education[edc] == Employee::compSecondary ? "повна середня" :
                                                    account.education[edc] == Employee::vocational ? "професійно-технічна" :
                                                    account.education[edc] == Employee::incompHigher ? "неповна вища" :
                                                    account.education[edc] == Employee::basicHigher ? "базова вища" : "вища"));
            break;
        case 8:
            cout << " " << "||" << setw(45) << account.placeOfEducation[edc];
            for(int j = 0; j < 4; j++){
                if (account.placeOfEducation[++edc] != "") {
                    j -= 2;
                }
            }
            break;
        case 9:
            cout << "Останнє місце роботи:" << "||" << setw(45)
                 << (account.lastJobPlace == "" ? "-" : account.lastJobPlace);
            break;
        case 10:
            cout << resetiosflags(ios::left) << "посада:    " << left << "||" << setw(45)
                 << (account.lastJob == "" ? "-" : account.lastJob);
            break;
        case 11:
            cout << "Стаж роботи:" << "||" << setw(45) << (account.workExp.days != 0 ?
            to_string(account.workExp.days) + " днів " : "") + (account.workExp.months != 0 ?
            to_string(account.workExp.months) + " місяців " : "") + (account.workExp.years != 0 ?
            to_string(account.workExp.years) + " років" : "");
            break;
        case 12:
            cout << "Місце проживання:" << "||" << setw(45) << account.placeOfLiving;
            break;
        case 13:
            cout << "Паспортні дані:" << "||" << setw(45) << account.passportInfo;
            break;
        case 14:
            cout << "Додаткові відомості:" << "||" << setw(45)
                << (account.additionalInfo == "" ? "-" : account.additionalInfo);
            break;
        case 15:
            cout << "Дата звільнення:" << "||" << setw(45) << (account.dateOfDissial.day != 0 &&
                         account.dateOfDissial.month != 0 && account.dateOfDissial.year != 0 ?
                        (account.dateOfDissial.day < 10 ? "0" : "") + to_string(account.dateOfDissial.day) + "." +
                        (account.dateOfDissial.month < 10 ? "0" : "") + to_string(account.dateOfDissial.month) +
                         "." + to_string(account.dateOfDissial.year) : "-");
            break;
        case 16:
            cout << resetiosflags(ios::left) << "причина:         " << left << "||" << setw(45)
                 << (account.reasonForDissial  == "" ? "-" : account.reasonForDissial);
            break;
        }
        cout << "||" << endl << resetiosflags(ios::left);
        }
    }
    catch (string errorString) { cout << errorString << endl; }
}

void deleteFromDataBase(vector<Employee> &database, int ID){
    auto iter = database.cbegin();
    for(int i = 0; i < database.size(); i++){
        if(database[i].ID == ID){
            database.erase(iter + i);
            cout << setw(20) << "" << "+++++++++++++++++++++++++++++++++++++++++" << endl;
            cout << setw(20) << "" << "+            Запис видалено             +" << endl;
            cout << setw(20) << "" << "+++++++++++++++++++++++++++++++++++++++++" << endl << endl;
            return;
        }
    }

    cout << setw(20) << "" << "+++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << setw(20) << "" << "+           Запис не знайдено           +" << endl;
    cout << setw(20) << "" << "+++++++++++++++++++++++++++++++++++++++++" << endl << endl;
}
