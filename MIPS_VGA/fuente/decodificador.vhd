----------------------------------------------------------------------------------
-- Company: Universidad Catlica
-- Engineer: Vicente Gonzlez
-- 
-- Create Date:    14:28:41 06/14/2017 
-- Design Name: 
-- Module Name:    decodificador - Behavioral 
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

entity decodificador is
    Port ( ent       : in  STD_LOGIC_VECTOR (31 downto 0);
           csMem     : out  STD_LOGIC;
           csParPort : out  STD_LOGIC;
			  cs7seg     : out  STD_LOGIC;
			  csVideoBuffer: out std_logic;
			  csEntrada : out STD_LOGIC);
end decodificador;

architecture Behavioral of decodificador is

begin
	-- memoria
	csMem     <= '1' when ent(31 downto 16) = X"1001" else
	             '0';
	
	-- Puerto paralelo de salida
	csParPort <= '1' when ent = X"FFFF8000" else
	             '0';
	
	-- habilitador de lectura de las llaves
	csEntrada <= '1' when ent = X"FFFFD000" else
					 '0';
	
	-- habilitador de escritura del 7 segmentos
	cs7seg    <= '1' when ent = X"FFFFE000" else
					 '0';
	
	-- habilitador de escritura del búfer de video
	csVideoBuffer    <= '1' when ent(31 downto 12) = X"FFFFA" else
					 '0';
					 
end Behavioral;
