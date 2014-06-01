LIBRARY IEEE;
USE IEEE.std_logic_1164.all;
ENTITY SCHEMATIC1 IS PORT (
	A1 : IN std_logic;
	A2 : IN std_logic;
	A3 : IN std_logic;
	P : IN std_logic;
	C : OUT std_logic
); END SCHEMATIC1;



ARCHITECTURE STRUCTURE OF SCHEMATIC1 IS

-- COMPONENTS

COMPONENT \74LS02\
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

COMPONENT \74LS27\
	PORT (
	I0_A : IN std_logic;
	I1_A : IN std_logic;
	I2_A : IN std_logic;
	O_A : OUT std_logic;
	VCC : IN std_logic;
	GND : IN std_logic;
	I0_B : IN std_logic;
	I1_B : IN std_logic;
	I2_B : IN std_logic;
	O_B : OUT std_logic;
	I0_C : IN std_logic;
	I1_C : IN std_logic;
	I2_C : IN std_logic;
	O_C : OUT std_logic
	); END COMPONENT;

-- SIGNALS

SIGNAL orcad_unused:std_logic;
SIGNAL N000072 : std_logic;
SIGNAL N000092 : std_logic;
SIGNAL GND : std_logic;
SIGNAL VCC : std_logic;
SIGNAL N00324 : std_logic;
SIGNAL N00318 : std_logic;
SIGNAL N00345 : std_logic;
SIGNAL N00321 : std_logic;
SIGNAL N00334 : std_logic;
SIGNAL N00348 : std_logic;

-- INSTANCE ATTRIBUTES




-- GATE INSTANCES

BEGIN
U1 : \74LS02\	PORT MAP(
	I0_A => P, 
	I1_A => A1, 
	O_A => N00345, 
	VCC => VCC, 
	GND => GND, 
	I0_B => N00334, 
	I1_B => N00334, 
	O_B => N00318, 
	I0_C => N00345, 
	I1_C => N000072, 
	O_C => N00334, 
	I0_D => P, 
	I1_D => A2, 
	O_D => N000072
);
U2 : \74LS02\	PORT MAP(
	I0_A => N00318, 
	I1_A => N00321, 
	O_A => C, 
	VCC => VCC, 
	GND => GND, 
	I0_B => P, 
	I1_B => A3, 
	O_B => N000092, 
	I0_C => N00324, 
	I1_C => N00324, 
	O_C => N00321, 
	I0_D => N000092, 
	I1_D => N00348, 
	O_D => N00324
);
U3 : \74LS27\	PORT MAP(
	I0_A => A1, 
	I1_A => A2, 
	I2_A => A3, 
	O_A => N00348, 
	VCC => VCC, 
	GND => GND, 
	I0_B => orcad_unused, 
	I1_B => orcad_unused, 
	I2_B => orcad_unused, 
	O_B => OPEN, 
	I0_C => orcad_unused, 
	I1_C => orcad_unused, 
	I2_C => orcad_unused, 
	O_C => OPEN
);
END STRUCTURE;

