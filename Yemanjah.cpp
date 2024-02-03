#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <memory>

class NetworkInterface {
private:
    std::string ipAddress;
    std::string macAddress;
    bool isConnected;

public:
    NetworkInterface(std::string ip, std::string mac) : ipAddress(ip), macAddress(mac), isConnected(false) {}

    void connect() {
        isConnected = true;
        std::cout << "Interface " << ipAddress << " conectada." << std::endl;
    }

    void disconnect() {
        isConnected = false;
        std::cout << "Interface " << ipAddress << " desconectada." << std::endl;
    }

    std::string getIpAddress() const {
        return ipAddress;
    }
};

class Router {
private:
    std::vector<NetworkInterface> interfaces;

public:
    Router() {}

    void addInterface(std::string ip, std::string mac) {
        NetworkInterface interface(ip, mac);
        interfaces.push_back(interface);
    }

    void start() {
        std::cout << "Iniciando roteador..." << std::endl;
        for (auto& interface : interfaces) {
            interface.connect();
        }
        std::cout << "Roteador iniciado." << std::endl;

        // Aqui você pode adicionar a lógica para lidar com o login
        // Por exemplo, você pode verificar as credenciais fornecidas pelo usuário
        // e conceder ou negar o acesso à rede com base nisso.
        // Isso pode envolver o processamento de solicitações HTTP recebidas pelo roteador.

        // Aqui, para fins de exemplo, apenas imprimimos uma mensagem.
        std::cout << "Aguardando login do usuário..." << std::endl;
    }

    void stop() {
        std::cout << "Desligando roteador..." << std::endl;
        for (auto& interface : interfaces) {
            interface.disconnect();
        }
        std::cout << "Roteador desligado." << std::endl;
    }
};

int main() {
    // Criando um roteador
    Router router;

    // Adicionando interfaces de rede
    router.addInterface("192.168.1.1", "00:11:22:33:44:55");
    router.addInterface("192.168.2.1", "AA:BB:CC:DD:EE:FF");

    // Iniciando o roteador
    router.start();

    // Desligando o roteador
    router.stop();

    return 0;
}
