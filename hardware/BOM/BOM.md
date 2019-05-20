#### Create BOM files for the equipment


We recommend creating different files:

<br>
- Electronic_BOM.csv: table containing all the integrated circuits(IC) necessary to populate the PCB (when one is present). We suggest using the format used by [kitspace.org](kitspace.org), so that people can easily order parts from different manufacturers.
<br>

| Reference | Qty  | Description | manufacturer  |MPN|manufacturer_1  |MPN_2|manufacturer_3  |MPN_4|manufacturer_5 |MPN_6|manufacturer_7  |MPN_8|Digikey|Mouser|RS|Newark|Farnell|
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
|R7; R8; R9  | 3  | 	Resistor 220 ohm 250mW through-hole   |    Yageo   |MFR-25FBF52-220R |TE Connectivity |CBT25J220R|TE Connectivity|	CFR16J220R|	Ohmite|	OD221JE|Stackpole Electronics |CF14JT220R|CF14JT220RCT-ND|279CBT25J220R|8066376|	21R0186 |	1265068|


<br>

- Mechanical_BOM.csv: Table containing all the mechanical parts necessary to build the equipment. Include here screws, printed parts, tubes, etc. See example below for fields

<br>

|part name| function  | quantity  |  obs.  |supplier|supplier number|link|
|---|---|---|---|---|---|---|
|M6x1 hex screws | used for holding motor in place  | 5  |  these could be substituted by flathead screws  |digikey| RPC6208-ND |https://www.digikey.co.uk/product-detail/en/essentra-components/SHSM6L16A/RPC6208-ND/9343049 |

<br>

- Tools_BOM.csv: table containing all tools used for the build. Pliers, hammer, etc.

<br>

|part name| function  | quantity  |  obs.  |supplier|supplier number|link|
|---|---|---|---|---|---|---|
|Nose needle Pliers  | hold components while soldering  | 1  |    regular pliers would also work   |digikey|L4VN-ND  |https://www.digikey.co.uk/product-detail/en/apex-tool-group/L4VN/L4VN-ND/8021129 |



