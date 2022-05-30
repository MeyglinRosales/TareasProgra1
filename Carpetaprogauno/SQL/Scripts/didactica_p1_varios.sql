CREATE SCHEMA IF NOT EXISTS `didactica` DEFAULT CHARACTER SET utf8 ;
USE `didactica` ;

CREATE TABLE IF NOT EXISTS tbl_inventario (
	id INT NOT NULL AUTO_INCREMENT,
	nombre VARCHAR(60) NOT NULL,
	posicion VARCHAR(60) NOT NULL,
    cantidad float,
	PRIMARY KEY (id) )
ENGINE = InnoDB CHARACTER SET = latin1;