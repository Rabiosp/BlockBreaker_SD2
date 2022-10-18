
-- VHDL Instantiation Created from source file contador_vertical.vhd -- 16:23:14 10/12/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT contador_vertical
	PORT(
		hsync : IN std_logic;
		clk50MHz : IN std_logic;
		reset : IN std_logic;          
		v_cuenta : OUT std_logic_vector(9 downto 0)
		);
	END COMPONENT;

	Inst_contador_vertical: contador_vertical PORT MAP(
		hsync => ,
		clk50MHz => ,
		reset => ,
		v_cuenta => 
	);


