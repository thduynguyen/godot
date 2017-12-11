/* WARNING, THIS FILE WAS GENERATED, DO NOT EDIT */
#ifndef EFFECT_BLUR_GLSL_GEN_HGLES3_120
#define EFFECT_BLUR_GLSL_GEN_HGLES3_120


#include "drivers/gles3/shader_gles3.h"


class EffectBlurShaderGLES3 : public ShaderGLES3 {

	 virtual String get_shader_name() const { return "EffectBlurShaderGLES3"; }
public:

	enum Conditionals {
		USE_BLUR_SECTION,
		SSAO_MERGE,
		DOF_QUALITY_LOW,
		DOF_QUALITY_MEDIUM,
		DOF_QUALITY_HIGH,
		DOF_NEAR_BLUR_MERGE,
		GLOW_FIRST_PASS,
		GLOW_USE_AUTO_EXPOSURE,
		GAUSSIAN_HORIZONTAL,
		GAUSSIAN_VERTICAL,
		GLOW_GAUSSIAN_HORIZONTAL,
		GLOW_GAUSSIAN_VERTICAL,
		DOF_FAR_BLUR,
		USE_ORTHOGONAL_PROJECTION,
		DOF_NEAR_BLUR,
		DOF_NEAR_FIRST_TAP,
		SIMPLE_COPY,
	};

	enum Uniforms {
		BLUR_SECTION,
		LOD,
		PIXEL_SIZE,
		SSAO_COLOR,
		GLOW_STRENGTH,
		DOF_BEGIN,
		DOF_END,
		DOF_DIR,
		DOF_RADIUS,
		EXPOSURE,
		WHITE,
		AUTO_EXPOSURE_GREY,
		GLOW_BLOOM,
		GLOW_HDR_THRESHOLD,
		GLOW_HDR_SCALE,
		CAMERA_Z_FAR,
		CAMERA_Z_NEAR,
	};

	_FORCE_INLINE_ int get_uniform(Uniforms p_uniform) const { return _get_uniform(p_uniform); }

	_FORCE_INLINE_ void set_conditional(Conditionals p_conditional,bool p_enable)  {  _set_conditional(p_conditional,p_enable); }

