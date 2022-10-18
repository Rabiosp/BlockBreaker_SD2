
-- VHDL Instantiation Created from source file generador_hsync.vhd -- 16:24:37 10/12/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT generador_hsync
	PORT(
		h_cuenta : IN std_logic_vector(10 downto 0);
		clk50MHz : IN std_logic;
		reset : IN std_logic;          
		hsync : OUT std_logic
		);
	END COMPONENT;

	Inst_generador_hsync: generador_hsync PORT MAP(
		h_cuenta => ,
		clk50MHz => ,
		reset => ,
		hsync => 
	);


