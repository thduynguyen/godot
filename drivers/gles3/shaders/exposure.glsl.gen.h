/* WARNING, THIS FILE WAS GENERATED, DO NOT EDIT */
#ifndef EXPOSURE_GLSL_GEN_HGLES3_120
#define EXPOSURE_GLSL_GEN_HGLES3_120


#include "drivers/gles3/shader_gles3.h"


class ExposureShaderGLES3 : public ShaderGLES3 {

	 virtual String get_shader_name() const { return "ExposureShaderGLES3"; }
public:

	enum Conditionals {
		EXPOSURE_BEGIN,
		EXPOSURE_END,
		EXPOSURE_FORCE_SET,
	};

	enum Uniforms {
		SOURCE_RENDER_SIZE,
		TARGET_SIZE,
		EXPOSURE_ADJUST,
		MIN_LUMINANCE,
		MAX_LUMINANCE,
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
			"#define EXPOSURE_BEGIN\n",
			"#define EXPOSURE_END\n",
			"#define EXPOSURE_FORCE_SET\n",
		};

		static const char* _uniform_strings[]={
			"source_render_size",
			"target_size",
			"exposure_adjust",
			"min_luminance",
			"max_luminance",
		};

		static AttributePair *_attribute_pairs=NULL;
		static const Feedback* _feedbacks=NULL;
		static TexUnitPair _texunit_pairs[]={
			{"source_exposure",0},
			{"prev_exposure",1},
		};

		static UBOPair *_ubo_pairs=NULL;
		static const char _vertex_code[]={
10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,61,48,41,32,105,110,32,104,105,103,104,112,32,118,101,99,52,32,118,101,114,116,101,120,95,97,116,116,114,105,98,59,10,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,10,9,103,108,95,80,111,115,105,116,105,111,110,32,61,32,118,101,114,116,101,120,95,97,116,116,114,105,98,59,10,10,125,10,10,		0};