	#define _FU if (get_uniform(p_uniform)<0) return; ERR_FAIL_COND( get_active()!=this );

 	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, float p_value) { _FU glUniform1f(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, double p_value) { _FU glUniform1f(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, uint8_t p_value) { _FU glUniform1i(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, int8_t p_value) { _FU glUniform1i(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, uint16_t p_value) { _FU glUniform1i(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, int16_t p_value) { _FU glUniform1i(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, uint32_t p_value) { _FU glUniform1i(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, int32_t p_value) { _FU glUniform1i(get_uniform(p_uniform),p_value); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, const Color& p_color) { _FU GLfloat col[4]={p_color.r,p_color.g,p_color.b,p_color.a}; glUniform4fv(get_uniform(p_uniform),1,col); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, const Vector2& p_vec2) { _FU GLfloat vec2[2]={p_vec2.x,p_vec2.y}; glUniform2fv(get_uniform(p_uniform),1,vec2); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, const Vector3& p_vec3) { _FU GLfloat vec3[3]={p_vec3.x,p_vec3.y,p_vec3.z}; glUniform3fv(get_uniform(p_uniform),1,vec3); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, float p_a, float p_b) { _FU glUniform2f(get_uniform(p_uniform),p_a,p_b); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, float p_a, float p_b, float p_c) { _FU glUniform3f(get_uniform(p_uniform),p_a,p_b,p_c); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, float p_a, float p_b, float p_c, float p_d) { _FU glUniform4f(get_uniform(p_uniform),p_a,p_b,p_c,p_d); }

	_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, const Transform& p_transform) {  _FU

		const Transform &tr = p_transform;

		GLfloat matrix[16]={ /* build a 16x16 matrix */
			tr.basis.elements[0][0],
			tr.basis.elements[1][0],
			tr.basis.elements[2][0],
			0,
			tr.basis.elements[0][1],
			tr.basis.elements[1][1],
			tr.basis.elements[2][1],
			0,
			tr.basis.elements[0][2],
			tr.basis.elements[1][2],
			tr.basis.elements[2][2],
			0,
			tr.origin.x,
			tr.origin.y,
			tr.origin.z,
			1
		};


	glUniformMatrix4fv(get_uniform(p_uniform),1,false,matrix);


	}

		_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, const Transform2D& p_transform) {  _FU

		const Transform2D &tr = p_transform;

		GLfloat matrix[16]={ /* build a 16x16 matrix */
			tr.elements[0][0],
			tr.elements[0][1],
			0,
			0,
			tr.elements[1][0],
			tr.elements[1][1],
			0,
			0,
			0,
			0,
			1,
			0,
			tr.elements[2][0],
			tr.elements[2][1],
			0,
			1
		};


	glUniformMatrix4fv(get_uniform(p_uniform),1,false,matrix);


	}

		_FORCE_INLINE_ void set_uniform(Uniforms p_uniform, const CameraMatrix& p_matrix) {  _FU

		GLfloat matrix[16];

		for (int i=0;i<4;i++) {
			for (int j=0;j<4;j++) {

				matrix[i*4+j]=p_matrix.matrix[i][j];
			}
		}

		glUniformMatrix4fv(get_uniform(p_uniform),1,false,matrix);
	}; 

#undef _FU


	virtual void init() {

		static const char* _conditional_strings[]={
			"#define USE_BLUR_SECTION\n",
			"#define SSAO_MERGE\n",
			"#define DOF_QUALITY_LOW\n",
			"#define DOF_QUALITY_MEDIUM\n",
			"#define DOF_QUALITY_HIGH\n",
			"#define DOF_NEAR_BLUR_MERGE\n",
			"#define GLOW_FIRST_PASS\n",
			"#define GLOW_USE_AUTO_EXPOSURE\n",
			"#define GAUSSIAN_HORIZONTAL\n",
			"#define GAUSSIAN_VERTICAL\n",
			"#define GLOW_GAUSSIAN_HORIZONTAL\n",
			"#define GLOW_GAUSSIAN_VERTICAL\n",
			"#define DOF_FAR_BLUR\n",
			"#define USE_ORTHOGONAL_PROJECTION\n",
			"#define DOF_NEAR_BLUR\n",
			"#define DOF_NEAR_FIRST_TAP\n",
			"#define SIMPLE_COPY\n",
		};

		static const char* _uniform_strings[]={
			"blur_section",
			"lod",
			"pixel_size",
			"ssao_color",
			"glow_strength",
			"dof_begin",
			"dof_end",
			"dof_dir",
			"dof_radius",
			"exposure",
			"white",
			"auto_exposure_grey",
			"glow_bloom",
			"glow_hdr_threshold",
			"glow_hdr_scale",
			"camera_z_far",
			"camera_z_near",
		};

		static AttributePair *_attribute_pairs=NULL;
		static const Feedback* _feedbacks=NULL;
		static TexUnitPair _texunit_pairs[]={
			{"source_color",0},
			{"source_ssao",1},
			{"dof_source_depth",1},
			{"source_dof_original",2},
			{"source_auto_exposure",1},
		};

		static UBOPair *_ubo_pairs=NULL;
		static const char _vertex_code[]={
10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,61,48,41,32,105,110,32,104,105,103,104,112,32,118,101,99,52,32,118,101,114,116,101,120,95,97,116,116,114,105,98,59,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,61,52,41,32,105,110,32,118,101,99,50,32,117,118,95,105,110,59,10,10,111,117,116,32,118,101,99,50,32,117,118,95,105,110,116,101,114,112,59,10,10,35,105,102,100,101,102,32,85,83,69,95,66,76,85,82,95,83,69,67,84,73,79,78,10,10,117,110,105,102,111,114,109,32,118,101,99,52,32,98,108,117,114,95,115,101,99,116,105,111,110,59,10,10,35,101,110,100,105,102,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,10,9,117,118,95,105,110,116,101,114,112,32,61,32,117,118,95,105,110,59,10,9,103,108,95,80,111,115,105,116,105,111,110,32,61,32,118,101,114,116,101,120,95,97,116,116,114,105,98,59,10,35,105,102,100,101,102,32,85,83,69,95,66,76,85,82,95,83,69,67,84,73,79,78,10,10,9,117,118,95,105,110,116,101,114,112,32,61,32,98,108,117,114,95,115,101,99,116,105,111,110,46,120,121,32,43,32,117,118,95,105,110,116,101,114,112,32,42,32,98,108,117,114,95,115,101,99,116,105,111,110,46,122,119,59,10,9,103,108,95,80,111,115,105,116,105,111,110,46,120,121,32,61,32,40,98,108,117,114,95,115,101,99,116,105,111,110,46,120,121,32,43,32,40,103,108,95,80,111,115,105,116,105,111,110,46,120,121,32,42,32,48,46,53,32,43,32,48,46,53,41,32,42,32,98,108,117,114,95,115,101,99,116,105,111,110,46,122,119,41,32,42,32,50,46,48,32,45,32,49,46,48,59,10,35,101,110,100,105,102,10,125,10,10,		0};

		static const int _vertex_code_start=1;
		static const char _fragment_code[]={
10,35,105,102,32,33,100,101,102,105,110,101,100,40,71,76,69,83,95,79,86,69,82,95,71,76,41,10,112,114,101,99,105,115,105,111,110,32,109,101,100,105,117,109,112,32,102,108,111,97,116,59,10,35,101,110,100,105,102,10,10,105,110,32,118,101,99,50,32,117,118,95,105,110,116,101,114,112,59,10,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,50,68,32,115,111,117,114,99,101,95,99,111,108,111,114,59,32,47,47,116,101,120,117,110,105,116,58,48,10,10,35,105,102,100,101,102,32,83,83,65,79,95,77,69,82,71,69,10,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,50,68,32,115,111,117,114,99,101,95,115,115,97,111,59,32,47,47,116,101,120,117,110,105,116,58,49,10,35,101,110,100,105,102,10,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,108,111,100,59,10,117,110,105,102,111,114,109,32,118,101,99,50,32,112,105,120,101,108,95,115,105,122,101,59,10,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,111,117,116,32,118,101,99,52,32,102,114,97,103,95,99,111,108,111,114,59,10,10,35,105,102,100,101,102,32,83,83,65,79,95,77,69,82,71,69,10,10,117,110,105,102,111,114,109,32,118,101,99,52,32,115,115,97,111,95,99,111,108,111,114,59,10,10,35,101,110,100,105,102,10,10,35,105,102,32,100,101,102,105,110,101,100,32,40,71,76,79,87,95,71,65,85,83,83,73,65,78,95,72,79,82,73,90,79,78,84,65,76,41,32,124,124,32,100,101,102,105,110,101,100,40,71,76,79,87,95,71,65,85,83,83,73,65,78,95,86,69,82,84,73,67,65,76,41,10,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,103,108,111,119,95,115,116,114,101,110,103,116,104,59,10,10,35,101,110,100,105,102,10,10,35,105,102,32,100,101,102,105,110,101,100,40,68,79,70,95,70,65,82,95,66,76,85,82,41,32,124,124,32,100,101,102,105,110,101,100,32,40,68,79,70,95,78,69,65,82,95,66,76,85,82,41,10,10,35,105,102,100,101,102,32,68,79,70,95,81,85,65,76,73,84,89,95,76,79,87,10,99,111,110,115,116,32,105,110,116,32,100,111,102,95,107,101,114,110,101,108,95,115,105,122,101,61,53,59,10,99,111,110,115,116,32,105,110,116,32,100,111,102,95,107,101,114,110,101,108,95,102,114,111,109,61,50,59,10,99,111,110,115,116,32,102,108,111,97,116,32,100,111,102,95,107,101,114,110,101,108,91,53,93,32,61,32,102,108,111,97,116,91,93,32,40,48,46,49,53,51,51,56,56,44,48,46,50,50,49,52,54,49,44,48,46,50,53,48,51,48,49,44,48,46,50,50,49,52,54,49,44,48,46,49,53,51,51,56,56,41,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,68,79,70,95,81,85,65,76,73,84,89,95,77,69,68,73,85,77,10,99,111,110,115,116,32,105,110,116,32,100,111,102,95,107,101,114,110,101,108,95,115,105,122,101,61,49,49,59,10,99,111,110,115,116,32,105,110,116,32,100,111,102,95,107,101,114,110,101,108,95,102,114,111,109,61,53,59,10,99,111,110,115,116,32,102,108,111,97,116,32,100,111,102,95,107,101,114,110,101,108,91,49,49,93,32,61,32,102,108,111,97,116,91,93,32,40,48,46,48,53,53,48,51,55,44,48,46,48,55,50,56,48,54,44,48,46,48,57,48,53,48,54,44,48,46,49,48,53,55,50,54,44,48,46,49,49,54,48,54,49,44,48,46,49,49,57,55,50,54,44,48,46,49,49,54,48,54,49,44,48,46,49,48,53,55,50,54,44,48,46,48,57,48,53,48,54,44,48,46,48,55,50,56,48,54,44,48,46,48,53,53,48,51,55,41,59,10,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,68,79,70,95,81,85,65,76,73,84,89,95,72,73,71,72,10,99,111,110,115,116,32,105,110,116,32,100,111,102,95,107,101,114,110,101,108,95,115,105,122,101,61,50,49,59,10,99,111,110,115,116,32,105,110,116,32,100,111,102,95,107,101,114,110,101,108,95,102,114,111,109,61,49,48,59,10,99,111,110,115,116,32,102,108,111,97,116,32,100,111,102,95,107,101,114,110,101,108,91,50,49,93,32,61,32,102,108,111,97,116,91,93,32,40,48,46,48,50,56,49,55,52,44,48,46,48,51,50,54,55,54,44,48,46,48,51,55,51,49,49,44,48,46,48,52,49,57,52,52,44,48,46,48,52,54,52,50,49,44,48,46,48,53,48,53,56,50,44,48,46,48,53,52,50,54,49,44,48,46,48,53,55,51,48,55,44,48,46,48,53,57,53,56,55,44,48,46,48,54,48,57,57,56,44,48,46,48,54,49,52,55,54,44,48,46,48,54,48,57,57,56,44,48,46,48,53,57,53,56,55,44,48,46,48,53,55,51,48,55,44,48,46,48,53,52,50,54,49,44,48,46,48,53,48,53,56,50,44,48,46,48,52,54,52,50,49,44,48,46,48,52,49,57,52,52,44,48,46,48,51,55,51,49,49,44,48,46,48,51,50,54,55,54,44,48,46,48,50,56,49,55,52,41,59,10,35,101,110,100,105,102,10,10,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,50,68,32,100,111,102,95,115,111,117,114,99,101,95,100,101,112,116,104,59,32,47,47,116,101,120,117,110,105,116,58,49,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,100,111,102,95,98,101,103,105,110,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,100,111,102,95,101,110,100,59,10,117,110,105,102,111,114,109,32,118,101,99,50,32,100,111,102,95,100,105,114,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,100,111,102,95,114,97,100,105,117,115,59,10,10,35,105,102,100,101,102,32,68,79,70,95,78,69,65,82,95,66,76,85,82,95,77,69,82,71,69,10,10,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,50,68,32,115,111,117,114,99,101,95,100,111,102,95,111,114,105,103,105,110,97,108,59,32,47,47,116,101,120,117,110,105,116,58,50,10,35,101,110,100,105,102,10,10,35,101,110,100,105,102,10,10,10,35,105,102,100,101,102,32,71,76,79,87,95,70,73,82,83,84,95,80,65,83,83,10,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,101,120,112,111,115,117,114,101,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,119,104,105,116,101,59,10,10,35,105,102,100,101,102,32,71,76,79,87,95,85,83,69,95,65,85,84,79,95,69,88,80,79,83,85,82,69,10,10,117,110,105,102,111,114,109,32,104,105,103,104,112,32,115,97,109,112,108,101,114,50,68,32,115,111,117,114,99,101,95,97,117,116,111,95,101,120,112,111,115,117,114,101,59,32,47,47,116,101,120,117,110,105,116,58,49,10,117,110,105,102,111,114,109,32,104,105,103,104,112,32,102,108,111,97,116,32,97,117,116,111,95,101,120,112,111,115,117,114,101,95,103,114,101,121,59,10,10,35,101,110,100,105,102,10,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,103,108,111,119,95,98,108,111,111,109,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,103,108,111,119,95,104,100,114,95,116,104,114,101,115,104,111,108,100,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,103,108,111,119,95,104,100,114,95,115,99,97,108,101,59,10,10,35,101,110,100,105,102,10,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,99,97,109,101,114,97,95,122,95,102,97,114,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,99,97,109,101,114,97,95,122,95,110,101,97,114,59,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,10,10,10,35,105,102,100,101,102,32,71,65,85,83,83,73,65,78,95,72,79,82,73,90,79,78,84,65,76,10,9,118,101,99,50,32,112,105,120,95,115,105,122,101,32,61,32,112,105,120,101,108,95,115,105,122,101,59,10,9,112,105,120,95,115,105,122,101,42,61,48,46,53,59,32,47,47,114,101,97,100,105,110,103,32,102,114,111,109,32,108,97,114,103,101,114,32,98,117,102,102,101,114,44,32,115,111,32,117,115,101,32,109,111,114,101,32,115,97,109,112,108,101,115,10,9,118,101,99,52,32,99,111,108,111,114,32,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,32,48,46,48,44,32,48,46,48,41,42,112,105,120,95,115,105,122,101,44,108,111,100,32,41,42,48,46,50,49,52,54,48,55,59,10,9,99,111,108,111,114,43,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,32,49,46,48,44,32,48,46,48,41,42,112,105,120,95,115,105,122,101,44,108,111,100,32,41,42,48,46,49,56,57,56,55,57,59,10,9,99,111,108,111,114,43,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,32,50,46,48,44,32,48,46,48,41,42,112,105,120,95,115,105,122,101,44,108,111,100,32,41,42,48,46,49,53,55,51,48,53,59,10,9,99,111,108,111,114,43,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,32,51,46,48,44,32,48,46,48,41,42,112,105,120,95,115,105,122,101,44,108,111,100,32,41,42,48,46,48,55,49,51,48,51,59,10,9,99,111,108,111,114,43,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,45,49,46,48,44,32,48,46,48,41,42,112,105,120,95,115,105,122,101,44,108,111,100,32,41,42,48,46,49,56,57,56,55,57,59,10,9,99,111,108,111,114,43,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,45,50,46,48,44,32,48,46,48,41,42,112,105,120,95,115,105,122,101,44,108,111,100,32,41,42,48,46,49,53,55,51,48,53,59,10,9,99,111,108,111,114,43,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,45,51,46,48,44,32,48,46,48,41,42,112,105,120,95,115,105,122,101,44,108,111,100,32,41,42,48,46,48,55,49,51,48,51,59,10,9,102,114,97,103,95,99,111,108,111,114,32,61,32,99,111,108,111,114,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,71,65,85,83,83,73,65,78,95,86,69,82,84,73,67,65,76,10,9,118,101,99,52,32,99,111,108,111,114,32,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,32,48,46,48,44,32,48,46,48,41,42,112,105,120,101,108,95,115,105,122,101,44,108,111,100,32,41,42,48,46,51,56,55,55,52,59,10,9,99,111,108,111,114,43,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,32,48,46,48,44,32,49,46,48,41,42,112,105,120,101,108,95,115,105,122,101,44,108,111,100,32,41,42,48,46,50,52,52,55,55,59,10,9,99,111,108,111,114,43,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,32,48,46,48,44,32,50,46,48,41,42,112,105,120,101,108,95,115,105,122,101,44,108,111,100,32,41,42,48,46,48,54,49,51,54,59,10,9,99,111,108,111,114,43,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,32,48,46,48,44,45,49,46,48,41,42,112,105,120,101,108,95,115,105,122,101,44,108,111,100,32,41,42,48,46,50,52,52,55,55,59,10,9,99,111,108,111,114,43,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,32,48,46,48,44,45,50,46,48,41,42,112,105,120,101,108,95,115,105,122,101,44,108,111,100,32,41,42,48,46,48,54,49,51,54,59,10,9,102,114,97,103,95,99,111,108,111,114,32,61,32,99,111,108,111,114,59,10,35,101,110,100,105,102,10,10,47,47,103,108,111,119,32,117,115,101,115,32,108,97,114,103,101,114,32,115,105,103,109,97,32,102,111,114,32,97,32,109,111,114,101,32,114,111,117,110,100,101,100,32,98,108,117,114,32,101,102,102,101,99,116,10,10,35,105,102,100,101,102,32,71,76,79,87,95,71,65,85,83,83,73,65,78,95,72,79,82,73,90,79,78,84,65,76,10,9,118,101,99,50,32,112,105,120,95,115,105,122,101,32,61,32,112,105,120,101,108,95,115,105,122,101,59,10,9,112,105,120,95,115,105,122,101,42,61,48,46,53,59,32,47,47,114,101,97,100,105,110,103,32,102,114,111,109,32,108,97,114,103,101,114,32,98,117,102,102,101,114,44,32,115,111,32,117,115,101,32,109,111,114,101,32,115,97,109,112,108,101,115,10,9,118,101,99,52,32,99,111,108,111,114,32,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,32,48,46,48,44,32,48,46,48,41,42,112,105,120,95,115,105,122,101,44,108,111,100,32,41,42,48,46,49,55,52,57,51,56,59,10,9,99,111,108,111,114,43,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,32,49,46,48,44,32,48,46,48,41,42,112,105,120,95,115,105,122,101,44,108,111,100,32,41,42,48,46,49,54,53,53,54,57,59,10,9,99,111,108,111,114,43,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,32,50,46,48,44,32,48,46,48,41,42,112,105,120,95,115,105,122,101,44,108,111,100,32,41,42,48,46,49,52,48,51,54,55,59,10,9,99,111,108,111,114,43,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,32,51,46,48,44,32,48,46,48,41,42,112,105,120,95,115,105,122,101,44,108,111,100,32,41,42,48,46,49,48,54,53,57,53,59,10,9,99,111,108,111,114,43,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,45,49,46,48,44,32,48,46,48,41,42,112,105,120,95,115,105,122,101,44,108,111,100,32,41,42,48,46,49,54,53,53,54,57,59,10,9,99,111,108,111,114,43,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,45,50,46,48,44,32,48,46,48,41,42,112,105,120,95,115,105,122,101,44,108,111,100,32,41,42,48,46,49,52,48,51,54,55,59,10,9,99,111,108,111,114,43,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,45,51,46,48,44,32,48,46,48,41,42,112,105,120,95,115,105,122,101,44,108,111,100,32,41,42,48,46,49,48,54,53,57,53,59,10,9,99,111,108,111,114,42,61,103,108,111,119,95,115,116,114,101,110,103,116,104,59,10,9,102,114,97,103,95,99,111,108,111,114,32,61,32,99,111,108,111,114,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,71,76,79,87,95,71,65,85,83,83,73,65,78,95,86,69,82,84,73,67,65,76,10,9,118,101,99,52,32,99,111,108,111,114,32,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,48,46,48,44,32,48,46,48,41,42,112,105,120,101,108,95,115,105,122,101,44,108,111,100,32,41,42,48,46,50,56,56,55,49,51,59,10,9,99,111,108,111,114,43,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,48,46,48,44,32,49,46,48,41,42,112,105,120,101,108,95,115,105,122,101,44,108,111,100,32,41,42,48,46,50,51,51,48,54,50,59,10,9,99,111,108,111,114,43,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,48,46,48,44,32,50,46,48,41,42,112,105,120,101,108,95,115,105,122,101,44,108,111,100,32,41,42,48,46,49,50,50,53,56,49,59,10,9,99,111,108,111,114,43,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,48,46,48,44,45,49,46,48,41,42,112,105,120,101,108,95,115,105,122,101,44,108,111,100,32,41,42,48,46,50,51,51,48,54,50,59,10,9,99,111,108,111,114,43,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,43,118,101,99,50,40,48,46,48,44,45,50,46,48,41,42,112,105,120,101,108,95,115,105,122,101,44,108,111,100,32,41,42,48,46,49,50,50,53,56,49,59,10,9,99,111,108,111,114,42,61,103,108,111,119,95,115,116,114,101,110,103,116,104,59,10,9,102,114,97,103,95,99,111,108,111,114,32,61,32,99,111,108,111,114,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,68,79,70,95,70,65,82,95,66,76,85,82,10,10,9,118,101,99,52,32,99,111,108,111,114,95,97,99,99,117,109,32,61,32,118,101,99,52,40,48,46,48,41,59,10,10,9,102,108,111,97,116,32,100,101,112,116,104,32,61,32,116,101,120,116,117,114,101,76,111,100,40,32,100,111,102,95,115,111,117,114,99,101,95,100,101,112,116,104,44,32,117,118,95,105,110,116,101,114,112,44,32,48,46,48,41,46,114,59,10,9,100,101,112,116,104,32,61,32,100,101,112,116,104,32,42,32,50,46,48,32,45,32,49,46,48,59,10,35,105,102,100,101,102,32,85,83,69,95,79,82,84,72,79,71,79,78,65,76,95,80,82,79,74,69,67,84,73,79,78,10,9,100,101,112,116,104,32,61,32,40,40,100,101,112,116,104,32,43,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,43,32,99,97,109,101,114,97,95,122,95,110,101,97,114,41,47,40,99,97,109,101,114,97,95,122,95,102,97,114,32,45,32,99,97,109,101,114,97,95,122,95,110,101,97,114,41,41,32,42,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,45,32,99,97,109,101,114,97,95,122,95,110,101,97,114,41,41,47,50,46,48,59,10,35,101,108,115,101,10,9,100,101,112,116,104,32,61,32,50,46,48,32,42,32,99,97,109,101,114,97,95,122,95,110,101,97,114,32,42,32,99,97,109,101,114,97,95,122,95,102,97,114,32,47,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,43,32,99,97,109,101,114,97,95,122,95,110,101,97,114,32,45,32,100,101,112,116,104,32,42,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,45,32,99,97,109,101,114,97,95,122,95,110,101,97,114,41,41,59,10,35,101,110,100,105,102,10,10,9,102,108,111,97,116,32,97,109,111,117,110,116,32,61,32,115,109,111,111,116,104,115,116,101,112,40,100,111,102,95,98,101,103,105,110,44,100,111,102,95,101,110,100,44,100,101,112,116,104,41,59,10,9,102,108,111,97,116,32,107,95,97,99,99,117,109,61,48,46,48,59,10,10,9,102,111,114,40,105,110,116,32,105,61,48,59,105,60,100,111,102,95,107,101,114,110,101,108,95,115,105,122,101,59,105,43,43,41,32,123,10,10,9,9,105,110,116,32,105,110,116,95,111,102,115,32,61,32,105,45,100,111,102,95,107,101,114,110,101,108,95,102,114,111,109,59,10,9,9,118,101,99,50,32,116,97,112,95,117,118,32,61,32,117,118,95,105,110,116,101,114,112,32,43,32,100,111,102,95,100,105,114,32,42,32,102,108,111,97,116,40,105,110,116,95,111,102,115,41,32,42,32,97,109,111,117,110,116,32,42,32,100,111,102,95,114,97,100,105,117,115,59,10,10,9,9,102,108,111,97,116,32,116,97,112,95,107,32,61,32,100,111,102,95,107,101,114,110,101,108,91,105,93,59,10,10,9,9,102,108,111,97,116,32,116,97,112,95,100,101,112,116,104,32,61,32,116,101,120,116,117,114,101,40,32,100,111,102,95,115,111,117,114,99,101,95,100,101,112,116,104,44,32,116,97,112,95,117,118,44,32,48,46,48,41,46,114,59,10,9,9,116,97,112,95,100,101,112,116,104,32,61,32,116,97,112,95,100,101,112,116,104,32,42,32,50,46,48,32,45,32,49,46,48,59,10,35,105,102,100,101,102,32,85,83,69,95,79,82,84,72,79,71,79,78,65,76,95,80,82,79,74,69,67,84,73,79,78,10,9,9,116,97,112,95,100,101,112,116,104,32,61,32,40,40,116,97,112,95,100,101,112,116,104,32,43,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,43,32,99,97,109,101,114,97,95,122,95,110,101,97,114,41,47,40,99,97,109,101,114,97,95,122,95,102,97,114,32,45,32,99,97,109,101,114,97,95,122,95,110,101,97,114,41,41,32,42,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,45,32,99,97,109,101,114,97,95,122,95,110,101,97,114,41,41,47,50,46,48,59,10,35,101,108,115,101,10,9,9,116,97,112,95,100,101,112,116,104,32,61,32,50,46,48,32,42,32,99,97,109,101,114,97,95,122,95,110,101,97,114,32,42,32,99,97,109,101,114,97,95,122,95,102,97,114,32,47,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,43,32,99,97,109,101,114,97,95,122,95,110,101,97,114,32,45,32,116,97,112,95,100,101,112,116,104,32,42,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,45,32,99,97,109,101,114,97,95,122,95,110,101,97,114,41,41,59,10,35,101,110,100,105,102,10,9,9,102,108,111,97,116,32,116,97,112,95,97,109,111,117,110,116,32,61,32,109,105,120,40,115,109,111,111,116,104,115,116,101,112,40,100,111,102,95,98,101,103,105,110,44,100,111,102,95,101,110,100,44,116,97,112,95,100,101,112,116,104,41,44,49,46,48,44,105,110,116,95,111,102,115,61,61,48,41,59,10,9,9,116,97,112,95,97,109,111,117,110,116,42,61,116,97,112,95,97,109,111,117,110,116,42,116,97,112,95,97,109,111,117,110,116,59,32,47,47,112,114,101,118,101,110,116,32,117,110,100,101,115,105,114,101,100,32,103,108,111,119,32,101,102,102,101,99,116,10,10,9,9,118,101,99,52,32,116,97,112,95,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,116,97,112,95,117,118,44,32,48,46,48,41,32,42,32,116,97,112,95,107,59,10,10,9,9,107,95,97,99,99,117,109,43,61,116,97,112,95,107,42,116,97,112,95,97,109,111,117,110,116,59,10,9,9,99,111,108,111,114,95,97,99,99,117,109,43,61,116,97,112,95,99,111,108,111,114,42,116,97,112,95,97,109,111,117,110,116,59,10,10,10,9,125,10,10,9,105,102,32,40,107,95,97,99,99,117,109,62,48,46,48,41,32,123,10,9,9,99,111,108,111,114,95,97,99,99,117,109,47,61,107,95,97,99,99,117,109,59,10,9,125,10,10,9,102,114,97,103,95,99,111,108,111,114,32,61,32,99,111,108,111,114,95,97,99,99,117,109,59,47,47,47,107,95,97,99,99,117,109,59,10,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,68,79,70,95,78,69,65,82,95,66,76,85,82,10,10,9,118,101,99,52,32,99,111,108,111,114,95,97,99,99,117,109,32,61,32,118,101,99,52,40,48,46,48,41,59,10,10,9,102,108,111,97,116,32,109,97,120,95,97,99,99,117,109,61,48,59,10,10,9,102,111,114,40,105,110,116,32,105,61,48,59,105,60,100,111,102,95,107,101,114,110,101,108,95,115,105,122,101,59,105,43,43,41,32,123,10,10,9,9,105,110,116,32,105,110,116,95,111,102,115,32,61,32,105,45,100,111,102,95,107,101,114,110,101,108,95,102,114,111,109,59,10,9,9,118,101,99,50,32,116,97,112,95,117,118,32,61,32,117,118,95,105,110,116,101,114,112,32,43,32,100,111,102,95,100,105,114,32,42,32,102,108,111,97,116,40,105,110,116,95,111,102,115,41,32,42,32,100,111,102,95,114,97,100,105,117,115,59,10,9,9,102,108,111,97,116,32,111,102,115,95,105,110,102,108,117,101,110,99,101,32,61,32,109,97,120,40,48,46,48,44,49,46,48,45,102,108,111,97,116,40,97,98,115,40,105,110,116,95,111,102,115,41,41,47,102,108,111,97,116,40,100,111,102,95,107,101,114,110,101,108,95,102,114,111,109,41,41,59,10,10,9,9,102,108,111,97,116,32,116,97,112,95,107,32,61,32,100,111,102,95,107,101,114,110,101,108,91,105,93,59,10,10,9,9,118,101,99,52,32,116,97,112,95,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,116,97,112,95,117,118,44,32,48,46,48,41,59,10,10,9,9,102,108,111,97,116,32,116,97,112,95,100,101,112,116,104,32,61,32,116,101,120,116,117,114,101,40,32,100,111,102,95,115,111,117,114,99,101,95,100,101,112,116,104,44,32,116,97,112,95,117,118,44,32,48,46,48,41,46,114,59,10,9,9,116,97,112,95,100,101,112,116,104,32,61,32,116,97,112,95,100,101,112,116,104,32,42,32,50,46,48,32,45,32,49,46,48,59,10,35,105,102,100,101,102,32,85,83,69,95,79,82,84,72,79,71,79,78,65,76,95,80,82,79,74,69,67,84,73,79,78,9,10,9,9,116,97,112,95,100,101,112,116,104,32,61,32,40,40,116,97,112,95,100,101,112,116,104,32,43,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,43,32,99,97,109,101,114,97,95,122,95,110,101,97,114,41,47,40,99,97,109,101,114,97,95,122,95,102,97,114,32,45,32,99,97,109,101,114,97,95,122,95,110,101,97,114,41,41,32,42,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,45,32,99,97,109,101,114,97,95,122,95,110,101,97,114,41,41,47,50,46,48,59,10,35,101,108,115,101,10,9,9,116,97,112,95,100,101,112,116,104,32,61,32,50,46,48,32,42,32,99,97,109,101,114,97,95,122,95,110,101,97,114,32,42,32,99,97,109,101,114,97,95,122,95,102,97,114,32,47,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,43,32,99,97,109,101,114,97,95,122,95,110,101,97,114,32,45,32,116,97,112,95,100,101,112,116,104,32,42,32,40,99,97,109,101,114,97,95,122,95,102,97,114,32,45,32,99,97,109,101,114,97,95,122,95,110,101,97,114,41,41,59,10,35,101,110,100,105,102,10,9,9,102,108,111,97,116,32,116,97,112,95,97,109,111,117,110,116,32,61,32,49,46,48,45,115,109,111,111,116,104,115,116,101,112,40,100,111,102,95,101,110,100,44,100,111,102,95,98,101,103,105,110,44,116,97,112,95,100,101,112,116,104,41,59,10,9,9,116,97,112,95,97,109,111,117,110,116,42,61,116,97,112,95,97,109,111,117,110,116,42,116,97,112,95,97,109,111,117,110,116,59,32,47,47,112,114,101,118,101,110,116,32,117,110,100,101,115,105,114,101,100,32,103,108,111,119,32,101,102,102,101,99,116,10,10,35,105,102,100,101,102,32,68,79,70,95,78,69,65,82,95,70,73,82,83,84,95,84,65,80,10,10,9,9,116,97,112,95,99,111,108,111,114,46,97,61,32,49,46,48,45,115,109,111,111,116,104,115,116,101,112,40,100,111,102,95,101,110,100,44,100,111,102,95,98,101,103,105,110,44,116,97,112,95,100,101,112,116,104,41,59,10,10,35,101,110,100,105,102,10,10,9,9,109,97,120,95,97,99,99,117,109,61,109,97,120,40,109,97,120,95,97,99,99,117,109,44,116,97,112,95,97,109,111,117,110,116,42,111,102,115,95,105,110,102,108,117,101,110,99,101,41,59,10,10,9,9,99,111,108,111,114,95,97,99,99,117,109,43,61,116,97,112,95,99,111,108,111,114,42,116,97,112,95,107,59,10,10,9,125,10,10,9,99,111,108,111,114,95,97,99,99,117,109,46,97,61,109,97,120,40,99,111,108,111,114,95,97,99,99,117,109,46,97,44,115,113,114,116,40,109,97,120,95,97,99,99,117,109,41,41,59,10,10,10,35,105,102,100,101,102,32,68,79,70,95,78,69,65,82,95,66,76,85,82,95,77,69,82,71,69,10,10,9,118,101,99,52,32,111,114,105,103,105,110,97,108,32,61,32,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,100,111,102,95,111,114,105,103,105,110,97,108,44,32,117,118,95,105,110,116,101,114,112,44,32,48,46,48,41,59,10,9,99,111,108,111,114,95,97,99,99,117,109,32,61,32,109,105,120,40,111,114,105,103,105,110,97,108,44,99,111,108,111,114,95,97,99,99,117,109,44,99,111,108,111,114,95,97,99,99,117,109,46,97,41,59,10,10,35,101,110,100,105,102,10,10,35,105,102,110,100,101,102,32,68,79,70,95,78,69,65,82,95,70,73,82,83,84,95,84,65,80,10,9,47,47,99,111,108,111,114,95,97,99,99,117,109,61,118,101,99,52,40,118,101,99,51,40,99,111,108,111,114,95,97,99,99,117,109,46,97,41,44,49,46,48,41,59,10,35,101,110,100,105,102,10,9,102,114,97,103,95,99,111,108,111,114,32,61,32,99,111,108,111,114,95,97,99,99,117,109,59,10,10,35,101,110,100,105,102,10,10,10,10,35,105,102,100,101,102,32,71,76,79,87,95,70,73,82,83,84,95,80,65,83,83,10,10,35,105,102,100,101,102,32,71,76,79,87,95,85,83,69,95,65,85,84,79,95,69,88,80,79,83,85,82,69,10,10,9,102,114,97,103,95,99,111,108,111,114,47,61,116,101,120,101,108,70,101,116,99,104,40,115,111,117,114,99,101,95,97,117,116,111,95,101,120,112,111,115,117,114,101,44,105,118,101,99,50,40,48,44,48,41,44,48,41,46,114,47,97,117,116,111,95,101,120,112,111,115,117,114,101,95,103,114,101,121,59,10,35,101,110,100,105,102,10,9,102,114,97,103,95,99,111,108,111,114,42,61,101,120,112,111,115,117,114,101,59,10,10,9,102,108,111,97,116,32,108,117,109,105,110,97,110,99,101,32,61,32,109,97,120,40,102,114,97,103,95,99,111,108,111,114,46,114,44,109,97,120,40,102,114,97,103,95,99,111,108,111,114,46,103,44,102,114,97,103,95,99,111,108,111,114,46,98,41,41,59,10,9,102,108,111,97,116,32,102,101,101,100,98,97,99,107,32,61,32,109,97,120,40,32,115,109,111,111,116,104,115,116,101,112,40,103,108,111,119,95,104,100,114,95,116,104,114,101,115,104,111,108,100,44,103,108,111,119,95,104,100,114,95,116,104,114,101,115,104,111,108,100,43,103,108,111,119,95,104,100,114,95,115,99,97,108,101,44,108,117,109,105,110,97,110,99,101,41,44,32,103,108,111,119,95,98,108,111,111,109,32,41,59,10,10,9,102,114,97,103,95,99,111,108,111,114,32,42,61,32,102,101,101,100,98,97,99,107,59,10,10,35,101,110,100,105,102,10,10,10,35,105,102,100,101,102,32,83,73,77,80,76,69,95,67,79,80,89,10,9,118,101,99,52,32,99,111,108,111,114,32,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,44,48,46,48,41,59,10,9,102,114,97,103,95,99,111,108,111,114,32,61,32,99,111,108,111,114,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,83,83,65,79,95,77,69,82,71,69,10,10,9,118,101,99,52,32,99,111,108,111,114,32,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,99,111,108,111,114,44,32,32,117,118,95,105,110,116,101,114,112,44,48,46,48,41,59,10,9,102,108,111,97,116,32,115,115,97,111,32,61,116,101,120,116,117,114,101,76,111,100,40,32,115,111,117,114,99,101,95,115,115,97,111,44,32,32,117,118,95,105,110,116,101,114,112,44,48,46,48,41,46,114,59,10,10,9,102,114,97,103,95,99,111,108,111,114,32,61,32,118,101,99,52,40,32,109,105,120,40,99,111,108,111,114,46,114,103,98,44,99,111,108,111,114,46,114,103,98,42,109,105,120,40,115,115,97,111,95,99,111,108,111,114,46,114,103,98,44,118,101,99,51,40,49,46,48,41,44,115,115,97,111,41,44,99,111,108,111,114,46,97,41,44,32,49,46,48,32,41,59,10,10,35,101,110,100,105,102,10,10,10,125,10,		0};

		static const int _fragment_code_start=26;
		setup(_conditional_strings,17,_uniform_strings,17,_attribute_pairs,0, _texunit_pairs,5,_ubo_pairs,0,_feedbacks,0,_vertex_code,_fragment_code,_vertex_code_start,_fragment_code_start);
	};

};

#endif

