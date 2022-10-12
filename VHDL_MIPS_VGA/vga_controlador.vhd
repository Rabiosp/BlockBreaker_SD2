----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:13:25 10/12/2022 
-- Design Name: 
-- Module Name:    vga_controlador - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity vga_controlador is
    Port ( clk50mhz : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           hsync : out  STD_LOGIC;
           vsync : out  STD_LOGIC;
           R : out  STD_LOGIC;
           G : out  STD_LOGIC;
           B : out  STD_LOGIC);
end vga_controlador;

architecture Behavioral of vga_controlador is

	component contador_horizontal
	Port ( clk50MHz : in std_logic; -- reloj principal
			reset : in std_logic; -- reset global
			h_cuenta : out std_logic_vector (10 downto 0)
			);
	END COMPONENT;
	
	component contador_vertical
	Port ( hsync : in std_logic; -- horizontal sync signal
			clk50MHz: in std_logic; -- main clock
			reset : in std_logic; -- global reset
			v_cuenta : out std_logic_vector (9 downto 0)
			);
	END COMPONENT;
	
	component generador_hsync
	Port ( h_cuenta : in std_logic_vector (10 downto 0);
			clk50MHz : in std_logic;
			reset : in std_logic;
			hsync : out std_logic);
	END COMPONENT;
	
	component generador_vsync
	Port ( v_cuenta : in std_logic_vector (9 downto 0);
			clk50MHz : in std_logic;
			reset : in std_logic;
			vsync : out std_logic);
	END COMPONENT;
	
	component generador_blank
	Port ( hctr : in std_logic_vector (10 downto 0);
			vctr : in std_logic_vector (9 downto 0);
			blank : out std_logic
			);
	END COMPONENT;
	
	component image_generator
	Port (
			hctr : in std_logic_vector (10 downto 0);
			vctr : in std_logic_vector (9 downto 0);
			blank : in std_logic; -- blank interval signal
			clk50MHz : in std_logic; -- main clock
			reset : in std_logic; -- global reset
			R : out std_logic; -- Red colour signal
			G : out std_logic; -- Green colour signal
			B : out std_logic); -- Blue colour signal
	END COMPONENT;
	

begin

	Inst_contador_horizontal :  contador_horizontal PORT MAP(
		clk50MHz => clk50MHz,
		reset  => reset,
      h_cuenta      => h_cuenta
	);
	
	Inst_contador_vertical :  contador_vertical PORT MAP(
		hsync => hsync,
		clk50MHz => clk50MHz,
		reset  => reset,
      v_cuenta      => v_cuenta
	);
	
	Inst_generador_hsync :  generador_hsync PORT MAP(
		h_cuenta => h_cuenta,
		clk50MHz => clk50MHz,
		reset  => reset,
      hsync      => hsync
	);
	
	Inst_generador_vsync :  generador_vsync PORT MAP(
		v_cuenta => v_cuenta,
		clk50MHz => clk50MHz,
		reset  => reset,
      vsync      => vsync
	);
	
	Inst_generador_blank :  generador_blank PORT MAP(
		hctr => h_cuenta,
		vctr => v_cuenta,
      blank      => blank
	);
	
	Inst_image_generator :  image_generator PORT MAP(
		hctr => h_cuenta,
		vctr => v_cuenta,
		clk50MHz => clk50MHz,
		reset  => reset,
		R  => R,
		G  => G,
		B  => B,
      blank      => blank
	);
	
	

end Behavioral;

