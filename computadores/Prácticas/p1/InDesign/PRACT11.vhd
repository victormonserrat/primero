LIBRARY IEEE;
USE IEEE.std_logic_1164.all;
ENTITY SCHEMATIC1 IS PORT (
	OR3 : OUT std_logic;
	A : IN std_logic;
	B : IN std_logic;
	C : IN std_logic
); END SCHEMATIC1;



ARCHITECTURE STRUCTURE OF SCHEMATIC1 IS

-- COMPONENTS

COMPONENT \74LS32\
	PORT (
	I0_A : IN std_logic;
	I1_A : IN std_logic;
	O_A : OUT std_logic;
	VCC : IN std_logic;
	GND : IN std_logic;
	I0_B : IN std_logic;
	I1_B : IN std_logic;
	O_B : OUT std_logic;
	I0_C : IN std_logic;
	I1_C : IN std_logic;
	O_C : OUT std_logic;
	I0_D : IN std_logic;
	I1_D : IN std_logic;
	O_D : OUT std_logic
	); END COMPONENT;

-- SIGNALS

SIGNAL orcad_unused:std_logic;
SIGNAL VCC : std_logic;
SIGNAL GND : std_logic;
SIGNAL N000032 : std_logic;

-- INSTANCE ATTRIBUTES




-- GATE INSTANCES

BEGIN
U1 : \74LS32\	PORT MAP(
	I0_A => A, 
	I1_A => B, 
	O_A => N000032, 
	VCC => VCC, 
	GND => GND, 
	I0_B => N000032, 
	I1_B => C, 
	O_B => OR3, 
	I0_C => orcad_unused, 
	I1_C => orcad_unused, 
	O_C => OPEN, 
	I0_D => orcad_unused, 
	I1_D => orcad_unused, 
	O_D => OPEN
);
END STRUCTURE;

