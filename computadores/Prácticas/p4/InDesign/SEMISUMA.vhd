LIBRARY IEEE;
USE IEEE.std_logic_1164.all;
ENTITY SEMISUMA IS PORT (
	SU0 : IN std_logic;
	SU1 : IN std_logic;
	SU : OUT std_logic;
	C : OUT std_logic
); END SEMISUMA;



ARCHITECTURE STRUCTURE OF SEMISUMA IS

-- COMPONENTS

COMPONENT \74LS86\
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

COMPONENT \74LS08\
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
SIGNAL GND : std_logic;
SIGNAL VCC : std_logic;

-- INSTANCE ATTRIBUTES




-- GATE INSTANCES

BEGIN
U1 : \74LS86\	PORT MAP(
	I0_A => SU0, 
	I1_A => SU1, 
	O_A => SU, 
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
U2 : \74LS08\	PORT MAP(
	I0_A => SU1, 
	I1_A => SU0, 
	O_A => C, 
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

LIBRARY IEEE;
USE IEEE.std_logic_1164.all;
ENTITY SUMACOM IS PORT (
	SUM1 : IN std_logic;
	SUM0 : IN std_logic;
	SUMA : OUT std_logic;
	C0 : OUT std_logic;
	CI : IN std_logic
); END SUMACOM;



ARCHITECTURE STRUCTURE OF SUMACOM IS

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

COMPONENT SEMISUMA	 PORT (
	SU0 : IN std_logic;
	SU1 : IN std_logic;
	SU : OUT std_logic;
	C : OUT std_logic
); END COMPONENT;

-- SIGNALS

SIGNAL orcad_unused:std_logic;
SIGNAL N00055 : std_logic;
SIGNAL N00046 : std_logic;
SIGNAL VCC : std_logic;
SIGNAL GND : std_logic;
SIGNAL N00007 : std_logic;

-- INSTANCE ATTRIBUTES




-- GATE INSTANCES

BEGIN
U4 : \74LS32\	PORT MAP(
	I0_A => N00046, 
	I1_A => N00055, 
	O_A => C0, 
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
SS0 : SEMISUMA	PORT MAP(
	SU0 => SUM0, 
	SU1 => SUM1, 
	SU => N00007, 
	C => N00055
);
SS1 : SEMISUMA	PORT MAP(
	SU0 => N00007, 
	SU1 => CI, 
	SU => SUMA, 
	C => N00046
);
END STRUCTURE;

LIBRARY IEEE;
USE IEEE.std_logic_1164.all;
ENTITY SUMA4BIT IS PORT (
	B : IN std_logic_vector(3 DOWNTO 0);
	S : OUT std_logic_vector(3 DOWNTO 0);
	A : IN std_logic_vector(3 DOWNTO 0);
	M : IN std_logic;
	C_IN : IN std_logic;
	C_OUT : OUT std_logic
); END SUMA4BIT;



ARCHITECTURE STRUCTURE OF SUMA4BIT IS

-- COMPONENTS

COMPONENT \74LS86\
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

COMPONENT SUMACOM	 PORT (
	SUM1 : IN std_logic;
	SUM0 : IN std_logic;
	SUMA : OUT std_logic;
	C0 : OUT std_logic;
	CI : IN std_logic
); END COMPONENT;

-- SIGNALS

SIGNAL orcad_unused:std_logic;
SIGNAL N000091 : std_logic;
SIGNAL N00716 : std_logic;
SIGNAL N00701 : std_logic;
SIGNAL N00686 : std_logic;
SIGNAL N000071 : std_logic;
SIGNAL GND : std_logic;
SIGNAL VCC : std_logic;
SIGNAL N000051 : std_logic;
SIGNAL N000031 : std_logic;

-- INSTANCE ATTRIBUTES




-- GATE INSTANCES

BEGIN
U1 : \74LS86\	PORT MAP(
	I0_A => orcad_unused, 
	I1_A => orcad_unused, 
	O_A => OPEN, 
	VCC => OPEN, 
	GND => OPEN, 
	I0_B => B(0), 
	I1_B => M, 
	O_B => N000031, 
	I0_C => B(1), 
	I1_C => M, 
	O_C => N000051, 
	I0_D => B(2), 
	I1_D => M, 
	O_D => N000071
);
U3 : \74LS86\	PORT MAP(
	I0_A => B(3), 
	I1_A => M, 
	O_A => N000091, 
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
SC0 : SUMACOM	PORT MAP(
	SUM1 => A(0), 
	SUM0 => N000031, 
	SUMA => S(0), 
	C0 => N00686, 
	CI => C_IN
);
SC1 : SUMACOM	PORT MAP(
	SUM1 => A(1), 
	SUM0 => N000051, 
	SUMA => S(1), 
	C0 => N00701, 
	CI => N00686
);
SC2 : SUMACOM	PORT MAP(
	SUM1 => A(2), 
	SUM0 => N000071, 
	SUMA => S(2), 
	C0 => N00716, 
	CI => N00701
);
SC3 : SUMACOM	PORT MAP(
	SUM1 => A(3), 
	SUM0 => N000091, 
	SUMA => S(3), 
	C0 => C_OUT, 
	CI => N00716
);
END STRUCTURE;

