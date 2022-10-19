
-- VHDL Instantiation Created from source file seven_seg.vhd -- 20:36:53 10/18/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT seven_seg
	PORT(
		sel : IN std_logic;
		reset : IN std_logic;
		write_cnt2 : IN std_logic;
		clk : IN std_logic;
		data_in : IN std_logic_vector(9 downto 0);          
		sevenSegment : OUT std_logic_vector(7 downto 0);
		SevenSegmentEnable : OUT std_logic_vector(2 downto 0)
		);
	END COMPONENT;

	Inst_seven_seg: seven_seg PORT MAP(
		sel => ,
		reset => ,
		write_cnt2 => ,
		clk => ,
		data_in => ,
		sevenSegment => ,
		SevenSegmentEnable => 
	);


