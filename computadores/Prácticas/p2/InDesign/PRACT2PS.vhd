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

COMPONENT \74LS21\
	PORT (
	I0_A : IN std_logic;
	I1_A : IN std_logic;
	I2_A : IN std_logic;
	I3_A : IN std_logic;
	O_A : OUT std_logic;
	VCC : IN std_logic;
	GND : IN std_logic;
	I0_B : IN std_logic;
	I1_B : IN std_logic;
	I2_B : IN std_logic;
	I3_B : IN std_logic;
	O_B : OUT std_logic
	); END COMPONENT;

-- SIGNALS

SIGNAL orcad_unused:std_logic;
SIGNAL N000272 : std_logic;
SIGNAL GND : std_logic;
SIGNAL VCC : std_logic;
SIGNAL N00041 : std_logic;
SIGNAL N00050 : std_logic;
SIGNAL N00059 : std_logic;
SIGNAL N00035 : std_logic;

-- INSTANCE ATTRIBUTES




-- GATE INSTANCES

BEGIN
U1 : \74LS32\	PORT MAP(
	I0_A => P, 
	I1_A => A1, 
	O_A => N00059, 
	VCC => VCC, 
	GND => GND, 
	I0_B => P, 
	I1_B => A2, 
	O_B => N00050, 
	I0_C => P, 
	I1_C => A3, 
	O_C => N00041, 
	I0_D => A1, 
	I1_D => A2, 
	O_D => N000272
);
U2 : \74LS21\	PORT MAP(
	I0_A => N00059, 
	I1_A => N00050, 
	I2_A => N00041, 
	I3_A => N00035, 
	O_A => C, 
	VCC => VCC, 
	GND => GND, 
	I0_B => orcad_unused, 
	I1_B => orcad_unused, 
	I2_B => orcad_unused, 
	I3_B => orcad_unused, 
	O_B => OPEN
);
U3 : \74LS32\	PORT MAP(
	I0_A => N000272, 
	I1_A => A3, 
	O_A => N00035, 
	VCC => VCC, 
	GND => GND, 
	I0_B => orcad_unused, 
	I1_B => orcad_unused, 
	O_B => OPEN, 
	I0_C => orcad_unused, 
	I1_C => orcad_unused, 
	O_C => OPEN, 
	I0_D => orcad_unused, 
	I1_D => orcad_unused, 
	O_D => OPEN
);
END STRUCTURE;

