
<<<<<<< HEAD
-- VHDL Instantiation Created from source file image_generator.vhd -- 17:55:45 10/17/2022
=======
-- VHDL Instantiation Created from source file image_generator.vhd -- 16:25:47 10/12/2022
>>>>>>> fd4f01c5254a38cf4d991e6a65bef431036ebc3b
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT image_generator
	PORT(
		hctr : IN std_logic_vector(10 downto 0);
		vctr : IN std_logic_vector(9 downto 0);
		blank : IN std_logic;
		clk50MHz : IN std_logic;
<<<<<<< HEAD
		reset : IN std_logic;
		writeBuffer : IN std_logic;
		siEscribirBuffer : IN std_logic;
		dir : IN std_logic_vector(11 downto 0);
		datos : IN std_logic_vector(31 downto 0);          
=======
		reset : IN std_logic;          
>>>>>>> fd4f01c5254a38cf4d991e6a65bef431036ebc3b
		R : OUT std_logic;
		G : OUT std_logic;
		B : OUT std_logic
		);
	END COMPONENT;

	Inst_image_generator: image_generator PORT MAP(
		hctr => ,
		vctr => ,
		blank => ,
		clk50MHz => ,
		reset => ,
<<<<<<< HEAD
		writeBuffer => ,
		siEscribirBuffer => ,
		dir => ,
		datos => ,
=======
>>>>>>> fd4f01c5254a38cf4d991e6a65bef431036ebc3b
		R => ,
		G => ,
		B => 
	);


