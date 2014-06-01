LIBRARY IEEE;
USE IEEE.std_logic_1164.all;
ENTITY ULOG1BIT IS PORT (
	S : IN std_logic_vector(2 DOWNTO 0);
	Ai : IN std_logic;
	Bi : IN std_logic;
	LOGi : OUT std_logic
); END ULOG1BIT;



ARCHITECTURE STRUCTURE OF ULOG1BIT IS

-- COMPONENTS

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

COMPONENT \74LS153\
	PORT (
	\1C0\ : IN std_logic;
	\1C1\ : IN std_logic;
	\1C2\ : IN std_logic;
	\1C3\ : IN std_logic;
	\2C0\ : IN std_logic;
	\2C1\ : IN std_logic;
	\2C2\ : IN std_logic;
	\2C3\ : IN std_logic;
	A : IN std_logic;
	B : IN std_logic;
	\1G\ : IN std_logic;
	\2G\ : IN std_logic;
	\1Y\ : OUT std_logic;
	\2Y\ : OUT std_logic;
	VCC : IN std_logic;
	GND : IN std_logic
	); END COMPONENT;

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

-- SIGNALS

SIGNAL orcad_unused:std_logic;
SIGNAL GND_POWER : std_logic;
SIGNAL VCC : std_logic;
SIGNAL GND : std_logic;
SIGNAL N00019 : std_logic;
SIGNAL N00203 : std_logic;
SIGNAL N00194 : std_logic;
SIGNAL N00185 : std_logic;

-- INSTANCE ATTRIBUTES




-- GATE INSTANCES

