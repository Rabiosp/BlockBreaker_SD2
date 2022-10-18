
-- VHDL Instantiation Created from source file decodificador.vhd -- 18:01:24 10/17/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT decodificador
	PORT(
		ent : IN std_logic_vector(31 downto 0);          
		csMem : OUT std_logic;
		csParPort : OUT std_logic;
		csLCD : OUT std_logic;
		cs7seg : OUT std_logic;
		csVideoBuffer : OUT std_logic;
		csEntrada : OUT std_logic
		);
	END COMPONENT;

	Inst_decodificador: decodificador PORT MAP(
		ent => ,
		csMem => ,
		csParPort => ,
		csLCD => ,
		cs7seg => ,
		csVideoBuffer => ,
		csEntrada => 
	);


