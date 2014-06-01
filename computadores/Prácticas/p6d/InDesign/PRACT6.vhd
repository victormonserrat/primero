LIBRARY IEEE;
USE IEEE.std_logic_1164.all;
ENTITY SCHEMATIC1 IS PORT (
	COUNT : OUT std_logic_vector(2 DOWNTO 0);
	D : IN std_logic;
	RESET : IN std_logic;
	CLK : IN std_logic;
	C : OUT std_logic
); END SCHEMATIC1;



ARCHITECTURE STRUCTURE OF SCHEMATIC1 IS

-- COMPONENTS

COMPONENT \74LS11\
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

COMPONENT \74LS74\
	PORT (
	D_A : IN std_logic;
	CLK_A : IN std_logic;
	Q_A : OUT std_logic;
	\Q\\_A\ : OUT std_logic;
	VCC : IN std_logic;
	PR_A : IN std_logic;
	GND : IN std_logic;
	CL_A : IN std_logic;
	D_B : IN std_logic;
	CLK_B : IN std_logic;
	Q_B : OUT std_logic;
	\Q\\_B\ : OUT std_logic;
	PR_B : IN std_logic;
	CL_B : IN std_logic
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

COMPONENT \74LS04\
	PORT (
	I_A : IN std_logic;
	O_A : OUT std_logic;
	VCC : IN std_logic;
	GND : IN std_logic;
	I_B : IN std_logic;
	O_B : OUT std_logic;
	I_C : IN std_logic;
	O_C : OUT std_logic;
	I_D : IN std_logic;
	O_D : OUT std_logic;
	I_E : IN std_logic;
	O_E : OUT std_logic;
	I_F : IN std_logic;
	O_F : OUT std_logic
	); END COMPONENT;

-- SIGNALS

SIGNAL orcad_unused:std_logic;
SIGNAL N01416 : std_logic;
SIGNAL N00660 : std_logic;
SIGNAL N00190 : std_logic;
SIGNAL N00122 : std_logic;
SIGNAL N01419 : std_logic;
SIGNAL N01102 : std_logic;
SIGNAL N00826 : std_logic;
SIGNAL N00332 : std_logic;
SIGNAL N00064 : std_logic;
SIGNAL N001071 : std_logic;
SIGNAL GND : std_logic;
SIGNAL VCC : std_logic;
SIGNAL N00073 : std_logic;
SIGNAL N00040 : std_logic;
SIGNAL N00076 : std_logic;
SIGNAL N00067 : std_logic;
SIGNAL N00043 : std_logic;
SIGNAL N00079 : std_logic;
SIGNAL N00070 : std_logic;
SIGNAL N00046 : std_logic;
SIGNAL VCC_CIRCLE : std_logic;
SIGNAL N00052 : std_logic;
SIGNAL N00548 : std_logic;
SIGNAL N00682 : std_logic;
SIGNAL N00509 : std_logic;

-- INSTANCE ATTRIBUTES




-- GATE INSTANCES

BEGIN
COUNT(2)<=N00548;
COUNT(1)<=N00682;
COUNT(0)<=N00509;
U1 : \74LS11\	PORT MAP(
	I0_A => N00190, 
	I1_A => N00548, 
	I2_A => N00509, 
	O_A => N00040, 
	VCC => VCC, 
	GND => GND, 
	I0_B => D, 
	I1_B => N00548, 
	I2_B => N01102, 
	O_B => N00043, 
	I0_C => D, 
	I1_C => N00682, 
	I2_C => N00509, 
	O_C => N00046
);
U2 : \74LS32\	PORT MAP(
	I0_A => N00040, 
	I1_A => N00043, 
	O_A => N00052, 
	VCC => VCC, 
	GND => GND, 
	I0_B => N00052, 
	I1_B => N01416, 
	O_B => N00122, 
	I0_C => N00046, 
	I1_C => N01419, 
	O_C => N01416, 
	I0_D => N00067, 
	I1_D => N00064, 
	O_D => N00070
);
U3 : \74LS74\	PORT MAP(
	D_A => N00122, 
	CLK_A => CLK, 
	Q_A => N00548, 
	\Q\\_A\ => N00660, 
	VCC => VCC, 
	PR_A => VCC_CIRCLE, 
	GND => GND, 
	CL_A => RESET, 
	D_B => N00332, 
	CLK_B => CLK, 
	Q_B => N00682, 
	\Q\\_B\ => N00826, 
	PR_B => VCC_CIRCLE, 
	CL_B => RESET
);
U4 : \74LS21\	PORT MAP(
	I0_A => N00660, 
	I1_A => N00826, 
	I2_A => N01102, 
	I3_A => N00190, 
	O_A => N01419, 
	VCC => VCC, 
	GND => GND, 
	I0_B => D, 
	I1_B => N00660, 
	I2_B => N00826, 
	I3_B => N00509, 
	O_B => N00079
);
U5 : \74LS11\	PORT MAP(
	I0_A => N00190, 
	I1_A => N00548, 
	I2_A => N01102, 
	O_A => N00067, 
	VCC => VCC, 
	GND => GND, 
	I0_B => N00190, 
	I1_B => N00682, 
	I2_B => N00509, 
	O_B => N00064, 
	I0_C => D, 
	I1_C => N00682, 
	I2_C => N01102, 
	O_C => N00076
);
U6 : \74LS32\	PORT MAP(
	I0_A => N00070, 
	I1_A => N00073, 
	O_A => N00332, 
	VCC => VCC, 
	GND => GND, 
	I0_B => N00076, 
	I1_B => N00079, 
	O_B => N00073, 
	I0_C => N01419, 
	I1_C => N001071, 
	O_C => C, 
	I0_D => orcad_unused, 
	I1_D => orcad_unused, 
	O_D => OPEN
);
U7 : \74LS11\	PORT MAP(
	I0_A => N00548, 
	I1_A => D, 
	I2_A => N00509, 
	O_A => N001071, 
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
U8 : \74LS74\	PORT MAP(
	D_A => N01102, 
	CLK_A => CLK, 
	Q_A => N00509, 
	\Q\\_A\ => N01102, 
	VCC => VCC, 
	PR_A => VCC_CIRCLE, 
	GND => GND, 
	CL_A => RESET, 
	D_B => orcad_unused, 
	CLK_B => orcad_unused, 
	Q_B => OPEN, 
	\Q\\_B\ => OPEN, 
	PR_B => orcad_unused, 
	CL_B => orcad_unused
);
U9 : \74LS04\	PORT MAP(
	I_A => D, 
	O_A => N00190, 
	VCC => VCC, 
	GND => GND, 
	I_B => orcad_unused, 
	O_B => OPEN, 
	I_C => orcad_unused, 
	O_C => OPEN, 
	I_D => orcad_unused, 
	O_D => OPEN, 
	I_E => orcad_unused, 
	O_E => OPEN, 
	I_F => orcad_unused, 
	O_F => OPEN
);
END STRUCTURE;

