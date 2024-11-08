#include <iostream>
#include <mysql/mysql.h>

int main(){
	MYSQL *conn;
	MYSQL_RES *res;
	MYSQL_ROW row;
	conn = mysql_init(NULL);

	std::cout<<"conn:"<<conn<<std::endl;
}

