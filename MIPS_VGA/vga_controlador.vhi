
-- VHDL Instantiation Created from source file vga_controlador.vhd -- 22:04:52 10/18/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT vga_controlador
	PORT(
		clk50mhz : IN std_logic;
		clk : IN std_logic;
		reset : IN std_logic;
		writeBuffer : IN std_logic;
		siEscribirBuffer : IN std_logic;
		dir : IN std_logic_vector(9 downto 0);
		datos : IN std_logic_vector(31 downto 0);          
		hsync : OUT std_logic;
		vsync : OUT std_logic;
		R : OUT std_logic;
		G : OUT std_logic;
		B : OUT std_logic
		);
	END COMPONENT;

	Inst_vga_controlador: vga_controlador PORT MAP(
		clk50mhz => ,
		clk => ,
		reset => ,
		hsync => ,
		vsync => ,
		writeBuffer => ,
		siEscribirBuffer => ,
		dir => ,
		datos => ,
		R => ,
		G => ,
		B => 
	);


