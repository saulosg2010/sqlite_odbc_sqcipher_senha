# 🛡️ Projeto SQLite ODBC + SQLCipher

Este repositório contém o driver ODBC customizado para suporte a bancos de dados SQLite com criptografia **SQLCipher** (AES-256).

---

## 📂 Estrutura de Pastas

*   `sqlcipher-master/`: Código-fonte do SQLCipher e motor LSM.
*   `odbc_registro_drive/`: Arquivos de configuração e automação do Windows (.reg e DLLs).
*   `README.md`: Este guia de utilização.

---

## 🚀 Instalação Rápida

### Passo 1: Preparação
1.  Escolha um local definitivo para a DLL do driver (ex: `C:\Drivers\sqlite3odbc.dll`).
2.  **Não mova a DLL** após a instalação, ou a conexão com o Excel/Power BI deixará de funcionar.

### Passo 2: Registro no Windows
1.  Abra a pasta `odbc_registro_drive`.
2.  Edite o arquivo `instalar_driver.reg` (clique com o botão direito > Editar) e ajuste o caminho onde você salvou a DLL.
3.  Dê um duplo clique no arquivo `instalar_driver.reg` para registrar o driver no sistema.

---

## 📊 Conectando ao Excel e Power BI

Para que ferramentas de BI leiam o banco criptografado, é recomendado criar um **DSN de Sistema**:

1.  Abra o **Administrador de Fonte de Dados ODBC (64 bits)** no menu Iniciar.
2.  Vá em **DSN de Sistema** > **Adicionar**.
3.  Selecione **SQLite3 ODBC Driver**.
4.  No campo **Database Name**, selecione seu arquivo `.db`.
5.  No campo **Password (PWD)**, digite a senha do SQLCipher.
6.  No Excel/Power BI: Escolha a opção "Obter Dados" > "ODBC" e selecione o nome que você criou.

---

## 🛠️ Manutenção

*   Para remover o driver, utilize o arquivo `remover_registro.reg`.
*   Se houver erro de "Driver não encontrado", verifique se a versão (32 ou 64 bits) do Excel coincide com o driver instalado.

---
*Desenvolvido para integração de dados seguros.*
