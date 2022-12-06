1º) CLONAR REPOSITORIO:

git clone --recursive https://github.com/igortomiatti/Cliente-LWM2M.git

2º) COMPILAR E INSTALAR BIBLIOTECA ANJAY

cd Anjay

cmake . && make && sudo make install

3º) COMPILAR APLICAÇÃO

cd ..

cd app

cmake . && make

4º) EXECUTAR APLICAÇÃO

./client-lwm2m ENDPOINT-NAME HOST:PORT

Exemplo: ./client-lwm2m TESTE coap://23.94.200.134:5683
