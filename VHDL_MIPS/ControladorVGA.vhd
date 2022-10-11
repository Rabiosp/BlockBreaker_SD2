----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:27:27 10/11/2022 
-- Design Name: 
-- Module Name:    ControladorVGA - Behavioral 
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

entity ControladorVGA is
    Port ( clk100mhz : in  STD_LOGIC;
           hs : out  STD_LOGIC;
           vs : out  STD_LOGIC;
           red : out  STD_LOGIC;
           grn : out  STD_LOGIC;
           blu : out  STD_LOGIC);
end ControladorVGA;

architecture Behavioral of ControladorVGA is

begin


end Behavioral;