BEGIN
U2 : \74LS04\	PORT MAP(
	I_A => orcad_unused, 
	O_A => OPEN, 
	VCC => OPEN, 
	GND => OPEN, 
	I_B => orcad_unused, 
	O_B => OPEN, 
	I_C => orcad_unused, 
	O_C => OPEN, 
	I_D => AI, 
	O_D => N00019, 
	I_E => orcad_unused, 
	O_E => OPEN, 
	I_F => orcad_unused, 
	O_F => OPEN
);
U6 : \74LS32\	PORT MAP(
	I0_A => N00019, 
	I1_A => BI, 
	O_A => N00203, 
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
U7 : \74LS08\	PORT MAP(
	I0_A => BI, 
	I1_A => AI, 
	O_A => N00194, 
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
U8 : \74LS153\	PORT MAP(
	\1C0\ => N00019, 
	\1C1\ => N00203, 
	\1C2\ => N00194, 
	\1C3\ => N00185, 
	\2C0\ => GND_POWER, 
	\2C1\ => GND_POWER, 
	\2C2\ => GND_POWER, 
	\2C3\ => GND_POWER, 
	A => S(0), 
	B => S(1), 
	\1G\ => S(2), 
	\2G\ => GND_POWER, 
	\1Y\ => LOGI, 
	\2Y\ => OPEN, 
	VCC => VCC, 
	GND => GND
);
U9 : \74LS86\	PORT MAP(
	I0_A => BI, 
	I1_A => AI, 
	O_A => N00185, 
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
ENTITY ULOGICA IS PORT (
	LOG : OUT std_logic_vector(3 DOWNTO 0);
	A : IN std_logic_vector(3 DOWNTO 0);
	B : IN std_logic_vector(3 DOWNTO 0);
	S : IN std_logic_vector(2 DOWNTO 0)
); END ULOGICA;



ARCHITECTURE STRUCTURE OF ULOGICA IS

-- COMPONENTS

COMPONENT ULOG1BIT	 PORT (
	Ai : IN std_logic;
	Bi : IN std_logic;
	S : IN std_logic_vector(2 DOWNTO 0);
	LOGi : OUT std_logic
); END COMPONENT;

-- SIGNALS

SIGNAL orcad_unused:std_logic;

-- INSTANCE ATTRIBUTES




-- GATE INSTANCES

BEGIN
ULOG3 : ULOG1BIT	PORT MAP(
	Ai => A(3), 
	Bi => B(3), 
	S(2) => S(2), 
	S(1) => S(1), 
	S(0) => S(0), 
	LOGi => LOG(3)
);
ULOG0 : ULOG1BIT	PORT MAP(
	Ai => A(0), 
	Bi => B(0), 
	S(2) => S(2), 
	S(1) => S(1), 
	S(0) => S(0), 
	LOGi => LOG(0)
);
ULOG1 : ULOG1BIT	PORT MAP(
	Ai => A(1), 
	Bi => B(1), 
	S(2) => S(2), 
	S(1) => S(1), 
	S(0) => S(0), 
	LOGi => LOG(1)
);
ULOG2 : ULOG1BIT	PORT MAP(
	Ai => A(2), 
	Bi => B(2), 
	S(2) => S(2), 
	S(1) => S(1), 
	S(0) => S(0), 
	LOGi => LOG(2)
);
END STRUCTURE;

LIBRARY IEEE;
USE IEEE.std_logic_1164.all;
ENTITY Mod_Cin IS PORT (
	S : IN std_logic_vector(2 DOWNTO 0);
	CinM : OUT std_logic;
	Cin : IN std_logic
); END Mod_Cin;



ARCHITECTURE STRUCTURE OF Mod_Cin IS

-- COMPONENTS

COMPONENT \74LS153\
	PORT (
	\1C0\ : IN std_logic;
	\1C1\ : IN std_logic;
	\1C2\ : IN std_logic;
	\1C3\ : IN std_logic;
	\2C0\ : IN std_logic;
	\2C1\ : IN std_logic;
	\2C2\ : IN std_logic;
	\2C3\ : IN std_logic;
	A : IN std_logic;
	B : IN std_logic;
	\1G\ : IN std_logic;
	\2G\ : IN std_logic;
	\1Y\ : OUT std_logic;
	\2Y\ : OUT std_logic;
	VCC : IN std_logic;
	GND : IN std_logic
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
SIGNAL N00135 : std_logic;
SIGNAL GND : std_logic;
SIGNAL VCC : std_logic;
SIGNAL VCC_BAR : std_logic;
SIGNAL GND_POWER : std_logic;

-- INSTANCE ATTRIBUTES




-- GATE INSTANCES

BEGIN
U1 : \74LS153\	PORT MAP(
	\1C0\ => CIN, 
	\1C1\ => VCC_BAR, 
	\1C2\ => GND_POWER, 
	\1C3\ => CIN, 
	\2C0\ => GND_POWER, 
	\2C1\ => GND_POWER, 
	\2C2\ => GND_POWER, 
	\2C3\ => GND_POWER, 
	A => S(0), 
	B => S(1), 
	\1G\ => N00135, 
	\2G\ => GND_POWER, 
	\1Y\ => CINM, 
	\2Y\ => OPEN, 
	VCC => VCC, 
	GND => GND
);
U2 : \74LS04\	PORT MAP(
	I_A => S(2), 
	O_A => N00135, 
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

LIBRARY IEEE;
USE IEEE.std_logic_1164.all;
ENTITY MOD_A_B_1BIT IS PORT (
	S : IN std_logic_vector(2 DOWNTO 0);
	Bi : IN std_logic;
	AMi : OUT std_logic;
	BMi : OUT std_logic;
	Ai : IN std_logic
); END MOD_A_B_1BIT;



ARCHITECTURE STRUCTURE OF MOD_A_B_1BIT IS

-- COMPONENTS

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

COMPONENT \74LS153\
	PORT (
	\1C0\ : IN std_logic;
	\1C1\ : IN std_logic;
	\1C2\ : IN std_logic;
	\1C3\ : IN std_logic;
	\2C0\ : IN std_logic;
	\2C1\ : IN std_logic;
	\2C2\ : IN std_logic;
	\2C3\ : IN std_logic;
	A : IN std_logic;
	B : IN std_logic;
	\1G\ : IN std_logic;
	\2G\ : IN std_logic;
	\1Y\ : OUT std_logic;
	\2Y\ : OUT std_logic;
	VCC : IN std_logic;
	GND : IN std_logic
	); END COMPONENT;

-- SIGNALS

SIGNAL orcad_unused:std_logic;
SIGNAL VCC : std_logic;
SIGNAL GND : std_logic;
SIGNAL N00136 : std_logic;
SIGNAL N00122 : std_logic;
SIGNAL VCC_BAR : std_logic;
SIGNAL GND_POWER : std_logic;

-- INSTANCE ATTRIBUTES




-- GATE INSTANCES

BEGIN
U2 : \74LS04\	PORT MAP(
	I_A => orcad_unused, 
	O_A => OPEN, 
	VCC => OPEN, 
	GND => OPEN, 
	I_B => BI, 
	O_B => N00136, 
	I_C => S(2), 
	O_C => N00122, 
	I_D => orcad_unused, 
	O_D => OPEN, 
	I_E => orcad_unused, 
	O_E => OPEN, 
	I_F => orcad_unused, 
	O_F => OPEN
);
U3 : \74LS153\	PORT MAP(
	\1C0\ => AI, 
	\1C1\ => GND_POWER, 
	\1C2\ => AI, 
	\1C3\ => AI, 
	\2C0\ => BI, 
	\2C1\ => N00136, 
	\2C2\ => VCC_BAR, 
	\2C3\ => N00136, 
	A => S(0), 
	B => S(1), 
	\1G\ => N00122, 
	\2G\ => N00122, 
	\1Y\ => AMI, 
	\2Y\ => BMI, 
	VCC => VCC, 
	GND => GND
);
END STRUCTURE;

LIBRARY IEEE;
USE IEEE.std_logic_1164.all;
ENTITY MOD_A_B IS PORT (
	AM : OUT std_logic_vector(3 DOWNTO 0);
	BM : OUT std_logic_vector(3 DOWNTO 0);
	A : IN std_logic_vector(3 DOWNTO 0);
	B : IN std_logic_vector(3 DOWNTO 0);
	S : IN std_logic_vector(2 DOWNTO 0)
); END MOD_A_B;



ARCHITECTURE STRUCTURE OF MOD_A_B IS

-- COMPONENTS

COMPONENT MOD_A_B_1BIT	 PORT (
	Bi : IN std_logic;
	AMi : OUT std_logic;
	BMi : OUT std_logic;
	Ai : IN std_logic;
	S : IN std_logic_vector(2 DOWNTO 0)
); END COMPONENT;

-- SIGNALS

SIGNAL orcad_unused:std_logic;

-- INSTANCE ATTRIBUTES




-- GATE INSTANCES

BEGIN
MOD_AB_0 : MOD_A_B_1BIT	PORT MAP(
	Bi => B(0), 
	AMi => AM(0), 
	BMi => BM(0), 
	Ai => A(0), 
	S(2) => S(2), 
	S(1) => S(1), 
	S(0) => S(0)
);
MOD_AB_1 : MOD_A_B_1BIT	PORT MAP(
	Bi => B(1), 
	AMi => AM(1), 
	BMi => BM(1), 
	Ai => A(1), 
	S(2) => S(2), 
	S(1) => S(1), 
	S(0) => S(0)
);
MOD_AB_2 : MOD_A_B_1BIT	PORT MAP(
	Bi => B(2), 
	AMi => AM(2), 
	BMi => BM(2), 
	Ai => A(2), 
	S(2) => S(2), 
	S(1) => S(1), 
	S(0) => S(0)
);
MOD_AB_3 : MOD_A_B_1BIT	PORT MAP(
	Bi => B(3), 
	AMi => AM(3), 
	BMi => BM(3), 
	Ai => A(3), 
	S(2) => S(2), 
	S(1) => S(1), 
	S(0) => S(0)
);
END STRUCTURE;

LIBRARY IEEE;
USE IEEE.std_logic_1164.all;
ENTITY UARIT IS PORT (
	A : IN std_logic_vector(3 DOWNTO 0);
	B : IN std_logic_vector(3 DOWNTO 0);
	S : IN std_logic_vector(2 DOWNTO 0);
	ARIT : OUT std_logic_vector(3 DOWNTO 0);
	Co : OUT std_logic;
	Ci : IN std_logic
); END UARIT;



ARCHITECTURE STRUCTURE OF UARIT IS

-- COMPONENTS

COMPONENT \74LS83\
	PORT (
	A1 : IN std_logic;
	A2 : IN std_logic;
	A3 : IN std_logic;
	A4 : IN std_logic;
	B1 : IN std_logic;
	B2 : IN std_logic;
	B3 : IN std_logic;
	B4 : IN std_logic;
	C0 : IN std_logic;
	S1 : OUT std_logic;
	S2 : OUT std_logic;
	S3 : OUT std_logic;
	S4 : OUT std_logic;
	C4 : OUT std_logic;
	VCC : IN std_logic;
	GND : IN std_logic
	); END COMPONENT;

COMPONENT MOD_A_B	 PORT (
	AM : OUT std_logic_vector(3 DOWNTO 0);
	BM : OUT std_logic_vector(3 DOWNTO 0);
	A : IN std_logic_vector(3 DOWNTO 0);
	B : IN std_logic_vector(3 DOWNTO 0);
	S : IN std_logic_vector(2 DOWNTO 0)
); END COMPONENT;

COMPONENT Mod_Cin	 PORT (
	CinM : OUT std_logic;
	Cin : IN std_logic;
	S : IN std_logic_vector(2 DOWNTO 0)
); END COMPONENT;

-- SIGNALS

SIGNAL orcad_unused:std_logic;
SIGNAL VCC : std_logic;
SIGNAL GND : std_logic;
SIGNAL N00088 : std_logic;
SIGNAL N00091 : std_logic;
SIGNAL N00097 : std_logic;
SIGNAL N00094 : std_logic;
SIGNAL N00174 : std_logic;
SIGNAL BM : std_logic_vector(3 DOWNTO 0);
SIGNAL AM : std_logic_vector(3 DOWNTO 0);

-- INSTANCE ATTRIBUTES




-- GATE INSTANCES

BEGIN
U5 : \74LS83\	PORT MAP(
	A1 => AM(0), 
	A2 => AM(1), 
	A3 => AM(2), 
	A4 => AM(3), 
	B1 => BM(0), 
	B2 => BM(1), 
	B3 => BM(2), 
	B4 => BM(3), 
	C0 => N00174, 
	S1 => N00088, 
	S2 => N00091, 
	S3 => N00094, 
	S4 => N00097, 
	C4 => CO, 
	VCC => VCC, 
	GND => GND
);
MOD_A_B : MOD_A_B	PORT MAP(
	AM(3) => AM(3), 
	AM(2) => AM(2), 
	AM(1) => AM(1), 
	AM(0) => AM(0), 
	BM(3) => BM(3), 
	BM(2) => BM(2), 
	BM(1) => BM(1), 
	BM(0) => BM(0), 
	A(3) => A(3), 
	A(2) => A(2), 
	A(1) => A(1), 
	A(0) => A(0), 
	B(3) => B(3), 
	B(2) => B(2), 
	B(1) => B(1), 
	B(0) => B(0), 
	S(2) => S(2), 
	S(1) => S(1), 
	S(0) => S(0)
);
MOD_Cin : Mod_Cin	PORT MAP(
	CinM => N00174, 
	Cin => CI, 
	S(2) => S(2), 
	S(1) => S(1), 
	S(0) => S(0)
);
END STRUCTURE;

LIBRARY IEEE;
USE IEEE.std_logic_1164.all;
ENTITY ALU4BIT IS PORT (
	B : IN std_logic_vector(3 DOWNTO 0);
	S : IN std_logic_vector(2 DOWNTO 0);
	A : IN std_logic_vector(3 DOWNTO 0);
	R : OUT std_logic_vector(3 DOWNTO 0);
	Cin : IN std_logic;
	Cout : OUT std_logic
); END ALU4BIT;



ARCHITECTURE STRUCTURE OF ALU4BIT IS

-- COMPONENTS

COMPONENT \74LS157\
	PORT (
	\1A\ : IN std_logic;
	\1B\ : IN std_logic;
	\2A\ : IN std_logic;
	\2B\ : IN std_logic;
	\3A\ : IN std_logic;
	\3B\ : IN std_logic;
	\4A\ : IN std_logic;
	\4B\ : IN std_logic;
	\A\\/B\ : IN std_logic;
	G : IN std_logic;
	\1Y\ : OUT std_logic;
	\2Y\ : OUT std_logic;
	\3Y\ : OUT std_logic;
	\4Y\ : OUT std_logic;
	VCC : IN std_logic;
	GND : IN std_logic
	); END COMPONENT;

COMPONENT ULOGICA	 PORT (
	LOG : OUT std_logic_vector(3 DOWNTO 0);
	A : IN std_logic_vector(3 DOWNTO 0);
	B : IN std_logic_vector(3 DOWNTO 0);
	S : IN std_logic_vector(2 DOWNTO 0)
); END COMPONENT;

COMPONENT UARIT	 PORT (
	A : IN std_logic_vector(3 DOWNTO 0);
	B : IN std_logic_vector(3 DOWNTO 0);
	S : IN std_logic_vector(2 DOWNTO 0);
	Co : OUT std_logic;
	ARIT : OUT std_logic_vector(3 DOWNTO 0);
	Ci : IN std_logic
); END COMPONENT;

-- SIGNALS

SIGNAL orcad_unused:std_logic;
SIGNAL GND : std_logic;
SIGNAL VCC : std_logic;
SIGNAL GND_POWER : std_logic;
SIGNAL ARIT : std_logic_vector(3 DOWNTO 0);
SIGNAL LOG : std_logic_vector(3 DOWNTO 0);

-- INSTANCE ATTRIBUTES




-- GATE INSTANCES

BEGIN
U4 : \74LS157\	PORT MAP(
	\1A\ => LOG(0), 
	\1B\ => ARIT(0), 
	\2A\ => LOG(1), 
	\2B\ => ARIT(1), 
	\3A\ => LOG(2), 
	\3B\ => ARIT(2), 
	\4A\ => LOG(3), 
	\4B\ => ARIT(3), 
	\A\\/B\ => S(2), 
	G => GND_POWER, 
	\1Y\ => R(0), 
	\2Y\ => R(1), 
	\3Y\ => R(2), 
	\4Y\ => R(3), 
	VCC => VCC, 
	GND => GND
);
ULOGICA : ULOGICA	PORT MAP(
	LOG(3) => LOG(3), 
	LOG(2) => LOG(2), 
	LOG(1) => LOG(1), 
	LOG(0) => LOG(0), 
	A(3) => A(3), 
	A(2) => A(2), 
	A(1) => A(1), 
	A(0) => A(0), 
	B(3) => B(3), 
	B(2) => B(2), 
	B(1) => B(1), 
	B(0) => B(0), 
	S(2) => S(2), 
	S(1) => S(1), 
	S(0) => S(0)
);
UARIT : UARIT	PORT MAP(
	A(3) => A(3), 
	A(2) => A(2), 
	A(1) => A(1), 
	A(0) => A(0), 
	B(3) => B(3), 
	B(2) => B(2), 
	B(1) => B(1), 
	B(0) => B(0), 
	S(2) => S(2), 
	S(1) => S(1), 
	S(0) => S(0), 
	Co => COUT, 
	ARIT(3) => ARIT(3), 
	ARIT(2) => ARIT(2), 
	ARIT(1) => ARIT(1), 
	ARIT(0) => ARIT(0), 
	Ci => CIN
);
END STRUCTURE;

