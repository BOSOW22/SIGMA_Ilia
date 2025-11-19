#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string fio,
		birth_date,
		phone_number,
		univ_name;
		
      
public:
	// Ввод данных
	void inputData() {
		cout << "Введите ФИО: ";
		getline(cin, fio);

		cout << "Введите дату рождения: ";
		getline(cin, birth_date);

		cout << "Телефон: ";
		getline(cin, phone_number);

		
		cout << "Название учебного заведения: ";
		getline(cin, univ_name);

	}

	// Вывод данных
	void outputData() const {
		cout << "ФИО: " << fio << '\n';
		cout << "Дата рождения: " << birth_date << '\n';
		cout << "Телефон: " << phone_number << '\n';
		cout << "Учреждение: " << univ_name << '\n';
	
	}

	// Аксессоры для доступа к переменным
	string getFIO() const { return fio; }
	string getBirthDate() const { return birth_date; }
	string getPhoneNumber() const { return phone_number; }
	string getUnivName() const { return univ_name; }
	
};

int main() {
	setlocale(LC_ALL, "Ru");
	Student student;
	student.inputData();  // Вводим данные студента
	student.outputData(); // Выводим данные студента
	return 0;
}