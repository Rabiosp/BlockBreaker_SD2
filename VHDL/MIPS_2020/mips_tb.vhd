--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:26:11 06/15/2017
-- Design Name:   
-- Module Name:   C:/Users/Usuario/Documents/Materias/Clases Micro 2/XILINX/MIPS-2017/mips_tb.vhd
-- Project Name:  MIPS-2017
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: mips
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY mips_tb2 IS
END mips_tb2;
 
ARCHITECTURE behavior OF mips_tb2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT mips
    PORT(
         clk50mhz : IN  std_logic;
         reset1 : IN  std_logic;
         reset0 : IN  std_logic;
         north : IN  std_logic;
         south : IN  std_logic;
         sw : IN  std_logic_vector(3 downto 0);
         salida : OUT  std_logic_vector(7 downto 0);
         LCD_E : OUT  std_logic;
         LCD_RS : OUT  std_logic;
         LCD_RW : OUT  std_logic;
         LCD_DB : OUT  std_logic_vector(7 downto 0);
         rx : IN  std_logic;
         tx : OUT  std_logic;
         atn : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk50mhz : std_logic := '0';
   signal reset1 : std_logic := '0';
   signal reset0 : std_logic := '0';
   signal north : std_logic := '0';
   signal south : std_logic := '0';
   signal sw : std_logic_vector(3 downto 0) := (others => '0');
   signal rx : std_logic := '0';
   signal atn : std_logic := '0';

 	--Outputs
   signal salida : std_logic_vector(7 downto 0);
   signal LCD_E : std_logic;
   signal LCD_RS : std_logic;
   signal LCD_RW : std_logic;
   signal LCD_DB : std_logic_vector(7 downto 0);
   signal tx : std_logic;

   -- Clock period definitions
   constant clk_period : time := 20 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: mips PORT MAP (
          clk50mhz => clk50mhz,
          reset1 => reset1,
          reset0 => reset0,
          north => north,
          south => south,
          sw => sw,
          salida => salida,
          LCD_E => LCD_E,
          LCD_RS => LCD_RS,
          LCD_RW => LCD_RW,
          LCD_DB => LCD_DB,
          rx => rx,
          tx => tx,
          atn => atn
        );

   -- Clock process definitions
   clk50mhz_process :process
   begin
		clk50mhz <= '0';
		wait for clk_period/2;
		clk50mhz <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		reset0 <= '0';
		reset1 <= '1';
      wait for clk_period*2;	
		reset0 <= '1';
		reset1 <= '0';
      wait for clk_period*2;	
		reset0 <= '0';
		reset1 <= '0';
	
      wait for clk_period*2000;

      -- insert stimulus here 

      wait;
   end process;

END;
