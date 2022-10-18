
-- VHDL Instantiation Created from source file contador_horizontal.vhd -- 16:22:05 10/12/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT contador_horizontal
	PORT(
		clk50MHz : IN std_logic;
		reset : IN std_logic;          
		h_cuenta : OUT std_logic_vector(10 downto 0)
		);
	END COMPONENT;

	Inst_contador_horizontal: contador_horizontal PORT MAP(
		clk50MHz => ,
		reset => ,
		h_cuenta => 
	);


