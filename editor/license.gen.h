/* THIS FILE IS GENERATED DO NOT EDIT */
#ifndef _EDITOR_LICENSE_H
#define _EDITOR_LICENSE_H
static const char *about_license =
	"Copyright (c) 2007-2017 Juan Linietsky, Ariel Manzur.\n"
	"Copyright (c) 2014-2017 Godot Engine contributors (cf. AUTHORS.md)\n"
	"\n"
	"Permission is hereby granted, free of charge, to any person obtaining a copy\n"
	"of this software and associated documentation files (the \042Software\042), to deal\n"
	"in the Software without restriction, including without limitation the rights\n"
	"to use, copy, modify, merge, publish, distribute, sublicense, and/or sell\n"
	"copies of the Software, and to permit persons to whom the Software is\n"
	"furnished to do so, subject to the following conditions:\n"
	"\n"
	"The above copyright notice and this permission notice shall be included in all\n"
	"copies or substantial portions of the Software.\n"
	"\n"
	"THE SOFTWARE IS PROVIDED \042AS IS\042, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n"
	"IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n"
	"FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\n"
	"AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\n"
	"LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\n"
	"OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE\n"
	"SOFTWARE.\n";
static const char *about_thirdparty[] = {
	"Godot Engine",
	"Godot Engine logo",
	"The Android Open Source Project",
	"Simple DirectMedia Layer",
	"Bullet Continuous Collision Detection and Physics Library",
	"Box2D (ConvexDecomp)",
	"FIXME",
	"ENet",
	"Etc2Comp",
	"DroidSans font",
	"Noto Sans font",
	"Hack font",
	"The FreeType Project",
	"glad",
	"jpeg-compressor",
	"OggVorbis",
	"libpng",
	"libsimplewebm",
	"The WebM Project",
	"OggTheora",
	"WebP codec",
	"MiniZip",
	"AES-256 and SHA-256 implementation",
	"BASE64 conversion methods",
	"curl",
	"FastLZ",
	"hq2x implementation",
	"MD5 Message Digest Algorithm",
	"Tangent Space Normal Maps implementation",
	"Minimal PCG32 implementation",
	"SMAZ",
	"stb libraries",
	"PolyPartition",
	"YUV2RGB",
	"The OpenSSL Project",
	"Opus",
	"NanoSVG",
	"PvrTcCompressor",
	"Recast",
	"RtAudio",
	"libSquish",
	"TinyEXR",
	"zlib",
	"Zstandard",
	0
};
#define THIRDPARTY_COUNT 44
static const int about_tp_copyright_count[] = {
	1, 1, 4, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0
};
static const char *about_tp_file[] = {
		"*",
		"./icon.png\n"
	"./icon.svg\n"
	"./logo.png\n"
	"./logo.svg",
		"./platform/android/android_native_app_glue.c\n"
	"./platform/android/android_native_app_glue.h\n"
	"./platform/android/java/aidl/com/android/vending/billing/IInAppBillingService.aidl\n"
	"./platform/android/java/res/layout/status_bar_ongoing_event_progress_bar.xml\n"
	"./platform/android/java/src/com/android/vending/licensing/*\n"
	"./platform/android/java/src/com/google/android/vending/expansion/downloader/*\n"
	"./platform/android/java/src/org/godotengine/godot/input/InputManagerCompat.java\n"
	"./platform/android/java/src/org/godotengine/godot/input/InputManagerV16.java\n"
	"./platform/android/java/src/org/godotengine/godot/input/InputManagerV9.java",
		"./platform/android/cpu-features.c\n"
	"./platform/android/cpu-features.h",
		"./platform/android/ifaddrs_android.cpp\n"
	"./platform/android/ifaddrs_android.h",
		"./platform/android/java/src/com/android/vending/licensing/util/Base64.java\n"
	"./platform/android/java/src/com/android/vending/licensing/util/Base64DecoderException.java",
		"./platform/android/power_android.cpp\n"
	"./platform/osx/power_osx.cpp\n"
	"./platform/windows/power_windows.cpp\n"
	"./platform/x11/power_x11.cpp",
		"./servers/physics/gjk_epa.cpp\n"
	"./servers/physics/joints/generic_6dof_joint_sw.cpp\n"
	"./servers/physics/joints/generic_6dof_joint_sw.h\n"
	"./servers/physics/joints/hinge_joint_sw.cpp\n"
	"./servers/physics/joints/hinge_joint_sw.h\n"
	"./servers/physics/joints/jacobian_entry_sw.h\n"
	"./servers/physics/joints/pin_joint_sw.cpp\n"
	"./servers/physics/joints/pin_joint_sw.h\n"
	"./servers/physics/joints/slider_joint_sw.cpp\n"
	"./servers/physics/joints/slider_joint_sw.h",
		"./servers/physics/joints/cone_twist_joint_sw.cpp\n"
	"./servers/physics/joints/cone_twist_joint_sw.h",
		"./thirdparty/b2d_convexdecomp/",
		"./thirdparty/certs/ca-certificates.crt",
		"./thirdparty/enet/",
		"./thirdparty/etc2comp/",
		"./thirdparty/fonts/DroidSans*.ttf",
		"./thirdparty/fonts/NotoSans*.ttf",
		"./thirdparty/fonts/Hack_Regular.ttf",
		"./thirdparty/freetype/",
		"./thirdparty/glad/",
		"./thirdparty/jpeg_compressor/",
		"./thirdparty/libogg/",
		"./thirdparty/libvorbis/",
		"./thirdparty/libpng/",
		"./thirdparty/libsimplewebm/",
		"./thirdparty/libsimplewebm/libwebm/",
		"./thirdparty/libvpx/",
		"./thirdparty/libtheora/",
		"./thirdparty/libwebp/",
		"./thirdparty/minizip/",
		"./thirdparty/misc/aes256.cpp\n"
	"./thirdparty/misc/aes256.h\n"
	"./thirdparty/misc/sha256.c\n"
	"./thirdparty/misc/sha256.h",
		"./thirdparty/misc/base64.c\n"
	"./thirdparty/misc/base64.h",
		"./thirdparty/misc/curl_hostcheck.c\n"
	"./thirdparty/misc/curl_hostcheck.h",
		"./thirdparty/misc/fastlz.c\n"
	"./thirdparty/misc/fastlz.h",
		"./thirdparty/misc/hq2x.cpp\n"
	"./thirdparty/misc/hq2x.h",
		"./thirdparty/misc/md5.cpp\n"
	"./thirdparty/misc/md5.h",
		"./thirdparty/misc/mikktspace.c\n"
	"./thirdparty/misc/mikktspace.h",
		"./thirdparty/misc/pcg.cpp\n"
	"./thirdparty/misc/pcg.h",
		"./thirdparty/misc/smaz.c\n"
	"./thirdparty/misc/smaz.h",
		"./thirdparty/misc/stb_truetype.h\n"
	"./thirdparty/misc/stb_vorbis.c",
		"./thirdparty/misc/triangulator.cpp\n"
	"./thirdparty/misc/triangulator.h",
		"./thirdparty/misc/yuv2rgb.h",
		"./thirdparty/openssl/",
		"./thirdparty/opus/",
		"./thirdparty/nanosvg/",
		"./thirdparty/pvrtccompressor/",
		"./thirdparty/recastnavigation/",
		"./thirdparty/rtaudio/",
		"./thirdparty/squish/",
		"./thirdparty/tinyexr/",
		"./thirdparty/zlib/",
		"./thirdparty/zstd/",
	0
};
static const char *about_tp_copyright[] = {
		"2007-2017, Juan Linietsky, Ariel Manzur.\n"
	"2014-2017, Godot Engine contributors.",
		"2017, Andrea Calabr\303\263",
		"2008-2013, The Android Open Source Project",
		"2010, The Android Open Source Project",
		"2012-2013, Google Inc.",
		"2002, Google Inc.",
		"1997-2017, Sam Lantinga\n"
	"2007-2017, Juan Linietsky, Ariel Manzur.\n"
	"2014-2017, Godot Engine contributors.",
		"2003-2008, Erwin Coumans\n"
	"2007-2017, Juan Linietsky, Ariel Manzur.\n"
	"2014-2017, Godot Engine contributors.",
		"2007, Starbreeze Studios\n"
	"2007-2017, Juan Linietsky, Ariel Manzur.\n"
	"2014-2017, Godot Engine contributors.",
		"2006-2009, Erin Catto",
		"FIXME",
		"2002-2016, Lee Salzman",
		"2015, Etc2Comp Authors",
		"2008, The Android Open Source Project",
		"2012, Google Inc.",
		"2015-2017, Christopher Simpkins (with Reserved Font Name Hack).",
		"1996-2017, David Turner, Robert Wilhelm, and Werner Lemberg.",
		"2013, David Herberth",
		"2012, Rich Geldreich",
		"2002, Xiph.org Foundation",
		"2002-2015, Xiph.org Foundation",
		"1995-1996, Guy Eric Schalnat, Group 42, Inc.\n"
	"1996-1997, Andreas Dilger\n"
	"1998-2016, Glenn Randers-Pehrson",
		"2016, B\305\202a\305\274ej Szczygie\305\202",
		"2010, Google Inc.",
		"2010, The WebM Project authors.",
		"2002-2009, Xiph.org Foundation",
		"2010, Google Inc.",
		"1998-2010, Gilles Vollant\n"
	"2007-2008, Even Rouault\n"
	"2009-2010, Mathias Svensson",
		"2007-2011, Ilya O. Levin",
		"Ari Edelkind",
		"1998-2012, Daniel Stenberg et al.",
		"2005-2007, Ariya Hidayat",
		"2016, Bruno Ribeiro",
		"1990, RSA Data Security, Inc.",
		"2011, Morten S. Mikkelsen",
		"2014, M.E. O'Neill",
		"2006-2009, Salvatore Sanfilippo",
		"2007-2017, Sean Barrett",
		"2011, Ivan Fratric",
		"2008-2011, Robin Watts",
		"1998-2016, The OpenSSL Project.",
		"2001-2011, Xiph.Org, Skype Limited, Octasic,\n"
	"Jean-Marc Valin, Timothy B. Terriberry,\n"
	"CSIRO, Gregory Maxwell, Mark Borgerding,\n"
	"Erik de Castro Lopo",
		"2013-2014, Mikko Mononen",
		"2014, Jeffrey Lim.",
		"2009, Mikko Mononen",
		"2001-2016, Gary P. Scavone",
		"2006, Simon Brown",
		"2014-2017, Syoyo Fujita\n"
	"2002, Industrial Light & Magic, a division of Lucas Digital Ltd. LLC",
		"1995-2017, Jean-loup Gailly and Mark Adler",
		"2016-2017, Facebook, Inc.",
	0
};
static const char *about_tp_license[] = {
	"Expat",
	"CC-BY-3.0",
	"Apache-2.0",
	"BSD-2-clause",
	"BSD-3-clause",
	"Apache-2.0",
	"Expat and Zlib",
	"Expat and Zlib",
	"Expat and Zlib",
	"Zlib",
	"FIXME",
	"Expat",
	"Apache-2.0",
	"Apache-2.0",
	"OFL-1.1",
	"Hack Open Font License v2.0",
	"FTL",
	"Expat",
	"public-domain",
	"BSD-3-clause",
	"BSD-3-clause",
	"Zlib",
	"Expat",
	"BSD-3-clause",
	"BSD-3-clause",
	"BSD-3-clause",
	"BSD-3-clause",
	"Zlib",
	"ISC",
	"public-domain",
	"curl",
	"Expat",
	"Apache-2.0",
	"RSA-MD",
	"Zlib",
	"Apache-2.0",
	"BSD-3-clause",
	"public-domain",
	"Expat",
	"BSD-2-clause",
	"OpenSSL",
	"BSD-3-clause",
	"Zlib",
	"BSD-3-clause",
	"Zlib",
	"Expat",
	"Expat",
	"BSD-3-Clause",
	"Zlib",
	"BSD-3-Clause",
	0
};
static const char *about_license_name[] = {
	"Apache-2.0",
	"BSD-2-clause",
	"BSD-3-clause",
	"CC-BY-3.0",
	"curl",
	"Expat",
	"FTL",
	"ISC",
	"OFL-1.1",
	"OpenSSL",
	"RSA-MD",
	"Zlib",
	0
};
#define LICENSE_COUNT 12
static const char *about_license_body[] = {
		"Licensed under the Apache License, Version 2.0 (the \042License\042);\n"
	"you may not use this file except in compliance with the License.\n"
	"You may obtain a copy of the License at\n"
	"\n"
	"http://www.apache.org/licenses/LICENSE-2.0\n"
	"\n"
	"Unless required by applicable law or agreed to in writing, software\n"
	"distributed under the License is distributed on an \042AS IS\042 BASIS,\n"
	"WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
	"See the License for the specific language governing permissions and\n"
	"limitations under the License.\n"
	"",
		"Redistribution and use in source and binary forms, with or without\n"
	"modification, are permitted provided that the following conditions are met:\n"
	"\n"
	"Redistributions of source code must retain the above copyright notice, this\n"
	"list of conditions and the following disclaimer.\n"
	"\n"
	"Redistributions in binary form must reproduce the above copyright notice, this\n"
	"list of conditions and the following disclaimer in the documentation and/or\n"
	"other materials provided with the distribution. Neither the name of the author\n"
	"nor the names of its contributors may be used to endorse or promote products\n"
	"derived from this software without specific prior written permission.\n"
	"\n"
	"THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS \042AS IS\042 AND\n"
	"ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED\n"
	"WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE\n"
	"DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE\n"
	"FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL\n"
	"DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR\n"
	"SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER\n"
	"CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,\n"
	"OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE\n"
	"OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.\n"
	"",
		"Redistribution and use in source and binary forms, with or without\n"
	"modification, are permitted provided that the following conditions\n"
	"are met:\n"
	"\n"
	"1. Redistributions of source code must retain the above copyright\n"
	"notice, this list of conditions and the following disclaimer.\n"
	"\n"
	"2. Redistributions in binary form must reproduce the above copyright\n"
	"notice, this list of conditions and the following disclaimer in the\n"
	"documentation and/or other materials provided with the distribution.\n"
	"\n"
	"3. Neither the name of the copyright holder nor the names of its\n"
	"contributors may be used to endorse or promote products derived from\n"
	"this software without specific prior written permission.\n"
	"\n"
	"THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND\n"
	"ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE\n"
	"IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE\n"
	"ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE\n"
	"FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL\n"
	"DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS\n"
	"OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)\n"
	"HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT\n"
	"LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY\n"
	"OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF\n"
	"SUCH DAMAGE.\n"
	"",
		"Creative Commons Attribution 3.0 Unported\n"
	"\n"
	"CREATIVE COMMONS CORPORATION IS NOT A LAW FIRM AND DOES NOT PROVIDE\n"
	"LEGAL SERVICES. DISTRIBUTION OF THIS LICENSE DOES NOT CREATE AN\n"
	"ATTORNEY-CLIENT RELATIONSHIP. CREATIVE COMMONS PROVIDES THIS INFORMATION\n"
	"ON AN \042AS-IS\042 BASIS. CREATIVE COMMONS MAKES NO WARRANTIES REGARDING THE\n"
	"INFORMATION PROVIDED, AND DISCLAIMS LIABILITY FOR DAMAGES RESULTING FROM\n"
	"ITS USE.\n"
	"\n"
	"License\n"
	"\n"
	"THE WORK (AS DEFINED BELOW) IS PROVIDED UNDER THE TERMS OF THIS CREATIVE\n"
	"COMMONS PUBLIC LICENSE (\042CCPL\042 OR \042LICENSE\042). THE WORK IS PROTECTED BY\n"
	"COPYRIGHT AND/OR OTHER APPLICABLE LAW. ANY USE OF THE WORK OTHER THAN AS\n"
	"AUTHORIZED UNDER THIS LICENSE OR COPYRIGHT LAW IS PROHIBITED.\n"
	"\n"
	"BY EXERCISING ANY RIGHTS TO THE WORK PROVIDED HERE, YOU ACCEPT AND AGREE\n"
	"TO BE BOUND BY THE TERMS OF THIS LICENSE. TO THE EXTENT THIS LICENSE MAY\n"
	"BE CONSIDERED TO BE A CONTRACT, THE LICENSOR GRANTS YOU THE RIGHTS\n"
	"CONTAINED HERE IN CONSIDERATION OF YOUR ACCEPTANCE OF SUCH TERMS AND\n"
	"CONDITIONS.\n"
	"\n"
	"1. Definitions\n"
	"\n"
	"a. \042Adaptation\042 means a work based upon the Work, or upon the Work and\n"
	"other pre-existing works, such as a translation, adaptation, derivative\n"
	"work, arrangement of music or other alterations of a literary or\n"
	"artistic work, or phonogram or performance and includes cinematographic\n"
	"adaptations or any other form in which the Work may be recast,\n"
	"transformed, or adapted including in any form recognizably derived from\n"
	"the original, except that a work that constitutes a Collection will not\n"
	"be considered an Adaptation for the purpose of this License. For the\n"
	"avoidance of doubt, where the Work is a musical work, performance or\n"
	"phonogram, the synchronization of the Work in timed-relation with a\n"
	"moving image (\042synching\042) will be considered an Adaptation for the\n"
	"purpose of this License.\n"
	"\n"
	"b. \042Collection\042 means a collection of literary or artistic works, such\n"
	"as encyclopedias and anthologies, or performances, phonograms or\n"
	"broadcasts, or other works or subject matter other than works listed in\n"
	"Section 1(f) below, which, by reason of the selection and arrangement of\n"
	"their contents, constitute intellectual creations, in which the Work is\n"
	"included in its entirety in unmodified form along with one or more other\n"
	"contributions, each constituting separate and independent works in\n"
	"themselves, which together are assembled into a collective whole. A work\n"
	"that constitutes a Collection will not be considered an Adaptation (as\n"
	"defined above) for the purposes of this License.\n"
	"\n"
	"c.  \042Distribute\042 means to make available to the public the original and\n"
	"copies of the Work or Adaptation, as appropriate, through sale or other\n"
	"transfer of ownership.\n"
	"\n"
	"d. \042Licensor\042 means the individual, individuals, entity or entities that\n"
	"offer(s) the Work under the terms of this License.\n"
	"\n"
	"e. \042Original Author\042 means, in the case of a literary or artistic work,\n"
	"the individual, individuals, entity or entities who created the Work or\n"
	"if no individual or entity can be identified, the publisher; and in\n"
	"addition (i) in the case of a performance the actors, singers,\n"
	"musicians, dancers, and other persons who act, sing, deliver, declaim,\n"
	"play in, interpret or otherwise perform literary or artistic works or\n"
	"expressions of folklore; (ii) in the case of a phonogram the producer\n"
	"being the person or legal entity who first fixes the sounds of a\n"
	"performance or other sounds; and, (iii) in the case of broadcasts, the\n"
	"organization that transmits the broadcast.\n"
	"\n"
	"f. \042Work\042 means the literary and/or artistic work offered under the\n"
	"terms of this License including without limitation any production in the\n"
	"literary, scientific and artistic domain, whatever may be the mode or\n"
	"form of its expression including digital form, such as a book, pamphlet\n"
	"and other writing; a lecture, address, sermon or other work of the same\n"
	"nature; a dramatic or dramatico-musical work; a choreographic work or\n"
	"entertainment in dumb show; a musical composition with or without words;\n"
	"a cinematographic work to which are assimilated works expressed by a\n"
	"process analogous to cinematography; a work of drawing, painting,\n"
	"architecture, sculpture, engraving or lithography; a photographic work\n"
	"to which are assimilated works expressed by a process analogous to\n"
	"photography; a work of applied art; an illustration, map, plan, sketch\n"
	"or three-dimensional work relative to geography, topography,\n"
	"architecture or science; a performance; a broadcast; a phonogram; a\n"
	"compilation of data to the extent it is protected as a copyrightable\n"
	"work; or a work performed by a variety or circus performer to the extent\n"
	"it is not otherwise considered a literary or artistic work.\n"
	"\n"
	"g. \042You\042 means an individual or entity exercising rights under this\n"
	"License who has not previously violated the terms of this License with\n"
	"respect to the Work, or who has received express permission from the\n"
	"Licensor to exercise rights under this License despite a previous\n"
	"violation.\n"
	"\n"
	"h. \042Publicly Perform\042 means to perform public recitations of the Work\n"
	"and to communicate to the public those public recitations, by any means\n"
	"or process, including by wire or wireless means or public digital\n"
	"performances; to make available to the public Works in such a way that\n"
	"members of the public may access these Works from a place and at a place\n"
	"individually chosen by them; to perform the Work to the public by any\n"
	"means or process and the communication to the public of the performances\n"
	"of the Work, including by public digital performance; to broadcast and\n"
	"rebroadcast the Work by any means including signs, sounds or images.\n"
	"\n"
	"i. \042Reproduce\042 means to make copies of the Work by any means including\n"
	"without limitation by sound or visual recordings and the right of\n"
	"fixation and reproducing fixations of the Work, including storage of a\n"
	"protected performance or phonogram in digital form or other electronic\n"
	"medium.\n"
	"\n"
	"2. Fair Dealing Rights. Nothing in this License is intended to reduce,\n"
	"limit, or restrict any uses free from copyright or rights arising from\n"
	"limitations or exceptions that are provided for in connection with the\n"
	"copyright protection under copyright law or other applicable laws.\n"
	"\n"
	"3. License Grant. Subject to the terms and conditions of this License,\n"
	"Licensor hereby grants You a worldwide, royalty-free, non-exclusive,\n"
	"perpetual (for the duration of the applicable copyright) license to\n"
	"exercise the rights in the Work as stated below:\n"
	"\n"
	"a. to Reproduce the Work, to incorporate the Work into one or more\n"
	"Collections, and to Reproduce the Work as incorporated in the\n"
	"Collections;\n"
	"\n"
	"b. to create and Reproduce Adaptations provided that any such\n"
	"Adaptation, including any translation in any medium, takes reasonable\n"
	"steps to clearly label, demarcate or otherwise identify that changes\n"
	"were made to the original Work. For example, a translation could be\n"
	"marked \042The original work was translated from English to Spanish,\042 or a\n"
	"modification could indicate \042The original work has been modified.\042;\n"
	"\n"
	"c. to Distribute and Publicly Perform the Work including as incorporated\n"
	"in Collections; and,\n"
	"\n"
	"d. to Distribute and Publicly Perform Adaptations.\n"
	"\n"
	"e. For the avoidance of doubt:\n"
	"\n"
	"i. Non-waivable Compulsory License Schemes. In those jurisdictions in\n"
	"which the right to collect royalties through any statutory or compulsory\n"
	"licensing scheme cannot be waived, the Licensor reserves the exclusive\n"
	"right to collect such royalties for any exercise by You of the rights\n"
	"granted under this License;\n"
	"\n"
	"ii. Waivable Compulsory License Schemes. In those jurisdictions in which\n"
	"the right to collect royalties through any statutory or compulsory\n"
	"licensing scheme can be waived, the Licensor waives the exclusive right\n"
	"to collect such royalties for any exercise by You of the rights granted\n"
	"under this License; and,\n"
	"\n"
	"iii. Voluntary License Schemes. The Licensor waives the right to collect\n"
	"royalties, whether individually or, in the event that the Licensor is a\n"
	"member of a collecting society that administers voluntary licensing\n"
	"schemes, via that society, from any exercise by You of the rights\n"
	"granted under this License.\n"
	"\n"
	"The above rights may be exercised in all media and formats whether now\n"
	"known or hereafter devised. The above rights include the right to make\n"
	"such modifications as are technically necessary to exercise the rights\n"
	"in other media and formats. Subject to Section 8(f), all rights not\n"
	"expressly granted by Licensor are hereby reserved.\n"
	"\n"
	"4. Restrictions. The license granted in Section 3 above is expressly\n"
	"made subject to and limited by the following restrictions:\n"
	"\n"
	"a. You may Distribute or Publicly Perform the Work only under the terms\n"
	"of this License. You must include a copy of, or the Uniform Resource\n"
	"Identifier (URI) for, this License with every copy of the Work You\n"
	"Distribute or Publicly Perform. You may not offer or impose any terms on\n"
	"the Work that restrict the terms of this License or the ability of the\n"
	"recipient of the Work to exercise the rights granted to that recipient\n"
	"under the terms of the License. You may not sublicense the Work. You\n"
	"must keep intact all notices that refer to this License and to the\n"
	"disclaimer of warranties with every copy of the Work You Distribute or\n"
	"Publicly Perform. When You Distribute or Publicly Perform the Work, You\n"
	"may not impose any effective technological measures on the Work that\n"
	"restrict the ability of a recipient of the Work from You to exercise the\n"
	"rights granted to that recipient under the terms of the License. This\n"
	"Section 4(a) applies to the Work as incorporated in a Collection, but\n"
	"this does not require the Collection apart from the Work itself to be\n"
	"made subject to the terms of this License. If You create a Collection,\n"
	"upon notice from any Licensor You must, to the extent practicable,\n"
	"remove from the Collection any credit as required by Section 4(b), as\n"
	"requested. If You create an Adaptation, upon notice from any Licensor\n"
	"You must, to the extent practicable, remove from the Adaptation any\n"
	"credit as required by Section 4(b), as requested.\n"
	"\n"
	"b. If You Distribute, or Publicly Perform the Work or any Adaptations or\n"
	"Collections, You must, unless a request has been made pursuant to\n"
	"Section 4(a), keep intact all copyright notices for the Work and\n"
	"provide, reasonable to the medium or means You are utilizing: (i) the\n"
	"name of the Original Author (or pseudonym, if applicable) if supplied,\n"
	"and/or if the Original Author and/or Licensor designate another party or\n"
	"parties (e.g., a sponsor institute, publishing entity, journal) for\n"
	"attribution (\042Attribution Parties\042) in Licensor's copyright notice,\n"
	"terms of service or by other reasonable means, the name of such party or\n"
	"parties; (ii) the title of the Work if supplied; (iii) to the extent\n"
	"reasonably practicable, the URI, if any, that Licensor specifies to be\n"
	"associated with the Work, unless such URI does not refer to the\n"
	"copyright notice or licensing information for the Work; and (iv) ,\n"
	"consistent with Section 3(b), in the case of an Adaptation, a credit\n"
	"identifying the use of the Work in the Adaptation (e.g., \042French\n"
	"translation of the Work by Original Author,\042 or \042Screenplay based on\n"
	"original Work by Original Author\042). The credit required by this Section\n"
	"4 (b) may be implemented in any reasonable manner; provided, however,\n"
	"that in the case of a Adaptation or Collection, at a minimum such credit\n"
	"will appear, if a credit for all contributing authors of the Adaptation\n"
	"or Collection appears, then as part of these credits and in a manner at\n"
	"least as prominent as the credits for the other contributing authors.\n"
	"For the avoidance of doubt, You may only use the credit required by this\n"
	"Section for the purpose of attribution in the manner set out above and,\n"
	"by exercising Your rights under this License, You may not implicitly or\n"
	"explicitly assert or imply any connection with, sponsorship or\n"
	"endorsement by the Original Author, Licensor and/or Attribution Parties,\n"
	"as appropriate, of You or Your use of the Work, without the separate,\n"
	"express prior written permission of the Original Author, Licensor and/or\n"
	"Attribution Parties.\n"
	"\n"
	"c. Except as otherwise agreed in writing by the Licensor or as may be\n"
	"otherwise permitted by applicable law, if You Reproduce, Distribute or\n"
	"Publicly Perform the Work either by itself or as part of any Adaptations\n"
	"or Collections, You must not distort, mutilate, modify or take other\n"
	"derogatory action in relation to the Work which would be prejudicial to\n"
	"the Original Author's honor or reputation. Licensor agrees that in those\n"
	"jurisdictions (e.g. Japan), in which any exercise of the right granted\n"
	"in Section 3(b) of this License (the right to make Adaptations) would be\n"
	"deemed to be a distortion, mutilation, modification or other derogatory\n"
	"action prejudicial to the Original Author's honor and reputation, the\n"
	"Licensor will waive or not assert, as appropriate, this Section, to the\n"
	"fullest extent permitted by the applicable national law, to enable You\n"
	"to reasonably exercise Your right under Section 3(b) of this License\n"
	"(right to make Adaptations) but not otherwise.\n"
	"\n"
	"5. Representations, Warranties and Disclaimer\n"
	"\n"
	"UNLESS OTHERWISE MUTUALLY AGREED TO BY THE PARTIES IN WRITING, LICENSOR\n"
	"OFFERS THE WORK AS-IS AND MAKES NO REPRESENTATIONS OR WARRANTIES OF ANY\n"
	"KIND CONCERNING THE WORK, EXPRESS, IMPLIED, STATUTORY OR OTHERWISE,\n"
	"INCLUDING, WITHOUT LIMITATION, WARRANTIES OF TITLE, MERCHANTIBILITY,\n"
	"FITNESS FOR A PARTICULAR PURPOSE, NONINFRINGEMENT, OR THE ABSENCE OF\n"
	"LATENT OR OTHER DEFECTS, ACCURACY, OR THE PRESENCE OF ABSENCE OF ERRORS,\n"
	"WHETHER OR NOT DISCOVERABLE. SOME JURISDICTIONS DO NOT ALLOW THE\n"
	"EXCLUSION OF IMPLIED WARRANTIES, SO SUCH EXCLUSION MAY NOT APPLY TO YOU.\n"
	"\n"
	"6. Limitation on Liability. EXCEPT TO THE EXTENT REQUIRED BY APPLICABLE\n"
	"LAW, IN NO EVENT WILL LICENSOR BE LIABLE TO YOU ON ANY LEGAL THEORY FOR\n"
	"ANY SPECIAL, INCIDENTAL, CONSEQUENTIAL, PUNITIVE OR EXEMPLARY DAMAGES\n"
	"ARISING OUT OF THIS LICENSE OR THE USE OF THE WORK, EVEN IF LICENSOR HAS\n"
	"BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.\n"
	"\n"
	"7. Termination\n"
	"\n"
	"a. This License and the rights granted hereunder will terminate\n"
	"automatically upon any breach by You of the terms of this License.\n"
	"Individuals or entities who have received Adaptations or Collections\n"
	"from You under this License, however, will not have their licenses\n"
	"terminated provided such individuals or entities remain in full\n"
	"compliance with those licenses. Sections 1, 2, 5, 6, 7, and 8 will\n"
	"survive any termination of this License.\n"
	"\n"
	"b. Subject to the above terms and conditions, the license granted here\n"
	"is perpetual (for the duration of the applicable copyright in the Work).\n"
	"Notwithstanding the above, Licensor reserves the right to release the\n"
	"Work under different license terms or to stop distributing the Work at\n"
	"any time; provided, however that any such election will not serve to\n"
	"withdraw this License (or any other license that has been, or is\n"
	"required to be, granted under the terms of this License), and this\n"
	"License will continue in full force and effect unless terminated as\n"
	"stated above.\n"
	"\n"
	"8. Miscellaneous\n"
	"\n"
	"a. Each time You Distribute or Publicly Perform the Work or a\n"
	"Collection, the Licensor offers to the recipient a license to the Work\n"
	"on the same terms and conditions as the license granted to You under\n"
	"this License.\n"
	"\n"
	"b. Each time You Distribute or Publicly Perform an Adaptation, Licensor\n"
	"offers to the recipient a license to the original Work on the same terms\n"
	"and conditions as the license granted to You under this License.\n"
	"\n"
	"c. If any provision of this License is invalid or unenforceable under\n"
	"applicable law, it shall not affect the validity or enforceability of\n"
	"the remainder of the terms of this License, and without further action\n"
	"by the parties to this agreement, such provision shall be reformed to\n"
	"the minimum extent necessary to make such provision valid and\n"
	"enforceable.\n"
	"\n"
	"d. No term or provision of this License shall be deemed waived and no\n"
	"breach consented to unless such waiver or consent shall be in writing\n"
	"and signed by the party to be charged with such waiver or consent. This\n"
	"License constitutes the entire agreement between the parties with\n"
	"respect to the Work licensed here. There are no understandings,\n"
	"agreements or representations with respect to the Work not specified\n"
	"here. Licensor shall not be bound by any additional provisions that may\n"
	"appear in any communication from You.\n"
	"\n"
	"e. This License may not be modified without the mutual written agreement\n"
	"of the Licensor and You.\n"
	"\n"
	"f. The rights granted under, and the subject matter referenced, in this\n"
	"License were drafted utilizing the terminology of the Berne Convention\n"
	"for the Protection of Literary and Artistic Works (as amended on\n"
	"September 28, 1979), the Rome Convention of 1961, the WIPO Copyright\n"
	"Treaty of 1996, the WIPO Performances and Phonograms Treaty of 1996 and\n"
	"the Universal Copyright Convention (as revised on July 24, 1971). These\n"
	"rights and subject matter take effect in the relevant jurisdiction in\n"
	"which the License terms are sought to be enforced according to the\n"
	"corresponding provisions of the implementation of those treaty\n"
	"provisions in the applicable national law. If the standard suite of\n"
	"rights granted under applicable copyright law includes additional rights\n"
	"not granted under this License, such additional rights are deemed to be\n"
	"included in the License; this License is not intended to restrict the\n"
	"license of any rights under applicable law.\n"
	"\n"
	"Creative Commons Notice\n"
	"\n"
	"Creative Commons is not a party to this License, and makes no warranty\n"
	"whatsoever in connection with the Work. Creative Commons will not be\n"
	"liable to You or any party on any legal theory for any damages\n"
	"whatsoever, including without limitation any general, special,\n"
	"incidental or consequential damages arising in connection to this\n"
	"license. Notwithstanding the foregoing two (2) sentences, if Creative\n"
	"Commons has expressly identified itself as the Licensor hereunder, it\n"
	"shall have all rights and obligations of Licensor.\n"
	"\n"
	"Except for the limited purpose of indicating to the public that the Work\n"
	"is licensed under the CCPL, Creative Commons does not authorize the use\n"
	"by either party of the trademark \042Creative Commons\042 or any related\n"
	"trademark or logo of Creative Commons without the prior written consent\n"
	"of Creative Commons. Any permitted use will be in compliance with\n"
	"Creative Commons' then-current trademark usage guidelines, as may be\n"
	"published on its website or otherwise made available upon request from\n"
	"time to time. For the avoidance of doubt, this trademark restriction\n"
	"does not form part of this License.\n"
	"\n"
	"Creative Commons may be contacted at http://creativecommons.org/.\n"
	"",
		"All rights reserved.\n"
	"\n"
	"Permission to use, copy, modify, and distribute this software for any purpose\n"
	"with or without fee is hereby granted, provided that the above copyright\n"
	"notice and this permission notice appear in all copies.\n"
	"\n"
	"THE SOFTWARE IS PROVIDED \042AS IS\042, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n"
	"IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n"
	"FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT OF THIRD PARTY RIGHTS. IN\n"
	"NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,\n"
	"DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR\n"
	"OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE\n"
	"OR OTHER DEALINGS IN THE SOFTWARE.\n"
	"\n"
	"Except as contained in this notice, the name of a copyright holder shall not\n"
	"be used in advertising or otherwise to promote the sale, use or other dealings\n"
	"in this Software without prior written authorization of the copyright holder.\n"
	"",
		"Permission is hereby granted, free of charge, to any person obtaining\n"
	"a copy of this software and associated documentation files (the\n"
	"\042Software\042), to deal in the Software without restriction, including\n"
	"without limitation the rights to use, copy, modify, merge, publish,\n"
	"distribute, sublicense, and/or sell copies of the Software, and to\n"
	"permit persons to whom the Software is furnished to do so, subject to\n"
	"the following conditions:\n"
	"\n"
	"The above copyright notice and this permission notice shall be\n"
	"included in all copies or substantial portions of the Software.\n"
	"\n"
	"THE SOFTWARE IS PROVIDED \042AS IS\042, WITHOUT WARRANTY OF ANY KIND,\n"
	"EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF\n"
	"MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.\n"
	"IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY\n"
	"CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,\n"
	"TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE\n"
	"SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.\n"
	"",
		"The FreeType Project LICENSE\n"
	"----------------------------\n"
	"\n"
	"2000-Feb-08\n"
	"\n"
	"Copyright 1996-2000 by\n"
	"David Turner, Robert Wilhelm, and Werner Lemberg\n"
	"\n"
	"\n"
	"\n"
	"Introduction\n"
	"============\n"
	"\n"
	"The FreeType  Project is distributed in  several archive packages;\n"
	"some of them may contain, in addition to the FreeType font engine,\n"
	"various tools and  contributions which rely on, or  relate to, the\n"
	"FreeType Project.\n"
	"\n"
	"This  license applies  to all  files found  in such  packages, and\n"
	"which do not  fall under their own explicit  license.  The license\n"
	"affects  thus  the  FreeType   font  engine,  the  test  programs,\n"
	"documentation and makefiles, at the very least.\n"
	"\n"
	"This  license   was  inspired  by  the  BSD,   Artistic,  and  IJG\n"
	"(Independent JPEG  Group) licenses, which  all encourage inclusion\n"
	"and  use of  free  software in  commercial  and freeware  products\n"
	"alike.  As a consequence, its main points are that:\n"
	"\n"
	"o We don't promise that this software works. However, we will be\n"
	"interested in any kind of bug reports. (`as is' distribution)\n"
	"\n"
	"o You can  use this software for whatever you  want, in parts or\n"
	"full form, without having to pay us. (`royalty-free' usage)\n"
	"\n"
	"o You may not pretend that  you wrote this software.  If you use\n"
	"it, or  only parts of it,  in a program,  you must acknowledge\n"
	"somewhere  in  your  documentation  that  you  have  used  the\n"
	"FreeType code. (`credits')\n"
	"\n"
	"We  specifically  permit  and  encourage  the  inclusion  of  this\n"
	"software, with  or without modifications,  in commercial products.\n"
	"We  disclaim  all warranties  covering  The  FreeType Project  and\n"
	"assume no liability related to The FreeType Project.\n"
	"\n"
	"\n"
	"Legal Terms\n"
	"===========\n"
	"\n"
	"0. Definitions\n"
	"--------------\n"
	"\n"
	"Throughout this license,  the terms `package', `FreeType Project',\n"
	"and  `FreeType  archive' refer  to  the  set  of files  originally\n"
	"distributed  by the  authors  (David Turner,  Robert Wilhelm,  and\n"
	"Werner Lemberg) as the `FreeType Project', be they named as alpha,\n"
	"beta or final release.\n"
	"\n"
	"`You' refers to  the licensee, or person using  the project, where\n"
	"`using' is a generic term including compiling the project's source\n"
	"code as  well as linking it  to form a  `program' or `executable'.\n"
	"This  program is  referred to  as  `a program  using the  FreeType\n"
	"engine'.\n"
	"\n"
	"This  license applies  to all  files distributed  in  the original\n"
	"FreeType  Project,   including  all  source   code,  binaries  and\n"
	"documentation,  unless  otherwise  stated   in  the  file  in  its\n"
	"original, unmodified form as  distributed in the original archive.\n"
	"If you are  unsure whether or not a particular  file is covered by\n"
	"this license, you must contact us to verify this.\n"
	"\n"
	"The FreeType  Project is copyright (C) 1996-2000  by David Turner,\n"
	"Robert Wilhelm, and Werner Lemberg.  All rights reserved except as\n"
	"specified below.\n"
	"\n"
	"1. No Warranty\n"
	"--------------\n"
	"\n"
	"THE FREETYPE PROJECT  IS PROVIDED `AS IS' WITHOUT  WARRANTY OF ANY\n"
	"KIND, EITHER  EXPRESS OR IMPLIED,  INCLUDING, BUT NOT  LIMITED TO,\n"
	"WARRANTIES  OF  MERCHANTABILITY   AND  FITNESS  FOR  A  PARTICULAR\n"
	"PURPOSE.  IN NO EVENT WILL ANY OF THE AUTHORS OR COPYRIGHT HOLDERS\n"
	"BE LIABLE  FOR ANY DAMAGES CAUSED  BY THE USE OR  THE INABILITY TO\n"
	"USE, OF THE FREETYPE PROJECT.\n"
	"\n"
	"2. Redistribution\n"
	"-----------------\n"
	"\n"
	"This  license  grants  a  worldwide, royalty-free,  perpetual  and\n"
	"irrevocable right  and license to use,  execute, perform, compile,\n"
	"display,  copy,   create  derivative  works   of,  distribute  and\n"
	"sublicense the  FreeType Project (in  both source and  object code\n"
	"forms)  and  derivative works  thereof  for  any  purpose; and  to\n"
	"authorize others  to exercise  some or all  of the  rights granted\n"
	"herein, subject to the following conditions:\n"
	"\n"
	"o Redistribution  of source code  must retain this  license file\n"
	"(`LICENSE.TXT') unaltered; any additions, deletions or changes\n"
	"to   the  original   files  must   be  clearly   indicated  in\n"
	"accompanying  documentation.   The  copyright notices  of  the\n"
	"unaltered, original  files must be preserved in  all copies of\n"
	"source files.\n"
	"\n"
	"o Redistribution in binary form must provide a  disclaimer  that\n"
	"states  that  the software is based in part of the work of the\n"
	"FreeType Team,  in  the  distribution  documentation.  We also\n"
	"encourage you to put an URL to the FreeType web page  in  your\n"
	"documentation, though this isn't mandatory.\n"
	"\n"
	"These conditions  apply to any  software derived from or  based on\n"
	"the FreeType Project,  not just the unmodified files.   If you use\n"
	"our work, you  must acknowledge us.  However, no  fee need be paid\n"
	"to us.\n"
	"\n"
	"3. Advertising\n"
	"--------------\n"
	"\n"
	"Neither the  FreeType authors and  contributors nor you  shall use\n"
	"the name of the  other for commercial, advertising, or promotional\n"
	"purposes without specific prior written permission.\n"
	"\n"
	"We suggest,  but do not require, that  you use one or  more of the\n"
	"following phrases to refer  to this software in your documentation\n"
	"or advertising  materials: `FreeType Project',  `FreeType Engine',\n"
	"`FreeType library', or `FreeType Distribution'.\n"
	"\n"
	"As  you have  not signed  this license,  you are  not  required to\n"
	"accept  it.   However,  as  the FreeType  Project  is  copyrighted\n"
	"material, only  this license, or  another one contracted  with the\n"
	"authors, grants you  the right to use, distribute,  and modify it.\n"
	"Therefore,  by  using,  distributing,  or modifying  the  FreeType\n"
	"Project, you indicate that you understand and accept all the terms\n"
	"of this license.\n"
	"\n"
	"4. Contacts\n"
	"-----------\n"
	"\n"
	"There are two mailing lists related to FreeType:\n"
	"\n"
	"o freetype@freetype.org\n"
	"\n"
	"Discusses general use and applications of FreeType, as well as\n"
	"future and  wanted additions to the  library and distribution.\n"
	"If  you are looking  for support,  start in  this list  if you\n"
	"haven't found anything to help you in the documentation.\n"
	"\n"
	"o devel@freetype.org\n"
	"\n"
	"Discusses bugs,  as well  as engine internals,  design issues,\n"
	"specific licenses, porting, etc.\n"
	"\n"
	"o http://www.freetype.org\n"
	"\n"
	"Holds the current  FreeType web page, which will  allow you to\n"
	"download  our  latest  development  version  and  read  online\n"
	"documentation.\n"
	"\n"
	"You can also contact us individually at:\n"
	"\n"
	"David Turner      <david.turner@freetype.org>\n"
	"Robert Wilhelm    <robert.wilhelm@freetype.org>\n"
	"Werner Lemberg    <werner.lemberg@freetype.org>\n"
	"",
		"Permission to use, copy, modify, and/or distribute this software for any\n"
	"purpose with or without fee is hereby granted, provided that the above\n"
	"copyright notice and this permission notice appear in all copies.\n"
	"\n"
	"THE SOFTWARE IS PROVIDED \042AS IS\042 AND THE AUTHOR DISCLAIMS ALL WARRANTIES\n"
	"WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF\n"
	"MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR\n"
	"ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES\n"
	"WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN\n"
	"ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF\n"
	"OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.\n"
	"",
		"PREAMBLE\n"
	"The goals of the Open Font License (OFL) are to stimulate worldwide\n"
	"development of collaborative font projects, to support the font creation\n"
	"efforts of academic and linguistic communities, and to provide a free and\n"
	"open framework in which fonts may be shared and improved in partnership\n"
	"with others.\n"
	"\n"
	"The OFL allows the licensed fonts to be used, studied, modified and\n"
	"redistributed freely as long as they are not sold by themselves. The\n"
	"fonts, including any derivative works, can be bundled, embedded,\n"
	"redistributed and/or sold with any software provided that any reserved\n"
	"names are not used by derivative works. The fonts and derivatives,\n"
	"however, cannot be released under any other type of license. The\n"
	"requirement for fonts to remain under this license does not apply\n"
	"to any document created using the fonts or their derivatives.\n"
	"\n"
	"DEFINITIONS\n"
	"\042Font Software\042 refers to the set of files released by the Copyright\n"
	"Holder(s) under this license and clearly marked as such. This may\n"
	"include source files, build scripts and documentation.\n"
	"\n"
	"\042Reserved Font Name\042 refers to any names specified as such after the\n"
	"copyright statement(s).\n"
	"\n"
	"\042Original Version\042 refers to the collection of Font Software components as\n"
	"distributed by the Copyright Holder(s).\n"
	"\n"
	"\042Modified Version\042 refers to any derivative made by adding to, deleting,\n"
	"or substituting -- in part or in whole -- any of the components of the\n"
	"Original Version, by changing formats or by porting the Font Software to a\n"
	"new environment.\n"
	"\n"
	"\042Author\042 refers to any designer, engineer, programmer, technical\n"
	"writer or other person who contributed to the Font Software.\n"
	"\n"
	"PERMISSION & CONDITIONS\n"
	"Permission is hereby granted, free of charge, to any person obtaining\n"
	"a copy of the Font Software, to use, study, copy, merge, embed, modify,\n"
	"redistribute, and sell modified and unmodified copies of the Font\n"
	"Software, subject to the following conditions:\n"
	"\n"
	"1) Neither the Font Software nor any of its individual components,\n"
	"in Original or Modified Versions, may be sold by itself.\n"
	"\n"
	"2) Original or Modified Versions of the Font Software may be bundled,\n"
	"redistributed and/or sold with any software, provided that each copy\n"
	"contains the above copyright notice and this license. These can be\n"
	"included either as stand-alone text files, human-readable headers or\n"
	"in the appropriate machine-readable metadata fields within text or\n"
	"binary files as long as those fields can be easily viewed by the user.\n"
	"\n"
	"3) No Modified Version of the Font Software may use the Reserved Font\n"
	"Name(s) unless explicit written permission is granted by the corresponding\n"
	"Copyright Holder. This restriction only applies to the primary font name as\n"
	"presented to the users.\n"
	"\n"
	"4) The name(s) of the Copyright Holder(s) or the Author(s) of the Font\n"
	"Software shall not be used to promote, endorse or advertise any\n"
	"Modified Version, except to acknowledge the contribution(s) of the\n"
	"Copyright Holder(s) and the Author(s) or with their explicit written\n"
	"permission.\n"
	"\n"
	"5) The Font Software, modified or unmodified, in part or in whole,\n"
	"must be distributed entirely under this license, and must not be\n"
	"distributed under any other license. The requirement for fonts to\n"
	"remain under this license does not apply to any document created\n"
	"using the Font Software.\n"
	"\n"
	"TERMINATION\n"
	"This license becomes null and void if any of the above conditions are\n"
	"not met.\n"
	"\n"
	"DISCLAIMER\n"
	"THE FONT SOFTWARE IS PROVIDED \042AS IS\042, WITHOUT WARRANTY OF ANY KIND,\n"
	"EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO ANY WARRANTIES OF\n"
	"MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT\n"
	"OF COPYRIGHT, PATENT, TRADEMARK, OR OTHER RIGHT. IN NO EVENT SHALL THE\n"
	"COPYRIGHT HOLDER BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,\n"
	"INCLUDING ANY GENERAL, SPECIAL, INDIRECT, INCIDENTAL, OR CONSEQUENTIAL\n"
	"DAMAGES, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING\n"
	"FROM, OUT OF THE USE OR INABILITY TO USE THE FONT SOFTWARE.\n"
	"",
		"LICENSE ISSUES\n"
	"==============\n"
	"\n"
	"The OpenSSL toolkit stays under a double license, i.e. both the conditions of\n"
	"the OpenSSL License and the original SSLeay license apply to the toolkit.\n"
	"See below for the actual license texts.\n"
	"\n"
	"OpenSSL License\n"
	"---------------\n"
	"\n"
	"====================================================================\n"
	"Copyright (c) 1998-2017 The OpenSSL Project.  All rights reserved.\n"
	"\n"
	"Redistribution and use in source and binary forms, with or without\n"
	"modification, are permitted provided that the following conditions\n"
	"are met:\n"
	"\n"
	"1. Redistributions of source code must retain the above copyright\n"
	"notice, this list of conditions and the following disclaimer.\n"
	"\n"
	"2. Redistributions in binary form must reproduce the above copyright\n"
	"notice, this list of conditions and the following disclaimer in\n"
	"the documentation and/or other materials provided with the\n"
	"distribution.\n"
	"\n"
	"3. All advertising materials mentioning features or use of this\n"
	"software must display the following acknowledgment:\n"
	"\042This product includes software developed by the OpenSSL Project\n"
	"for use in the OpenSSL Toolkit. (http://www.openssl.org/)\042\n"
	"\n"
	"4. The names \042OpenSSL Toolkit\042 and \042OpenSSL Project\042 must not be used to\n"
	"endorse or promote products derived from this software without\n"
	"prior written permission. For written permission, please contact\n"
	"openssl-core@openssl.org.\n"
	"\n"
	"5. Products derived from this software may not be called \042OpenSSL\042\n"
	"nor may \042OpenSSL\042 appear in their names without prior written\n"
	"permission of the OpenSSL Project.\n"
	"\n"
	"6. Redistributions of any form whatsoever must retain the following\n"
	"acknowledgment:\n"
	"\042This product includes software developed by the OpenSSL Project\n"
	"for use in the OpenSSL Toolkit (http://www.openssl.org/)\042\n"
	"\n"
	"THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY\n"
	"EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE\n"
	"IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR\n"
	"PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR\n"
	"ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,\n"
	"SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT\n"
	"NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;\n"
	"LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)\n"
	"HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,\n"
	"STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)\n"
	"ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED\n"
	"OF THE POSSIBILITY OF SUCH DAMAGE.\n"
	"====================================================================\n"
	"\n"
	"This product includes cryptographic software written by Eric Young\n"
	"(eay@cryptsoft.com).  This product includes software written by Tim\n"
	"Hudson (tjh@cryptsoft.com).\n"
	"\n"
	"Original SSLeay License\n"
	"-----------------------\n"
	"\n"
	"Copyright (C) 1995-1998 Eric Young (eay@cryptsoft.com)\n"
	"All rights reserved.\n"
	"\n"
	"This package is an SSL implementation written\n"
	"by Eric Young (eay@cryptsoft.com).\n"
	"The implementation was written so as to conform with Netscapes SSL.\n"
	"\n"
	"This library is free for commercial and non-commercial use as long as\n"
	"the following conditions are aheared to.  The following conditions\n"
	"apply to all code found in this distribution, be it the RC4, RSA,\n"
	"lhash, DES, etc., code; not just the SSL code.  The SSL documentation\n"
	"included with this distribution is covered by the same copyright terms\n"
	"except that the holder is Tim Hudson (tjh@cryptsoft.com).\n"
	"\n"
	"Copyright remains Eric Young's, and as such any Copyright notices in\n"
	"the code are not to be removed.\n"
	"If this package is used in a product, Eric Young should be given attribution\n"
	"as the author of the parts of the library used.\n"
	"This can be in the form of a textual message at program startup or\n"
	"in documentation (online or textual) provided with the package.\n"
	"\n"
	"Redistribution and use in source and binary forms, with or without\n"
	"modification, are permitted provided that the following conditions\n"
	"are met:\n"
	"1. Redistributions of source code must retain the copyright\n"
	"notice, this list of conditions and the following disclaimer.\n"
	"2. Redistributions in binary form must reproduce the above copyright\n"
	"notice, this list of conditions and the following disclaimer in the\n"
	"documentation and/or other materials provided with the distribution.\n"
	"3. All advertising materials mentioning features or use of this software\n"
	"must display the following acknowledgement:\n"
	"\042This product includes cryptographic software written by\n"
	"Eric Young (eay@cryptsoft.com)\042\n"
	"The word 'cryptographic' can be left out if the rouines from the library\n"
	"being used are not cryptographic related :-).\n"
	"4. If you include any Windows specific code (or a derivative thereof) from\n"
	"the apps directory (application code) you must include an acknowledgement:\n"
	"\042This product includes software written by Tim Hudson (tjh@cryptsoft.com)\042\n"
	"\n"
	"THIS SOFTWARE IS PROVIDED BY ERIC YOUNG ``AS IS'' AND\n"
	"ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE\n"
	"IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE\n"
	"ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE\n"
	"FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL\n"
	"DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS\n"
	"OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)\n"
	"HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT\n"
	"LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY\n"
	"OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF\n"
	"SUCH DAMAGE.\n"
	"\n"
	"The licence and distribution terms for any publically available version or\n"
	"derivative of this code cannot be changed.  i.e. this code cannot simply be\n"
	"copied and put under another distribution licence\n"
	"[including the GNU Public Licence.]\n"
	"",
		"License to copy and use this software is granted provided that it is\n"
	"identified as the \042RSA Data Security, Inc. MD5 Message-Digest Algorithm\042\n"
	"in all material mentioning or referencing this software or this function.\n"
	"\n"
	"License is also granted to make and use derivative works provided that such\n"
	"works are identified as \042derived from the RSA Data Security, Inc. MD5\n"
	"Message-Digest Algorithm\042 in all material mentioning or referencing the\n"
	"derived work.\n"
	"\n"
	"RSA Data Security, Inc. makes no representations concerning either the\n"
	"merchantability of this software or the suitability of this software for\n"
	"any particular purpose. It is provided \042as is\042 without express or implied\n"
	"warranty of any kind.\n"
	"\n"
	"These notices must be retained in any copies of any part of this\n"
	"documentation and/or software.\n"
	"",
		"This software is provided 'as-is', without any express or implied\n"
	"warranty.  In no event will the authors be held liable for any damages\n"
	"arising from the use of this software.\n"
	"\n"
	"Permission is granted to anyone to use this software for any purpose,\n"
	"including commercial applications, and to alter it and redistribute it\n"
	"freely, subject to the following restrictions:\n"
	"\n"
	"1. The origin of this software must not be misrepresented; you must not\n"
	"claim that you wrote the original software. If you use this software\n"
	"in a product, an acknowledgment in the product documentation would be\n"
	"appreciated but is not required.\n"
	"2. Altered source versions must be plainly marked as such, and must not be\n"
	"misrepresented as being the original software.\n"
	"3. This notice may not be removed or altered from any source distribution.\n"
	"",
	0
};
#endif
