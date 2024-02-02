Esse é um script Python que utiliza a biblioteca scapy para varrer dispositivos conectados na mesma rede local.
Este script utiliza o protocolo ARP para detectar dispositivos na rede local. Certifique-se de instalar a biblioteca scapy antes de executar o script. Você pode instalar utilizando o pip:

# pip install scapy

Este script varre todos os IPs na sub-rede 192.168.1.0/24. Se a sua rede tiver uma sub-rede diferente, você precisará modificar o parâmetro scan() com o IP correto.

Obs: Lembre-se de que o uso deste script pode ser restrito dependendo das políticas da rede e pode ser necessário permissão para executá-lo. Certifique-se sempre de estar em conformidade com as políticas da sua rede antes de executar esse tipo de script.
