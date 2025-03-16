import pymysql

def connect_db():
    connection = pymysql.Connect(host='localhost', port=3306, user='root', password='root', database='hamsitha_db', charset='utf8')
    print('DB connected')
    return connection

def disconnect_db(connection):
    connection.close()
    print('DB dis-connected')

connection = connect_db()
disconnect_db(connection)
