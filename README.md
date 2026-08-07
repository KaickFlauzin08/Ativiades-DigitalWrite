Markdown
# 🚨 Sirene Policial com LEDs e Buzzer (`digitalWrite`)

Este repositório contém o projeto de um efeito visual e sonoro de **Sirene de Polícia** desenvolvido para microcontroladores (como ESP32 ou Arduino) utilizando a biblioteca do Arduino em C++.

O sistema utiliza saídas digitais (`digitalWrite`) para alternar dois grupos de LEDs enquanto gera uma variação progressiva de frequência sonora (`tone`) através de um buzzer.

---

## 📋 Sumário
- [Visão Geral](#-visão-geral)
- [Componentes Necessários](#-componentes-necessários)
- [Mapeamento dos Pinos](#-mapeamento-dos-pinos-pinout)
- [Como Funciona](#-como-funciona)
- [Autor](#-como-executar)

---

## 🔍 Visão Geral

O projeto simula a luz e o som característicos de uma viatura de emergência:
* **Efeito Sonoro:** Variação contínua e suave da frequência do buzzer entre **600 Hz** e **1200 Hz**.
* **Efeito Visual:** Alternância imediata entre os LEDs **Azuis** e **Vermelhos** de acordo com o sentido da varredura sonora (subida ou descida).

---

## 🛠️ Componentes Necessários

| Componente | Quantidade | Descrição |
| :--- | :---: | :--- |
| **Microcontrolador** | 1 | ESP32 ou Arduino |
| **LED Azul** | 3 | Indicadores luminosos (Pinos 34, 35 e 32) |
| **LED Vermelho** | 2 | Indicadores luminosos (Pinos 23 e 16) |
| **Buzzer Passivo** | 1 | Emissor de tom sonoro (Pino 22) |
| **Resistores (220Ω)** | 5 | Limitadores de corrente para os LEDs |
| **Protoboard & Jumpers** | 1 kit | Para conexões do circuito |

---

## 📌 Mapeamento dos Pinos (Pinout)

> ⚠️ **Atenção (ESP32):** Se estiver usando ESP32, atente-se ao fato de que os pinos GPIO 34 e 35 são *Input Only* na placa física. Caso vá montar na prática, substitua-os por pinos configuráveis como saída (ex: GPIO 25, 26, 27, 4, 18).

| Periférico | Pino GPIO | Função |
| :--- | :---: | :--- |
| **Buzzer** | `22` | Emissão de frequências sonoras |
| **LED Azul 1** | `34` | Grupo de LEDs Azuis |
| **LED Azul 2** | `35` | Grupo de LEDs Azuis |
| **LED Azul 3** | `32` | Grupo de LEDs Azuis |
| **LED Vermelho 1** | `23` | Grupo de LEDs Vermelhos |
| **LED Vermelho 2** | `16` | Grupo de LEDs Vermelhos |

---

## ⚡ Como Funciona

1. **Setup (`setup`):** Configura os pinos declarados nos arrays `bluePins` e `redPins`, além do pino do Buzzer, como saídas digitais (`OUTPUT`).
2. **Ciclo Ascendente:**
   * LEDs **Azuis** ficam acesos (`HIGH`);
   * LEDs **Vermelhos** ficam apagados (`LOW`);
   * O tom do buzzer sobe de 600 Hz a 1200 Hz em passos de 15 Hz.
3. **Ciclo Descendente:**
   * LEDs **Azuis** apagam (`LOW`);
   * LEDs **Vermelhos** acendem (`HIGH`);
   * O tom do buzzer desce de 1200 Hz a 600 Hz em passos de 15 Hz.

---

##   🚀 Como Executar
Clone este repositório:

Bash
git clone [https://github.com/KaickFlauzin08/Ativiades-DigitalWrite.git](https://github.com/KaickFlauzin08/Ativiades-DigitalWrite.git)
Abra a pasta do projeto no VS Code com a extensão PlatformIO (ou na Arduino IDE).

Conecte sua placa de desenvolvimento ao computador via cabo USB.

Compile e faça o upload do código para a placa.

✒️ Autor
Desenvolvido por KaickFlauzin08.
