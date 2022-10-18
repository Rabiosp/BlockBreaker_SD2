
-- VHDL Instantiation Created from source file md_io.vhd -- 10:46:56 10/17/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT md_io
	PORT(
		dir : IN std_logic_vector(31 downto 0);
		datain : IN std_logic_vector(31 downto 0);
		memwrite : IN std_logic;
		memread : IN std_logic;
		tipoAcc : IN std_logic_vector(2 downto 0);
		clk : IN std_logic;
		clk50mhz : IN std_logic;
		reset : IN std_logic;
		north : IN std_logic;
		south : IN std_logic;
		sw : IN std_logic_vector(3 downto 0);          
		dataout : OUT std_logic_vector(31 downto 0);
		salida : OUT std_logic_vector(7 downto 0);
		sevenSegment : OUT std_logic_vector(7 downto 0);
		sevenSegmentEnable : OUT std_logic_vector(2 downto 0);
		hsync : OUT std_logic;
		vsync : OUT std_logic;
		R : OUT std_logic;
		G : OUT std_logic;
		B : OUT std_logic
		);
	END COMPONENT;

	Inst_md_io: md_io PORT MAP(
		dir => ,
		datain => ,
		memwrite => ,
		memread => ,
		tipoAcc => ,
		clk => ,
		clk50mhz => ,
		reset => ,
		north => ,
		south => ,
		sw => ,
		dataout => ,
		salida => ,
		sevenSegment => ,
		sevenSegmentEnable => ,
		hsync => ,
		vsync => ,
		R => ,
		G => ,
		B => 
	);


