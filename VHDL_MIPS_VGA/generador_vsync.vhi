
-- VHDL Instantiation Created from source file generador_vsync.vhd -- 16:25:14 10/12/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT generador_vsync
	PORT(
		v_cuenta : IN std_logic_vector(9 downto 0);
		clk50MHz : IN std_logic;
		reset : IN std_logic;          
		vsync : OUT std_logic
		);
	END COMPONENT;

	Inst_generador_vsync: generador_vsync PORT MAP(
		v_cuenta => ,
		clk50MHz => ,
		reset => ,
		vsync => 
	);


