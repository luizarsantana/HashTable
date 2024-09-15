# Governança Corporativa e de Dados

### Modelo Entidade Relacionamento

<img alt="modelo-entidade-relacionamento" src="./Modelo_Entidade-Relacionamento.jpg">

### Código SQL

```
-- ---
-- Globals
-- ---

-- SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";
-- SET FOREIGN_KEY_CHECKS=0;

-- ---
-- Table 'Fornecedor/Cliente'
-- 
-- ---

DROP TABLE IF EXISTS Fornecedor/Cliente;
		
CREATE TABLE Fornecedor/Cliente (
  card_code INTEGER NULL AUTO_INCREMENT DEFAULT NULL,
  tax_id VARCHAR NULL DEFAULT NULL,
  name VARCHAR NULL DEFAULT NULL,
  cnae_code VARCHAR NULL DEFAULT NULL,
  PRIMARY KEY (card_code)
);

-- ---
-- Table 'Item'
-- 
-- ---

DROP TABLE IF EXISTS Item;
		
CREATE TABLE Item (
  item_code INTEGER NULL AUTO_INCREMENT DEFAULT NULL,
  item_name VARCHAR NULL DEFAULT NULL,
  items_group_code VARCHAR NULL DEFAULT NULL,
  purchase_item VARCHAR NULL DEFAULT NULL,
  sales_item VARCHAR NULL DEFAULT NULL,
  `inventory_item ` VARCHAR NULL DEFAULT NULL,
  ncm_code VARCHAR NULL DEFAULT NULL,
  PRIMARY KEY (item_code)
);

-- ---
-- Table 'Conta_Bancaria'
-- 
-- ---

DROP TABLE IF EXISTS Conta_Bancaria;
		
CREATE TABLE Conta_Bancaria (
  AccountNo VARCHAR NULL AUTO_INCREMENT DEFAULT NULL,
  bank_code VARCHAR NULL DEFAULT NULL,
  `branch ` VARCHAR NULL DEFAULT NULL,
  `account_name ` VARCHAR NULL DEFAULT NULL,
  card_code_Fornecedor/Cliente INTEGER NULL DEFAULT NULL,
  PRIMARY KEY (AccountNo)
);

-- ---
-- Table 'Endereço'
-- 
-- ---

DROP TABLE IF EXISTS Endereço;
		
CREATE TABLE Endereço (
  address_id INTEGER NULL AUTO_INCREMENT DEFAULT NULL,
  `address ` VARCHAR NULL DEFAULT NULL,
  card_code_Fornecedor/Cliente INTEGER NULL DEFAULT NULL,
  PRIMARY KEY (address_id)
);

-- ---
-- Table 'Fornecedor/Cliente_Item'
-- 
-- ---

DROP TABLE IF EXISTS Fornecedor/Cliente_Item;
		
CREATE TABLE Fornecedor/Cliente_Item (
  id INTEGER NULL AUTO_INCREMENT DEFAULT NULL,
  card_code_Fornecedor/Cliente INTEGER NULL DEFAULT NULL,
  item_code_item INTEGER NULL DEFAULT NULL,
  PRIMARY KEY (id)
);

-- ---
-- Foreign Keys 
-- ---

ALTER TABLE Conta_Bancaria ADD FOREIGN KEY (card_code_Fornecedor/Cliente) REFERENCES Fornecedor/Cliente (card_code);
ALTER TABLE Endereço ADD FOREIGN KEY (card_code_Fornecedor/Cliente) REFERENCES Fornecedor/Cliente (card_code);
ALTER TABLE Fornecedor/Cliente_Item ADD FOREIGN KEY (card_code_Fornecedor/Cliente) REFERENCES Fornecedor/Cliente (card_code);
ALTER TABLE Fornecedor/Cliente_Item ADD FOREIGN KEY (item_code_item) REFERENCES Item (item_code);

-- ---
-- Table Properties
-- ---

-- ALTER TABLE Fornecedor/Cliente ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;
-- ALTER TABLE Item ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;
-- ALTER TABLE Conta_Bancaria ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;
-- ALTER TABLE Endereço ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;
-- ALTER TABLE Fornecedor/Cliente_Item ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

-- ---
-- Test Data
-- ---

-- INSERT INTO Fornecedor/Cliente (card_code,tax_id,name,cnae_code) VALUES
-- ('','','','');
-- INSERT INTO Item (item_code,item_name,items_group_code,purchase_item,sales_item,`inventory_item `,ncm_code) VALUES
-- ('','','','','','','');
-- INSERT INTO Conta_Bancaria (AccountNo,bank_code,`branch `,`account_name `,card_code_Fornecedor/Cliente) VALUES
-- ('','','','','');
-- INSERT INTO Endereço (address_id,`address `,card_code_Fornecedor/Cliente) VALUES
-- ('','','');
-- INSERT INTO Fornecedor/Cliente_Item (id,card_code_Fornecedor/Cliente,item_code_item) VALUES
-- ('','','');
```

