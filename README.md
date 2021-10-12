# RecycledBoat

<h3>Placa NodeMCU</h3>
A placa NodeMCU é uma pequena plataforma de desenvolvimento open source direcionada para o desenvolvimento de projetos no mundo da Internet das Coisas (IOT). Esta pequena, mas poderosa placa contém um microcontrolador ESP8266 que oferece suporte nativo para redes Wi-fi com as normas 802.11 b/g/n.

<h3>Características da placa NodeMCU</h3>
<ul>
<li><span style="font-weight: 400;">Wi-fi 2,4 Ghz com suporte para as normas 802.11 b/g/n</span>
<ul>
<li>WPA/WPA2</li>
<li>Wi-Fi Direct (P2p), Soft Access Point</li>
<li><span>Antena integrada</span></li>
</ul>
</li>
<li>Power: 5V via porta micro USB</li>
<li>Processador Tensilica LX106 - até 160MHz</li>
<li>Pilha protocolar TCP/IP (apenas IPv4)</li>
<li>Botão de Reset e Flash</li>
<li>Memória RAM: 96<span>kBytes</span></li>
<li>Memória ROM boot: 64 KBytes</li>
<li>Memória flash: 4 MB</li>
<li>Potência de saída: 0,15 (W); +19.5dBm em modo 802.11b</li>
<li>Consumo em modo de baixa energia: &gt; 10 uA</li>
<li><span>GPIO com funções de PWM, I2C, SPI, etc</span></li>
<li><span>Conversor analógico digital (ADC)</span></li>
<li>Dimensões: <span>49 x 24.5 x 13mm</span></li>
</ul>

<h3>Diagrama de pinos da placa NodeMCU</h3>
![image](https://electropeak.com/learn/wp-content/uploads/2019/06/node-mcu.jpg)

<h3>Configuração do IDE</h3>
Para que possamos programar o ESP8266 atráves do IDE Arduino será necessário fazer a instalação desta board no IDE.

Assim no IDE Arduino deve ir-se até menu Ficheiro->Preferências.

![image](https://pplware.sapo.pt/wp-content/uploads/2017/03/ide_00.jpg)

Na janela aberta deve adicionar-se a placa, para isso basta colocar no "URL Adicionais do Gestor de Placas" a seguinte link:

http://arduino.esp8266.com/stable/package_esp8266com_index.json

e de seguida fazer OK.

![image](https://pplware.sapo.pt/wp-content/uploads/2017/03/ide_01.jpg)

De seguida deve ir-se até ao menu Ferramentas->Placa e abrir o Gestor de placas.

![image](https://pplware.sapo.pt/wp-content/uploads/2017/03/ide_05-720x404.jpg)

No gestor de placas deve pedir-se a instalação da "esp8266" (normalmente é a ultima da lista)

(A instalação demorará algum tempo)

Após a instalação basta voltar ao menu Ferramentas e escolher a placa "Generic ESP8266 Module"

![image](https://user-images.githubusercontent.com/90988377/136958028-072036b5-d84a-48a1-b39a-794ddf0d17ee.png)
