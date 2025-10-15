FarmTech Solutions – Fase 2 (ESP32 @ Wokwi)

Simulação de irrigação inteligente com ESP32. Para apresentação estável, este repositório inclui um modo demo automático: o ESP32 alterna o relé e o LED azul onboard em ciclos de 1s ON / 1s OFF, comprovando o acionamento.

🎥 Vídeo (Não listado)

https://youtube.com/shorts/2c-T01bLa0U?si=zQWwDJ41T0kfJQPq

🧩 Componentes (Wokwi)

ESP32 DevKit v1

DHT22 (umidade do “solo” na simulação)

LDR + resistor 10k (simulando pH)

3 botões (N, P, K) — nutrientes

Potenciômetro — chuva prevista (mm)

Módulo de relé (bomba d’água)

Pinagem principal

Relé: IN → IO5, VCC → 5V, GND → GND

DHT22: DATA → IO15, VCC → 3V3, GND → GND

LDR: VCC → 3V3, OUT → IO34 e OUT → r10k:1; r10k:2 → GND

NPK (botões): N → IO12, P → IO13, K → IO14 (outro pino em GND)

Chuva (pot): SIG → IO35, VCC → 3V3, GND → GND

▶️ Como executar (demo rápido)

Abra o projeto no Wokwi (ESP32).

Cole diagram.json (circuito) e sketch.ino (código).

Play (▶). O LED azul do ESP32 pisca 1s/1s.

Se o LED do relé não piscar, inverta HIGH ↔ LOW nas duas linhas do relé no loop().

🔍 Lógica do sistema (modo completo – documentação)

Liga a bomba se todas: umidade < 44.5%, pH ∈ [5.9, 7.1], npk_ok ≥ 2, chuva < 5 mm.

Desliga se qualquer falhar (histerese com HUM_OFF = 61%).

📂 Estrutura

/ (raiz)
├─ sketch.ino — demo automático: relé/LED 1s ON / 1s OFF
├─ diagram.json — circuito do Wokwi
└─ README.md

Observação: substituições didáticas — LDR → pH, DHT22 → umidade do solo, botões N/P/K → nutrientes, potenciômetro → chuva prevista. O LED azul onboard garante a comprovação de atuação, mesmo que o LED do relé varie conforme o módulo.

Aluno: Gustavo Tsoares
RM: rm567848