		static const int _vertex_code_start=1;
		static const char _fragment_code[]={
10,10,117,110,105,102,111,114,109,32,104,105,103,104,112,32,115,97,109,112,108,101,114,50,68,32,115,111,117,114,99,101,95,101,120,112,111,115,117,114,101,59,32,47,47,116,101,120,117,110,105,116,58,48,10,10,35,105,102,100,101,102,32,69,88,80,79,83,85,82,69,95,66,69,71,73,78,10,10,117,110,105,102,111,114,109,32,104,105,103,104,112,32,105,118,101,99,50,32,115,111,117,114,99,101,95,114,101,110,100,101,114,95,115,105,122,101,59,10,117,110,105,102,111,114,109,32,104,105,103,104,112,32,105,118,101,99,50,32,116,97,114,103,101,116,95,115,105,122,101,59,10,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,69,88,80,79,83,85,82,69,95,69,78,68,10,10,117,110,105,102,111,114,109,32,104,105,103,104,112,32,115,97,109,112,108,101,114,50,68,32,112,114,101,118,95,101,120,112,111,115,117,114,101,59,32,47,47,116,101,120,117,110,105,116,58,49,10,117,110,105,102,111,114,109,32,104,105,103,104,112,32,102,108,111,97,116,32,101,120,112,111,115,117,114,101,95,97,100,106,117,115,116,59,10,117,110,105,102,111,114,109,32,104,105,103,104,112,32,102,108,111,97,116,32,109,105,110,95,108,117,109,105,110,97,110,99,101,59,10,117,110,105,102,111,114,109,32,104,105,103,104,112,32,102,108,111,97,116,32,109,97,120,95,108,117,109,105,110,97,110,99,101,59,10,10,35,101,110,100,105,102,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,111,117,116,32,104,105,103,104,112,32,102,108,111,97,116,32,101,120,112,111,115,117,114,101,59,10,10,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,10,10,10,35,105,102,100,101,102,32,69,88,80,79,83,85,82,69,95,66,69,71,73,78,10,10,10,9,105,118,101,99,50,32,115,114,99,95,112,111,115,32,61,32,105,118,101,99,50,40,103,108,95,70,114,97,103,67,111,111,114,100,46,120,121,41,42,115,111,117,114,99,101,95,114,101,110,100,101,114,95,115,105,122,101,47,116,97,114,103,101,116,95,115,105,122,101,59,10,10,35,105,102,32,49,10,9,47,47,109,111,114,101,32,112,114,101,99,105,115,101,32,97,110,100,32,101,120,112,101,110,115,105,118,101,44,32,98,117,116,32,108,101,115,115,32,106,105,116,116,101,114,121,10,9,105,118,101,99,50,32,110,101,120,116,95,112,111,115,32,61,32,105,118,101,99,50,40,103,108,95,70,114,97,103,67,111,111,114,100,46,120,121,43,105,118,101,99,50,40,49,41,41,42,115,111,117,114,99,101,95,114,101,110,100,101,114,95,115,105,122,101,47,116,97,114,103,101,116,95,115,105,122,101,59,10,9,110,101,120,116,95,112,111,115,32,61,32,109,97,120,40,110,101,120,116,95,112,111,115,44,115,114,99,95,112,111,115,43,105,118,101,99,50,40,49,41,41,59,32,47,47,115,111,32,105,116,32,97,116,32,108,101,97,115,116,32,114,101,97,100,115,32,111,110,101,32,112,105,120,101,108,10,9,104,105,103,104,112,32,118,101,99,51,32,115,111,117,114,99,101,95,99,111,108,111,114,61,118,101,99,51,40,48,46,48,41,59,10,9,102,111,114,40,105,110,116,32,105,61,115,114,99,95,112,111,115,46,120,59,105,60,110,101,120,116,95,112,111,115,46,120,59,105,43,43,41,32,123,10,9,9,102,111,114,40,105,110,116,32,106,61,115,114,99,95,112,111,115,46,121,59,106,60,110,101,120,116,95,112,111,115,46,121,59,106,43,43,41,32,123,10,9,9,9,115,111,117,114,99,101,95,99,111,108,111,114,32,43,61,32,116,101,120,101,108,70,101,116,99,104,40,115,111,117,114,99,101,95,101,120,112,111,115,117,114,101,44,105,118,101,99,50,40,105,44,106,41,44,48,41,46,114,103,98,59,10,9,9,125,10,9,125,10,10,9,115,111,117,114,99,101,95,99,111,108,111,114,47,61,102,108,111,97,116,40,32,40,110,101,120,116,95,112,111,115,46,120,45,115,114,99,95,112,111,115,46,120,41,42,40,110,101,120,116,95,112,111,115,46,121,45,115,114,99,95,112,111,115,46,121,41,32,41,59,10,35,101,108,115,101,10,9,104,105,103,104,112,32,118,101,99,51,32,115,111,117,114,99,101,95,99,111,108,111,114,32,61,32,116,101,120,101,108,70,101,116,99,104,40,115,111,117,114,99,101,95,101,120,112,111,115,117,114,101,44,115,114,99,95,112,111,115,44,48,41,46,114,103,98,59,10,10,35,101,110,100,105,102,10,10,9,101,120,112,111,115,117,114,101,32,61,32,109,97,120,40,115,111,117,114,99,101,95,99,111,108,111,114,46,114,44,109,97,120,40,115,111,117,114,99,101,95,99,111,108,111,114,46,103,44,115,111,117,114,99,101,95,99,111,108,111,114,46,98,41,41,59,10,10,35,101,108,115,101,10,10,9,105,118,101,99,50,32,99,111,111,114,100,32,61,32,105,118,101,99,50,40,103,108,95,70,114,97,103,67,111,111,114,100,46,120,121,41,59,10,9,101,120,112,111,115,117,114,101,32,32,61,32,116,101,120,101,108,70,101,116,99,104,40,115,111,117,114,99,101,95,101,120,112,111,115,117,114,101,44,99,111,111,114,100,42,51,43,105,118,101,99,50,40,48,44,48,41,44,48,41,46,114,59,10,9,101,120,112,111,115,117,114,101,32,43,61,32,116,101,120,101,108,70,101,116,99,104,40,115,111,117,114,99,101,95,101,120,112,111,115,117,114,101,44,99,111,111,114,100,42,51,43,105,118,101,99,50,40,49,44,48,41,44,48,41,46,114,59,10,9,101,120,112,111,115,117,114,101,32,43,61,32,116,101,120,101,108,70,101,116,99,104,40,115,111,117,114,99,101,95,101,120,112,111,115,117,114,101,44,99,111,111,114,100,42,51,43,105,118,101,99,50,40,50,44,48,41,44,48,41,46,114,59,10,9,101,120,112,111,115,117,114,101,32,43,61,32,116,101,120,101,108,70,101,116,99,104,40,115,111,117,114,99,101,95,101,120,112,111,115,117,114,101,44,99,111,111,114,100,42,51,43,105,118,101,99,50,40,48,44,49,41,44,48,41,46,114,59,10,9,101,120,112,111,115,117,114,101,32,43,61,32,116,101,120,101,108,70,101,116,99,104,40,115,111,117,114,99,101,95,101,120,112,111,115,117,114,101,44,99,111,111,114,100,42,51,43,105,118,101,99,50,40,49,44,49,41,44,48,41,46,114,59,10,9,101,120,112,111,115,117,114,101,32,43,61,32,116,101,120,101,108,70,101,116,99,104,40,115,111,117,114,99,101,95,101,120,112,111,115,117,114,101,44,99,111,111,114,100,42,51,43,105,118,101,99,50,40,50,44,49,41,44,48,41,46,114,59,10,9,101,120,112,111,115,117,114,101,32,43,61,32,116,101,120,101,108,70,101,116,99,104,40,115,111,117,114,99,101,95,101,120,112,111,115,117,114,101,44,99,111,111,114,100,42,51,43,105,118,101,99,50,40,48,44,50,41,44,48,41,46,114,59,10,9,101,120,112,111,115,117,114,101,32,43,61,32,116,101,120,101,108,70,101,116,99,104,40,115,111,117,114,99,101,95,101,120,112,111,115,117,114,101,44,99,111,111,114,100,42,51,43,105,118,101,99,50,40,49,44,50,41,44,48,41,46,114,59,10,9,101,120,112,111,115,117,114,101,32,43,61,32,116,101,120,101,108,70,101,116,99,104,40,115,111,117,114,99,101,95,101,120,112,111,115,117,114,101,44,99,111,111,114,100,42,51,43,105,118,101,99,50,40,50,44,50,41,44,48,41,46,114,59,10,9,101,120,112,111,115,117,114,101,32,42,61,32,40,49,46,48,47,57,46,48,41,59,10,10,35,105,102,100,101,102,32,69,88,80,79,83,85,82,69,95,69,78,68,10,10,35,105,102,100,101,102,32,69,88,80,79,83,85,82,69,95,70,79,82,67,69,95,83,69,84,10,9,47,47,119,105,108,108,32,115,116,97,121,32,97,115,32,105,115,10,35,101,108,115,101,10,9,104,105,103,104,112,32,102,108,111,97,116,32,112,114,101,118,95,108,117,109,32,61,32,116,101,120,101,108,70,101,116,99,104,40,112,114,101,118,95,101,120,112,111,115,117,114,101,44,105,118,101,99,50,40,48,44,48,41,44,48,41,46,114,59,32,47,47,49,32,112,105,120,101,108,32,112,114,101,118,105,111,117,115,32,101,120,112,111,115,117,114,101,10,9,101,120,112,111,115,117,114,101,32,61,32,99,108,97,109,112,40,32,112,114,101,118,95,108,117,109,32,43,32,40,101,120,112,111,115,117,114,101,45,112,114,101,118,95,108,117,109,41,42,101,120,112,111,115,117,114,101,95,97,100,106,117,115,116,44,109,105,110,95,108,117,109,105,110,97,110,99,101,44,109,97,120,95,108,117,109,105,110,97,110,99,101,41,59,10,10,35,101,110,100,105,102,32,47,47,69,88,80,79,83,85,82,69,95,70,79,82,67,69,95,83,69,84,10,10,10,35,101,110,100,105,102,32,47,47,69,88,80,79,83,85,82,69,95,69,78,68,10,10,35,101,110,100,105,102,32,47,47,69,88,80,79,83,85,82,69,95,66,69,71,73,78,10,10,10,125,10,10,10,		0};

		static const int _fragment_code_start=13;
		setup(_conditional_strings,3,_uniform_strings,5,_attribute_pairs,0, _texunit_pairs,2,_ubo_pairs,0,_feedbacks,0,_vertex_code,_fragment_code,_vertex_code_start,_fragment_code_start);
	};

};

#endif

