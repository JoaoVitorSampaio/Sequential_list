# 📚 Sequential List (Lista Sequencial em C++)

## 📄 Descrição

Este projeto implementa um **Tipo Abstrato de Dado (TAD)** do tipo **lista sequencial estática** em C++. Ele simula uma estrutura de dados baseada em vetor com operações típicas de listas.  
Acompanha um arquivo `main.cpp` com um **caso de teste** demonstrando o uso das principais funcionalidades da lista.

---

## 🗂️ Estrutura dos Arquivos

```bash
.
├── include/
│   └── SequentialList.h     # Arquivo de cabeçalho com a definição da classe
├── src/
│   └── SequentialList.cpp   # Implementação da classe
│   └── main.cpp             # Arquivo principal com testes
├── build/                   # Diretório onde o executável será gerado
├── Makefile                 # Script de compilação
└── README.md                # Este arquivo
```

---

## ⚙️ Como Compilar e Executar

### ✅ Pré-requisitos

- [GCC](https://gcc.gnu.org/) ou outro compilador C++ compatível
- [Make](https://www.gnu.org/software/make/) instalado

### 🔨 Compilando o Projeto

Abra o terminal na raiz do projeto e execute:

```bash
make
```

O executável será gerado no diretório `build/`.

### ▶️ Executando o Programa

```bash
./build/programa
```

---

## 🔧 Funcionalidades

A classe `SequentialList` permite:

- ✅ Criar uma lista sequencial
- 📭 Verificar se a lista está **vazia** ou **cheia**
- 📐 Obter o **tamanho atual**
- 🔎 Acessar o valor de uma posição específica
- ✏️ Alterar o valor de uma posição específica
- ➕ Inserir elementos em posições válidas
- ❌ Remover elementos por posição
- 👀 Exibir todos os elementos da lista

---

## 🖥️ Exemplo de Saída

```bash
List created.
Is the list empty? Yes.
Is the list full? No.
Value 1 added at position 1.
List:
1
Value 2 added at position 1.
List:
2 1
Value 3 added at position 1.
List:
3 2 1
List size: 3
Is the list empty? No.
Is the list full? Yes.
List after removing the first element:
2 1
List size: 2
Element at second position: 1
List after modifying the second element:
2 10
```

---

## 📌 Observações

- A lista tem **tamanho fixo de 3 elementos**, definido por macro `#define SIZE 3`.
- As posições são indexadas a partir de **1** (não 0).

---

## 📝 Licença

Este projeto está sob a licença MIT.  
Sinta-se à vontade para usar, estudar e modificar conforme necessário.

---

## 🤝 Contribuições

Contribuições são bem-vindas!  
Se você quiser sugerir melhorias, correções ou novas funcionalidades, abra uma issue ou envie um pull request.
