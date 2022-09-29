----------------------------------------------------------------------------------
-- Company: Universidad Cat�lica
-- Engineer: Vicente Gonz�lez
-- 
-- Create Date:    14:44:35 06/14/2017 
-- Design Name: 
-- Module Name:    md_io - Behavioral 
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
use work.general.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity md_io is
    Port ( dir       : in  STD_LOGIC_VECTOR (31 downto 0);
           datain    : in  STD_LOGIC_VECTOR (31 downto 0);
           memwrite  : in  STD_LOGIC;
           memread   : in  STD_LOGIC;
			  tipoAcc   : in STD_LOGIC_VECTOR (2 downto 0); --tipo de operaci�n a realizar, cargar bytes, half word y word
           clk       : in  STD_LOGIC;
			  clk50mhz  : in STD_LOGIC;
			  reset     : in STD_LOGIC;
			  north     : in STD_LOGIC;
			  south     : in STD_LOGIC;
			  sw        : in STD_LOGIC_VECTOR (3 downto 0);
           dataout   : out  STD_LOGIC_VECTOR (31 downto 0);
			  salida    : out std_logic_vector(7 downto 0);
			  LCD_E     : out std_logic;
			  LCD_RS    : out std_logic;
			  LCD_RW    : out std_logic;
		     LCD_DB    : out std_logic_vector(7 downto 0));
end md_io;

architecture Behavioral of md_io is
	COMPONENT entrada
    Port ( north  : in  STD_LOGIC;
           south  : in  STD_LOGIC;
           sw     : in  STD_LOGIC_VECTOR (3 downto 0);
           alMIPS : out  STD_LOGIC_VECTOR (5 downto 0)
			 );
	END COMPONENT;

	COMPONENT decodificador
    Port ( ent       : in  STD_LOGIC_VECTOR (31 downto 0);
           csMem     : out  STD_LOGIC;
           csParPort : out  STD_LOGIC;
           csLCD     : out  STD_LOGIC;
			  csEntrada : out STD_LOGIC
			);
	END COMPONENT;

	COMPONENT md
    Port ( dir      : STD_LOGIC_VECTOR (NUM_BITS_MEMORIA_DATOS -1 +2 downto 0);
           datain   : in  STD_LOGIC_VECTOR (31 downto 0);
           cs       : in  STD_LOGIC;
           memwrite : in  STD_LOGIC;
           memread  : in  STD_LOGIC;
			  tipoAcc  : in STD_LOGIC_VECTOR (2 downto 0);
           clk      : in  STD_LOGIC;
           dataout  : out  STD_LOGIC_VECTOR (31 downto 0)
			);
	END COMPONENT;

	COMPONENT salida_par
    Port ( sel        : in  STD_LOGIC;
           write_cntl : in  STD_LOGIC;
           clk        : in  STD_LOGIC;
           data       : in  STD_LOGIC_VECTOR (7 downto 0);
           salida     : out  STD_LOGIC_VECTOR (7 downto 0)
			);
	END COMPONENT;

	COMPONENT lcd
    Port ( dataOut  : in  STD_LOGIC_VECTOR (8 downto 0);
           memWrite : in  STD_LOGIC;
           cs       : in  STD_LOGIC;
           clk      : in  STD_LOGIC;
           reset    : in  STD_LOGIC;
           E        : out  STD_LOGIC;
           RS       : out  STD_LOGIC;
           RW       : out  STD_LOGIC;
           DB       : out  STD_LOGIC_VECTOR (7 downto 0)
			);
	END COMPONENT;

-- Definimos se�ales para interconexi�n interna en este m�dulo
	signal csMem       : STD_LOGIC;
	signal csSalidaPar : STD_LOGIC;
	signal csLCD       : STD_LOGIC;
	signal csEntrada   : STD_LOGIC;
	signal datosMem    : STD_LOGIC_VECTOR (31 downto 0);
	signal datosEntrada: STD_LOGIC_VECTOR (5 downto 0);
	
begin

	-- Multiplexor de salida
	dataout <= datosMem                                    when csMem = '1'     else
			     "00000000000000000000000000" & datosEntrada when csEntrada = '1' else
			     (others => '0');

	Inst_entrada: entrada PORT MAP (
		north  => north,
		south  => south,
		sw     => sw,
		alMIPS => datosEntrada
	);
	
	Inst_decodificador: decodificador PORT MAP(
		ent       => dir(31 downto 0),
      csMem     => csMem,
		csParPort => csSalidaPar,
      csLCD     => csLCD,
		csEntrada => csEntrada
	);

	Inst_md: md PORT MAP(
		dir      => dir(NUM_BITS_MEMORIA_DATOS -1+2 downto 0),
      datain   => datain,
      cs       => csMem,
      memwrite => memwrite,
      memread  => memread,
		tipoAcc  => tipoAcc,
      clk      => clk,
      dataout  => datosMem
	);

	Inst_salida_par: salida_par PORT MAP(
		sel => csSalidaPar,
      write_cntl => memwrite,
      clk => clk,
      data=> datain(7 downto 0),
      salida => salida
	);

	Inst_lcd: lcd PORT MAP(
		dataOut => datain(8 downto 0),
		memWrite => memwrite,
		cs => csLCD,
		clk => clk50mhz,
		reset => reset,
		E => LCD_E,
		RS => LCD_RS,
		RW => LCD_RW,
		DB => LCD_DB
	);

end Behavioral;

