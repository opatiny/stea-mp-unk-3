<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE eagle SYSTEM "eagle.dtd">
<eagle version="8.4.0">
<drawing>
<settings>
<setting alwaysvectorfont="no"/>
<setting verticaltext="up"/>
</settings>
<grid distance="0.1" unitdist="inch" unit="inch" style="lines" multiple="1" display="no" altdistance="0.01" altunitdist="inch" altunit="inch"/>
<layers>
<layer number="1" name="Top" color="4" fill="1" visible="no" active="no"/>
<layer number="16" name="Bottom" color="1" fill="1" visible="no" active="no"/>
<layer number="17" name="Pads" color="2" fill="1" visible="no" active="no"/>
<layer number="18" name="Vias" color="2" fill="1" visible="no" active="no"/>
<layer number="19" name="Unrouted" color="6" fill="1" visible="no" active="no"/>
<layer number="20" name="Dimension" color="15" fill="1" visible="no" active="no"/>
<layer number="21" name="tPlace" color="7" fill="1" visible="no" active="no"/>
<layer number="22" name="bPlace" color="7" fill="1" visible="no" active="no"/>
<layer number="23" name="tOrigins" color="15" fill="1" visible="no" active="no"/>
<layer number="24" name="bOrigins" color="15" fill="1" visible="no" active="no"/>
<layer number="25" name="tNames" color="7" fill="1" visible="no" active="no"/>
<layer number="26" name="bNames" color="7" fill="1" visible="no" active="no"/>
<layer number="27" name="tValues" color="7" fill="1" visible="no" active="no"/>
<layer number="28" name="bValues" color="7" fill="1" visible="no" active="no"/>
<layer number="29" name="tStop" color="7" fill="3" visible="no" active="no"/>
<layer number="30" name="bStop" color="7" fill="6" visible="no" active="no"/>
<layer number="31" name="tCream" color="7" fill="4" visible="no" active="no"/>
<layer number="32" name="bCream" color="7" fill="5" visible="no" active="no"/>
<layer number="33" name="tFinish" color="6" fill="3" visible="no" active="no"/>
<layer number="34" name="bFinish" color="6" fill="6" visible="no" active="no"/>
<layer number="35" name="tGlue" color="7" fill="4" visible="no" active="no"/>
<layer number="36" name="bGlue" color="7" fill="5" visible="no" active="no"/>
<layer number="37" name="tTest" color="7" fill="1" visible="no" active="no"/>
<layer number="38" name="bTest" color="7" fill="1" visible="no" active="no"/>
<layer number="39" name="tKeepout" color="4" fill="11" visible="no" active="no"/>
<layer number="40" name="bKeepout" color="1" fill="11" visible="no" active="no"/>
<layer number="41" name="tRestrict" color="4" fill="10" visible="no" active="no"/>
<layer number="42" name="bRestrict" color="1" fill="10" visible="no" active="no"/>
<layer number="43" name="vRestrict" color="2" fill="10" visible="no" active="no"/>
<layer number="44" name="Drills" color="7" fill="1" visible="no" active="no"/>
<layer number="45" name="Holes" color="7" fill="1" visible="no" active="no"/>
<layer number="46" name="Milling" color="3" fill="1" visible="no" active="no"/>
<layer number="47" name="Measures" color="7" fill="1" visible="no" active="no"/>
<layer number="48" name="Document" color="7" fill="1" visible="no" active="no"/>
<layer number="49" name="Reference" color="7" fill="1" visible="no" active="no"/>
<layer number="51" name="tDocu" color="7" fill="1" visible="no" active="no"/>
<layer number="52" name="bDocu" color="7" fill="1" visible="no" active="no"/>
<layer number="88" name="SimResults" color="9" fill="1" visible="yes" active="yes"/>
<layer number="89" name="SimProbes" color="9" fill="1" visible="yes" active="yes"/>
<layer number="90" name="Modules" color="5" fill="1" visible="yes" active="yes"/>
<layer number="91" name="Nets" color="2" fill="1" visible="yes" active="yes"/>
<layer number="92" name="Busses" color="1" fill="1" visible="yes" active="yes"/>
<layer number="93" name="Pins" color="2" fill="1" visible="no" active="yes"/>
<layer number="94" name="Symbols" color="4" fill="1" visible="yes" active="yes"/>
<layer number="95" name="Names" color="7" fill="1" visible="yes" active="yes"/>
<layer number="96" name="Values" color="7" fill="1" visible="yes" active="yes"/>
<layer number="97" name="Info" color="7" fill="1" visible="yes" active="yes"/>
<layer number="98" name="Guide" color="6" fill="1" visible="yes" active="yes"/>
</layers>
<schematic xreflabel="%F%N/%S.%C%R" xrefpart="/%S.%C%R">
<libraries>
<library name="edgeConn2x10">
<packages>
<package name="CONN2X10">
<description>Pads for edge connector 10/20. Pads size: 80x340mil. Spacing: 156 mil.</description>
<smd name="10" x="-17.8308" y="3.9624" dx="2.032" dy="8.636" layer="1"/>
<smd name="9" x="-13.8684" y="3.9624" dx="2.032" dy="8.636" layer="1"/>
<smd name="8" x="-9.906" y="3.9624" dx="2.032" dy="8.636" layer="1"/>
<smd name="7" x="-5.9436" y="3.9624" dx="2.032" dy="8.636" layer="1"/>
<smd name="6" x="-1.9812" y="3.9624" dx="2.032" dy="8.636" layer="1"/>
<smd name="5" x="1.9812" y="3.9624" dx="2.032" dy="8.636" layer="1"/>
<smd name="4" x="5.9436" y="3.9624" dx="2.032" dy="8.636" layer="1"/>
<smd name="3" x="9.906" y="3.9624" dx="2.032" dy="8.636" layer="1"/>
<smd name="2" x="13.8684" y="3.9624" dx="2.032" dy="8.636" layer="1"/>
<smd name="1" x="17.8308" y="3.9624" dx="2.032" dy="8.636" layer="1"/>
<smd name="J" x="-17.8308" y="3.9624" dx="2.032" dy="8.636" layer="16"/>
<smd name="I" x="-13.8684" y="3.9624" dx="2.032" dy="8.636" layer="16"/>
<smd name="H" x="-9.906" y="3.9624" dx="2.032" dy="8.636" layer="16"/>
<smd name="G" x="-5.9436" y="3.9624" dx="2.032" dy="8.636" layer="16"/>
<smd name="F" x="-1.9812" y="3.9624" dx="2.032" dy="8.636" layer="16"/>
<smd name="E" x="1.9812" y="3.9624" dx="2.032" dy="8.636" layer="16"/>
<smd name="D" x="5.9436" y="3.9624" dx="2.032" dy="8.636" layer="16"/>
<smd name="C" x="9.906" y="3.9624" dx="2.032" dy="8.636" layer="16"/>
<smd name="B" x="13.8684" y="3.9624" dx="2.032" dy="8.636" layer="16"/>
<smd name="A" x="17.8308" y="3.9624" dx="2.032" dy="8.636" layer="16"/>
<wire x1="-21.59" y1="7.62" x2="-21.59" y2="-2.54" width="0.127" layer="21"/>
<wire x1="-21.59" y1="-2.54" x2="-25.4" y2="-2.54" width="0.127" layer="21"/>
<wire x1="-25.4" y1="-2.54" x2="-25.4" y2="-6.35" width="0.127" layer="21"/>
<wire x1="-25.4" y1="-6.35" x2="25.4" y2="-6.35" width="0.127" layer="21"/>
<wire x1="25.4" y1="-6.35" x2="25.4" y2="-2.54" width="0.127" layer="21"/>
<wire x1="25.4" y1="-2.54" x2="21.59" y2="-2.54" width="0.127" layer="21"/>
<wire x1="21.59" y1="-2.54" x2="21.59" y2="7.62" width="0.127" layer="21"/>
<wire x1="21.59" y1="7.62" x2="-21.59" y2="7.62" width="0.127" layer="21"/>
<text x="20.828" y="3.302" size="1.27" layer="22" rot="MR0">A</text>
<text x="-19.812" y="3.175" size="1.27" layer="22" rot="MR0">J</text>
<text x="19.685" y="3.302" size="1.27" layer="21">1</text>
<text x="-21.209" y="3.175" size="1.27" layer="21">10</text>
</package>
</packages>
<symbols>
<symbol name="CONN2X10">
<description>Pads for edge connector 10/20. Pads size: 80x340mil. Spacing: 156 mil.</description>
<pin name="J" x="-22.86" y="3.81" length="middle" rot="R90"/>
<pin name="I" x="-17.78" y="3.81" length="middle" rot="R90"/>
<pin name="H" x="-12.7" y="3.81" length="middle" rot="R90"/>
<pin name="G" x="-7.62" y="3.81" length="middle" rot="R90"/>
<pin name="F" x="-2.54" y="3.81" length="middle" rot="R90"/>
<pin name="E" x="2.54" y="3.81" length="middle" rot="R90"/>
<pin name="D" x="7.62" y="3.81" length="middle" rot="R90"/>
<pin name="C" x="12.7" y="3.81" length="middle" rot="R90"/>
<pin name="B" x="17.78" y="3.81" length="middle" rot="R90"/>
<pin name="A" x="22.86" y="3.81" length="middle" rot="R90"/>
<pin name="10" x="-22.86" y="-3.81" length="middle" rot="R270"/>
<pin name="9" x="-17.78" y="-3.81" length="middle" rot="R270"/>
<pin name="8" x="-12.7" y="-3.81" length="middle" rot="R270"/>
<pin name="7" x="-7.62" y="-3.81" length="middle" rot="R270"/>
<pin name="6" x="-2.54" y="-3.81" length="middle" rot="R270"/>
<pin name="5" x="2.54" y="-3.81" length="middle" rot="R270"/>
<pin name="4" x="7.62" y="-3.81" length="middle" rot="R270"/>
<pin name="3" x="12.7" y="-3.81" length="middle" rot="R270"/>
<pin name="2" x="17.78" y="-3.81" length="middle" rot="R270"/>
<pin name="1" x="22.86" y="-3.81" length="middle" rot="R270"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="CONN2X10">
<description>Pads for edge connector 10/20. Pads size: 80x340mil. Spacing: 156 mil.</description>
<gates>
<gate name="G$1" symbol="CONN2X10" x="40.64" y="-5.08"/>
</gates>
<devices>
<device name="" package="CONN2X10">
<connects>
<connect gate="G$1" pin="1" pad="1"/>
<connect gate="G$1" pin="10" pad="10"/>
<connect gate="G$1" pin="2" pad="2"/>
<connect gate="G$1" pin="3" pad="3"/>
<connect gate="G$1" pin="4" pad="4"/>
<connect gate="G$1" pin="5" pad="5"/>
<connect gate="G$1" pin="6" pad="6"/>
<connect gate="G$1" pin="7" pad="7"/>
<connect gate="G$1" pin="8" pad="8"/>
<connect gate="G$1" pin="9" pad="9"/>
<connect gate="G$1" pin="A" pad="A"/>
<connect gate="G$1" pin="B" pad="B"/>
<connect gate="G$1" pin="C" pad="C"/>
<connect gate="G$1" pin="D" pad="D"/>
<connect gate="G$1" pin="E" pad="E"/>
<connect gate="G$1" pin="F" pad="F"/>
<connect gate="G$1" pin="G" pad="G"/>
<connect gate="G$1" pin="H" pad="H"/>
<connect gate="G$1" pin="I" pad="I"/>
<connect gate="G$1" pin="J" pad="J"/>
</connects>
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
<library name="jumper" urn="urn:adsk.eagle:library:252">
<description>&lt;b&gt;Jumpers&lt;/b&gt;&lt;p&gt;
&lt;author&gt;Created by librarian@cadsoft.de&lt;/author&gt;</description>
<packages>
<package name="SJ" urn="urn:adsk.eagle:footprint:15432/1" library_version="1">
<description>&lt;b&gt;Solder jumper&lt;/b&gt;</description>
<wire x1="1.397" y1="-1.016" x2="-1.397" y2="-1.016" width="0.1524" layer="21"/>
<wire x1="1.397" y1="1.016" x2="1.651" y2="0.762" width="0.1524" layer="21" curve="-90"/>
<wire x1="-1.651" y1="0.762" x2="-1.397" y2="1.016" width="0.1524" layer="21" curve="-90"/>
<wire x1="-1.651" y1="-0.762" x2="-1.397" y2="-1.016" width="0.1524" layer="21" curve="90"/>
<wire x1="1.397" y1="-1.016" x2="1.651" y2="-0.762" width="0.1524" layer="21" curve="90"/>
<wire x1="1.651" y1="-0.762" x2="1.651" y2="0.762" width="0.1524" layer="21"/>
<wire x1="-1.651" y1="-0.762" x2="-1.651" y2="0.762" width="0.1524" layer="21"/>
<wire x1="-1.397" y1="1.016" x2="1.397" y2="1.016" width="0.1524" layer="21"/>
<wire x1="1.016" y1="0" x2="1.524" y2="0" width="0.1524" layer="51"/>
<wire x1="-1.016" y1="0" x2="-1.524" y2="0" width="0.1524" layer="51"/>
<wire x1="-0.254" y1="-0.127" x2="-0.254" y2="0.127" width="1.27" layer="51" curve="-180" cap="flat"/>
<wire x1="0.254" y1="0.127" x2="0.254" y2="-0.127" width="1.27" layer="51" curve="-180" cap="flat"/>
<smd name="1" x="-0.762" y="0" dx="1.1684" dy="1.6002" layer="1"/>
<smd name="2" x="0.762" y="0" dx="1.1684" dy="1.6002" layer="1"/>
<text x="-1.651" y="1.143" size="1.27" layer="25" ratio="10">&gt;NAME</text>
<text x="0.4001" y="0" size="0.02" layer="27">&gt;VALUE</text>
<rectangle x1="-0.0762" y1="-0.9144" x2="0.0762" y2="0.9144" layer="29"/>
</package>
<package name="SJW" urn="urn:adsk.eagle:footprint:15433/1" library_version="1">
<description>&lt;b&gt;Solder jumper&lt;/b&gt;</description>
<wire x1="1.905" y1="-1.524" x2="-1.905" y2="-1.524" width="0.1524" layer="21"/>
<wire x1="1.905" y1="1.524" x2="2.159" y2="1.27" width="0.1524" layer="21" curve="-90"/>
<wire x1="-2.159" y1="1.27" x2="-1.905" y2="1.524" width="0.1524" layer="21" curve="-90"/>
<wire x1="-2.159" y1="-1.27" x2="-1.905" y2="-1.524" width="0.1524" layer="21" curve="90"/>
<wire x1="1.905" y1="-1.524" x2="2.159" y2="-1.27" width="0.1524" layer="21" curve="90"/>
<wire x1="2.159" y1="-1.27" x2="2.159" y2="1.27" width="0.1524" layer="21"/>
<wire x1="-2.159" y1="-1.27" x2="-2.159" y2="1.27" width="0.1524" layer="21"/>
<wire x1="-1.905" y1="1.524" x2="1.905" y2="1.524" width="0.1524" layer="21"/>
<wire x1="0.762" y1="0.762" x2="0.762" y2="-0.762" width="0.1524" layer="51"/>
<wire x1="-0.762" y1="0.762" x2="-0.762" y2="-0.762" width="0.1524" layer="51"/>
<wire x1="1.524" y1="0" x2="2.032" y2="0" width="0.1524" layer="51"/>
<wire x1="-1.524" y1="0" x2="-2.032" y2="0" width="0.1524" layer="51"/>
<wire x1="0.762" y1="0.762" x2="0.762" y2="-0.762" width="0.1524" layer="51" curve="-180"/>
<wire x1="-0.762" y1="0.762" x2="-0.762" y2="-0.762" width="0.1524" layer="51" curve="180"/>
<smd name="1" x="-1.27" y="0" dx="1.27" dy="2.54" layer="1"/>
<smd name="2" x="1.27" y="0" dx="1.27" dy="2.54" layer="1"/>
<text x="-2.159" y="1.778" size="1.27" layer="25" ratio="10">&gt;NAME</text>
<text x="1" y="0" size="0.02" layer="27">&gt;VALUE</text>
<rectangle x1="0.762" y1="-0.762" x2="1.016" y2="0.762" layer="51"/>
<rectangle x1="1.016" y1="-0.635" x2="1.27" y2="0.635" layer="51"/>
<rectangle x1="1.27" y1="-0.508" x2="1.397" y2="0.508" layer="51"/>
<rectangle x1="1.397" y1="-0.254" x2="1.524" y2="0.254" layer="51"/>
<rectangle x1="-1.016" y1="-0.762" x2="-0.762" y2="0.762" layer="51"/>
<rectangle x1="-1.27" y1="-0.635" x2="-1.016" y2="0.635" layer="51"/>
<rectangle x1="-1.397" y1="-0.508" x2="-1.27" y2="0.508" layer="51"/>
<rectangle x1="-1.524" y1="-0.254" x2="-1.397" y2="0.254" layer="51"/>
<rectangle x1="0.9652" y1="-0.7112" x2="1.0922" y2="-0.5842" layer="51"/>
<rectangle x1="1.3462" y1="-0.3556" x2="1.4732" y2="-0.2286" layer="51"/>
<rectangle x1="1.3462" y1="0.2032" x2="1.4732" y2="0.3302" layer="51"/>
<rectangle x1="0.9652" y1="0.5842" x2="1.0922" y2="0.7112" layer="51"/>
<rectangle x1="-1.0922" y1="-0.7112" x2="-0.9652" y2="-0.5842" layer="51"/>
<rectangle x1="-1.4478" y1="-0.3302" x2="-1.3208" y2="-0.2032" layer="51"/>
<rectangle x1="-1.4732" y1="0.2032" x2="-1.3462" y2="0.3302" layer="51"/>
<rectangle x1="-1.1176" y1="0.5842" x2="-0.9906" y2="0.7112" layer="51"/>
</package>
</packages>
<packages3d>
<package3d name="SJ" urn="urn:adsk.eagle:package:15471/1" type="box" library_version="1">
<description>Solder jumper</description>
</package3d>
<package3d name="SJW" urn="urn:adsk.eagle:package:15507/1" type="box" library_version="1">
<description>Solder jumper</description>
</package3d>
</packages3d>
<symbols>
<symbol name="SJ" urn="urn:adsk.eagle:symbol:15431/1" library_version="1">
<wire x1="0.381" y1="0.635" x2="0.381" y2="-0.635" width="1.27" layer="94" curve="-180" cap="flat"/>
<wire x1="-0.381" y1="-0.635" x2="-0.381" y2="0.635" width="1.27" layer="94" curve="-180" cap="flat"/>
<wire x1="2.54" y1="0" x2="1.651" y2="0" width="0.1524" layer="94"/>
<wire x1="-2.54" y1="0" x2="-1.651" y2="0" width="0.1524" layer="94"/>
<text x="-2.54" y="2.54" size="1.778" layer="95">&gt;NAME</text>
<text x="-2.54" y="-3.81" size="1.778" layer="96">&gt;VALUE</text>
<pin name="2" x="5.08" y="0" visible="pad" length="short" direction="pas" swaplevel="1" rot="R180"/>
<pin name="1" x="-5.08" y="0" visible="pad" length="short" direction="pas" swaplevel="1"/>
</symbol>
</symbols>
<devicesets>
<deviceset name="SJ" urn="urn:adsk.eagle:component:15508/1" prefix="SJ" uservalue="yes" library_version="1">
<description>SMD solder &lt;b&gt;JUMPER&lt;/b&gt;</description>
<gates>
<gate name="1" symbol="SJ" x="0" y="0"/>
</gates>
<devices>
<device name="" package="SJ">
<connects>
<connect gate="1" pin="1" pad="1"/>
<connect gate="1" pin="2" pad="2"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:15471/1"/>
</package3dinstances>
<technologies>
<technology name=""/>
</technologies>
</device>
<device name="W" package="SJW">
<connects>
<connect gate="1" pin="1" pad="1"/>
<connect gate="1" pin="2" pad="2"/>
</connects>
<package3dinstances>
<package3dinstance package3d_urn="urn:adsk.eagle:package:15507/1"/>
</package3dinstances>
<technologies>
<technology name=""/>
</technologies>
</device>
</devices>
</deviceset>
</devicesets>
</library>
</libraries>
<attributes>
</attributes>
<variantdefs>
</variantdefs>
<classes>
<class number="0" name="default" width="0" drill="0">
</class>
</classes>
<parts>
<part name="U$1" library="edgeConn2x10" deviceset="CONN2X10" device=""/>
<part name="SJ1" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ2" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ3" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ4" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ5" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ6" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ7" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ8" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ9" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ10" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ11" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ12" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ13" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ14" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ15" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ16" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ17" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ18" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ19" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ20" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ21" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ22" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ23" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ24" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ25" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ26" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ27" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ28" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ29" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ30" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ31" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ32" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ33" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ34" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ35" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ36" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ37" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ38" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ39" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ40" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ41" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ42" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ43" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ44" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ45" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ46" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ47" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ48" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ49" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
<part name="SJ50" library="jumper" library_urn="urn:adsk.eagle:library:252" deviceset="SJ" device="" package3d_urn="urn:adsk.eagle:package:15471/1"/>
</parts>
<sheets>
<sheet>
<plain>
</plain>
<instances>
<instance part="U$1" gate="G$1" x="38.1" y="48.26"/>
<instance part="SJ1" gate="1" x="-134.62" y="99.06"/>
<instance part="SJ2" gate="1" x="-134.62" y="88.9"/>
<instance part="SJ3" gate="1" x="-134.62" y="78.74"/>
<instance part="SJ4" gate="1" x="-134.62" y="73.66"/>
<instance part="SJ5" gate="1" x="-134.62" y="68.58"/>
<instance part="SJ6" gate="1" x="-134.62" y="83.82"/>
<instance part="SJ7" gate="1" x="-134.62" y="93.98"/>
<instance part="SJ8" gate="1" x="-114.3" y="99.06"/>
<instance part="SJ9" gate="1" x="-114.3" y="93.98"/>
<instance part="SJ10" gate="1" x="-114.3" y="88.9"/>
<instance part="SJ11" gate="1" x="-114.3" y="83.82"/>
<instance part="SJ12" gate="1" x="-114.3" y="78.74"/>
<instance part="SJ13" gate="1" x="-114.3" y="73.66"/>
<instance part="SJ14" gate="1" x="-114.3" y="68.58"/>
<instance part="SJ15" gate="1" x="-96.52" y="99.06"/>
<instance part="SJ16" gate="1" x="-96.52" y="88.9"/>
<instance part="SJ17" gate="1" x="-96.52" y="78.74"/>
<instance part="SJ18" gate="1" x="-96.52" y="73.66"/>
<instance part="SJ19" gate="1" x="-96.52" y="68.58"/>
<instance part="SJ20" gate="1" x="-96.52" y="83.82"/>
<instance part="SJ21" gate="1" x="-96.52" y="93.98"/>
<instance part="SJ22" gate="1" x="-76.2" y="99.06"/>
<instance part="SJ23" gate="1" x="-76.2" y="93.98"/>
<instance part="SJ24" gate="1" x="-76.2" y="88.9"/>
<instance part="SJ25" gate="1" x="-76.2" y="83.82"/>
<instance part="SJ26" gate="1" x="-76.2" y="78.74"/>
<instance part="SJ27" gate="1" x="-76.2" y="73.66"/>
<instance part="SJ28" gate="1" x="-76.2" y="68.58"/>
<instance part="SJ29" gate="1" x="-134.62" y="55.88"/>
<instance part="SJ30" gate="1" x="-134.62" y="45.72"/>
<instance part="SJ31" gate="1" x="-134.62" y="35.56"/>
<instance part="SJ32" gate="1" x="-134.62" y="30.48"/>
<instance part="SJ33" gate="1" x="-134.62" y="25.4"/>
<instance part="SJ34" gate="1" x="-134.62" y="40.64"/>
<instance part="SJ35" gate="1" x="-134.62" y="50.8"/>
<instance part="SJ36" gate="1" x="-114.3" y="55.88"/>
<instance part="SJ37" gate="1" x="-114.3" y="50.8"/>
<instance part="SJ38" gate="1" x="-114.3" y="45.72"/>
<instance part="SJ39" gate="1" x="-114.3" y="40.64"/>
<instance part="SJ40" gate="1" x="-114.3" y="35.56"/>
<instance part="SJ41" gate="1" x="-114.3" y="30.48"/>
<instance part="SJ42" gate="1" x="-114.3" y="25.4"/>
<instance part="SJ43" gate="1" x="-96.52" y="55.88"/>
<instance part="SJ44" gate="1" x="-96.52" y="45.72"/>
<instance part="SJ45" gate="1" x="-96.52" y="35.56"/>
<instance part="SJ46" gate="1" x="-96.52" y="30.48"/>
<instance part="SJ47" gate="1" x="-96.52" y="25.4"/>
<instance part="SJ48" gate="1" x="-96.52" y="40.64"/>
<instance part="SJ49" gate="1" x="-96.52" y="50.8"/>
<instance part="SJ50" gate="1" x="-76.2" y="55.88"/>
</instances>
<busses>
</busses>
<nets>
<net name="N$1" class="0">
<segment>
<pinref part="U$1" gate="G$1" pin="10"/>
<pinref part="U$1" gate="G$1" pin="9"/>
<wire x1="15.24" y1="44.45" x2="20.32" y2="44.45" width="0.1524" layer="91"/>
<pinref part="U$1" gate="G$1" pin="8"/>
<wire x1="20.32" y1="44.45" x2="25.4" y2="44.45" width="0.1524" layer="91"/>
<junction x="20.32" y="44.45"/>
<pinref part="U$1" gate="G$1" pin="7"/>
<wire x1="25.4" y1="44.45" x2="30.48" y2="44.45" width="0.1524" layer="91"/>
<junction x="25.4" y="44.45"/>
<pinref part="U$1" gate="G$1" pin="6"/>
<wire x1="30.48" y1="44.45" x2="35.56" y2="44.45" width="0.1524" layer="91"/>
<junction x="30.48" y="44.45"/>
<pinref part="U$1" gate="G$1" pin="5"/>
<wire x1="35.56" y1="44.45" x2="40.64" y2="44.45" width="0.1524" layer="91"/>
<junction x="35.56" y="44.45"/>
<pinref part="U$1" gate="G$1" pin="4"/>
<wire x1="40.64" y1="44.45" x2="45.72" y2="44.45" width="0.1524" layer="91"/>
<junction x="40.64" y="44.45"/>
<pinref part="U$1" gate="G$1" pin="3"/>
<wire x1="45.72" y1="44.45" x2="50.8" y2="44.45" width="0.1524" layer="91"/>
<junction x="45.72" y="44.45"/>
<pinref part="U$1" gate="G$1" pin="1"/>
<pinref part="U$1" gate="G$1" pin="2"/>
<wire x1="60.96" y1="44.45" x2="55.88" y2="44.45" width="0.1524" layer="91"/>
<wire x1="50.8" y1="44.45" x2="55.88" y2="44.45" width="0.1524" layer="91"/>
<junction x="50.8" y="44.45"/>
<junction x="55.88" y="44.45"/>
</segment>
</net>
</nets>
</sheet>
</sheets>
</schematic>
</drawing>
<compatibility>
<note version="8.2" severity="warning">
Since Version 8.2, EAGLE supports online libraries. The ids
of those online libraries will not be understood (or retained)
with this version.
</note>
<note version="8.3" severity="warning">
Since Version 8.3, EAGLE supports URNs for individual library
assets (packages, symbols, and devices). The URNs of those assets
will not be understood (or retained) with this version.
</note>
<note version="8.3" severity="warning">
Since Version 8.3, EAGLE supports the association of 3D packages
with devices in libraries, schematics, and board files. Those 3D
packages will not be understood (or retained) with this version.
</note>
</compatibility>
</eagle>