### Código XML
```
<?xml version="1.0" encoding="utf-8" ?>
<!-- SQL XML created by WWW SQL Designer, https://github.com/ondras/wwwsqldesigner/ -->
<!-- Active URL: https://sql.toad.cz/ -->
<sql>
<datatypes db="mysql">
	<group label="Numeric" color="rgb(238,238,170)">
		<type label="Integer" length="0" sql="INTEGER" quote=""/>
	 	<type label="TINYINT" length="0" sql="TINYINT" quote=""/>
	 	<type label="SMALLINT" length="0" sql="SMALLINT" quote=""/>
	 	<type label="MEDIUMINT" length="0" sql="MEDIUMINT" quote=""/>
	 	<type label="INT" length="0" sql="INT" quote=""/>
		<type label="BIGINT" length="0" sql="BIGINT" quote=""/>
		<type label="Decimal" length="1" sql="DECIMAL" re="DEC" quote=""/>
		<type label="Single precision" length="0" sql="FLOAT" quote=""/>
		<type label="Double precision" length="0" sql="DOUBLE" re="DOUBLE" quote=""/>
	</group>

	<group label="Character" color="rgb(255,200,200)">
		<type label="Char" length="1" sql="CHAR" quote="'"/>
		<type label="Varchar" length="1" sql="VARCHAR" quote="'"/>
		<type label="Text" length="0" sql="MEDIUMTEXT" re="TEXT" quote="'"/>
		<type label="Binary" length="1" sql="BINARY" quote="'"/>
		<type label="Varbinary" length="1" sql="VARBINARY" quote="'"/>
		<type label="BLOB" length="0" sql="BLOB" re="BLOB" quote="'"/>
	</group>

	<group label="Date &amp; Time" color="rgb(200,255,200)">
		<type label="Date" length="0" sql="DATE" quote="'"/>
		<type label="Time" length="0" sql="TIME" quote="'"/>
		<type label="Datetime" length="0" sql="DATETIME" quote="'"/>
		<type label="Year" length="0" sql="YEAR" quote=""/>
		<type label="Timestamp" length="0" sql="TIMESTAMP" quote="'"/>
	</group>
	
	<group label="Miscellaneous" color="rgb(200,200,255)">
		<type label="ENUM" length="1" sql="ENUM" quote=""/>
		<type label="SET" length="1" sql="SET" quote=""/>
		<type label="Bit" length="0" sql="bit" quote=""/>
	</group>
</datatypes><table x="416" y="239" name="Fornecedor/Cliente">
<row name="card_code" null="1" autoincrement="1">
<datatype>INTEGER</datatype>
<default>NULL</default></row>
<row name="tax_id" null="1" autoincrement="0">
<datatype>VARCHAR</datatype>
<default>NULL</default></row>
<row name="name" null="1" autoincrement="0">
<datatype>VARCHAR</datatype>
<default>NULL</default></row>
<row name="cnae_code" null="1" autoincrement="0">
<datatype>VARCHAR</datatype>
<default>NULL</default></row>
<key type="PRIMARY" name="">
<part>card_code</part>
</key>
</table>
<table x="1203" y="202" name="Item">
<row name="item_code" null="1" autoincrement="1">
<datatype>INTEGER</datatype>
<default>NULL</default></row>
<row name="item_name" null="1" autoincrement="0">
<datatype>VARCHAR</datatype>
<default>NULL</default></row>
<row name="items_group_code" null="1" autoincrement="0">
<datatype>VARCHAR</datatype>
<default>NULL</default></row>
<row name="purchase_item" null="1" autoincrement="0">
<datatype>VARCHAR</datatype>
<default>NULL</default></row>
<row name="sales_item" null="1" autoincrement="0">
<datatype>VARCHAR</datatype>
<default>NULL</default></row>
<row name="inventory_item " null="1" autoincrement="0">
<datatype>VARCHAR</datatype>
<default>NULL</default></row>
<row name="ncm_code" null="1" autoincrement="0">
<datatype>VARCHAR</datatype>
<default>NULL</default></row>
<key type="PRIMARY" name="">
<part>item_code</part>
</key>
</table>
<table x="749" y="51" name="Conta_Bancaria">
<row name="AccountNo" null="1" autoincrement="1">
<datatype>VARCHAR</datatype>
<default>NULL</default></row>
<row name="bank_code" null="1" autoincrement="0">
<datatype>VARCHAR</datatype>
<default>NULL</default></row>
<row name="branch " null="1" autoincrement="0">
<datatype>VARCHAR</datatype>
<default>NULL</default></row>
<row name="account_name " null="1" autoincrement="0">
<datatype>VARCHAR</datatype>
<default>NULL</default></row>
<row name="card_code_Fornecedor/Cliente" null="1" autoincrement="0">
<datatype>INTEGER</datatype>
<default>NULL</default><relation table="Fornecedor/Cliente" row="card_code" />
</row>
<key type="PRIMARY" name="">
<part>AccountNo</part>
</key>
</table>
<table x="752" y="396" name="Endereço">
<row name="address_id" null="1" autoincrement="1">
<datatype>INTEGER</datatype>
<default>NULL</default></row>
<row name="address " null="1" autoincrement="0">
<datatype>VARCHAR</datatype>
<default>NULL</default></row>
<row name="card_code_Fornecedor/Cliente" null="1" autoincrement="0">
<datatype>INTEGER</datatype>
<default>NULL</default><relation table="Fornecedor/Cliente" row="card_code" />
</row>
<key type="PRIMARY" name="">
<part>address_id</part>
</key>
</table>
<table x="851" y="248" name="Fornecedor/Cliente_Item">
<row name="id" null="1" autoincrement="1">
<datatype>INTEGER</datatype>
<default>NULL</default></row>
<row name="card_code_Fornecedor/Cliente" null="1" autoincrement="0">
<datatype>INTEGER</datatype>
<default>NULL</default><relation table="Fornecedor/Cliente" row="card_code" />
</row>
<row name="item_code_item" null="1" autoincrement="0">
<datatype>INTEGER</datatype>
<default>NULL</default><relation table="Item" row="item_code" />
</row>
<key type="PRIMARY" name="">
<part>id</part>
</key>
</table>
</sql>
```