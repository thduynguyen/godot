/* WARNING, THIS FILE WAS GENERATED, DO NOT EDIT */
#ifndef PARTICLES_GLSL_GEN_HGLES3_120
#define PARTICLES_GLSL_GEN_HGLES3_120


#include "drivers/gles3/shader_gles3.h"


class ParticlesShaderGLES3 : public ShaderGLES3 {

	 virtual String get_shader_name() const { return "ParticlesShaderGLES3"; }
public:

	enum Conditionals {
		PARTICLES_COPY,
		USE_FRACTIONAL_DELTA,
	};

	enum Uniforms {
		EMITTING,
		SYSTEM_PHASE,
		PREV_SYSTEM_PHASE,
		TOTAL_PARTICLES,
		EXPLOSIVENESS,
		RANDOMNESS,
		TIME,
		DELTA,
		ATTRACTOR_COUNT,
		ATTRACTORS,
		CLEAR,
		CYCLE,
		LIFETIME,
		EMISSION_TRANSFORM,
		RANDOM_SEED,
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
			"#define PARTICLES_COPY\n",
			"#define USE_FRACTIONAL_DELTA\n",
		};

		static const char* _uniform_strings[]={
			"emitting",
			"system_phase",
			"prev_system_phase",
			"total_particles",
			"explosiveness",
			"randomness",
			"time",
			"delta",
			"attractor_count",
			"attractors",
			"clear",
			"cycle",
			"lifetime",
			"emission_transform",
			"random_seed",
		};

		static AttributePair *_attribute_pairs=NULL;
		static const Feedback _feedbacks[]={
			{"out_color",-1},
			{"out_velocity_active",-1},
			{"out_custom",-1},
			{"out_xform_1",-1},
			{"out_xform_2",-1},
			{"out_xform_3",-1},
		};

		static TexUnitPair *_texunit_pairs=NULL;
		static UBOPair _ubo_pairs[]={
			{"UniformData",0},
		};

		static const char _vertex_code[]={
10,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,61,48,41,32,105,110,32,104,105,103,104,112,32,118,101,99,52,32,99,111,108,111,114,59,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,61,49,41,32,105,110,32,104,105,103,104,112,32,118,101,99,52,32,118,101,108,111,99,105,116,121,95,97,99,116,105,118,101,59,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,61,50,41,32,105,110,32,104,105,103,104,112,32,118,101,99,52,32,99,117,115,116,111,109,59,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,61,51,41,32,105,110,32,104,105,103,104,112,32,118,101,99,52,32,120,102,111,114,109,95,49,59,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,61,52,41,32,105,110,32,104,105,103,104,112,32,118,101,99,52,32,120,102,111,114,109,95,50,59,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,61,53,41,32,105,110,32,104,105,103,104,112,32,118,101,99,52,32,120,102,111,114,109,95,51,59,10,10,10,115,116,114,117,99,116,32,65,116,116,114,97,99,116,111,114,32,123,10,10,9,118,101,99,51,32,112,111,115,59,10,9,118,101,99,51,32,100,105,114,59,10,9,102,108,111,97,116,32,114,97,100,105,117,115,59,10,9,102,108,111,97,116,32,101,97,116,95,114,97,100,105,117,115,59,10,9,102,108,111,97,116,32,115,116,114,101,110,103,116,104,59,10,9,102,108,111,97,116,32,97,116,116,101,110,117,97,116,105,111,110,59,10,125,59,10,10,35,100,101,102,105,110,101,32,77,65,88,95,65,84,84,82,65,67,84,79,82,83,32,54,52,10,10,117,110,105,102,111,114,109,32,98,111,111,108,32,101,109,105,116,116,105,110,103,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,115,121,115,116,101,109,95,112,104,97,115,101,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,112,114,101,118,95,115,121,115,116,101,109,95,112,104,97,115,101,59,10,117,110,105,102,111,114,109,32,105,110,116,32,116,111,116,97,108,95,112,97,114,116,105,99,108,101,115,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,101,120,112,108,111,115,105,118,101,110,101,115,115,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,114,97,110,100,111,109,110,101,115,115,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,116,105,109,101,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,100,101,108,116,97,59,10,10,117,110,105,102,111,114,109,32,105,110,116,32,97,116,116,114,97,99,116,111,114,95,99,111,117,110,116,59,10,117,110,105,102,111,114,109,32,65,116,116,114,97,99,116,111,114,32,97,116,116,114,97,99,116,111,114,115,91,77,65,88,95,65,84,84,82,65,67,84,79,82,83,93,59,10,117,110,105,102,111,114,109,32,98,111,111,108,32,99,108,101,97,114,59,10,117,110,105,102,111,114,109,32,117,105,110,116,32,99,121,99,108,101,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,108,105,102,101,116,105,109,101,59,10,117,110,105,102,111,114,109,32,109,97,116,52,32,101,109,105,115,115,105,111,110,95,116,114,97,110,115,102,111,114,109,59,10,117,110,105,102,111,114,109,32,117,105,110,116,32,114,97,110,100,111,109,95,115,101,101,100,59,10,10,10,111,117,116,32,104,105,103,104,112,32,118,101,99,52,32,111,117,116,95,99,111,108,111,114,59,32,47,47,116,102,98,58,10,111,117,116,32,104,105,103,104,112,32,118,101,99,52,32,111,117,116,95,118,101,108,111,99,105,116,121,95,97,99,116,105,118,101,59,32,47,47,116,102,98,58,10,111,117,116,32,104,105,103,104,112,32,118,101,99,52,32,111,117,116,95,99,117,115,116,111,109,59,32,47,47,116,102,98,58,10,111,117,116,32,104,105,103,104,112,32,118,101,99,52,32,111,117,116,95,120,102,111,114,109,95,49,59,32,47,47,116,102,98,58,10,111,117,116,32,104,105,103,104,112,32,118,101,99,52,32,111,117,116,95,120,102,111,114,109,95,50,59,32,47,47,116,102,98,58,10,111,117,116,32,104,105,103,104,112,32,118,101,99,52,32,111,117,116,95,120,102,111,114,109,95,51,59,32,47,47,116,102,98,58,10,10,10,35,105,102,32,100,101,102,105,110,101,100,40,85,83,69,95,77,65,84,69,82,73,65,76,41,10,10,108,97,121,111,117,116,40,115,116,100,49,52,48,41,32,117,110,105,102,111,114,109,32,85,110,105,102,111,114,109,68,97,116,97,32,123,32,47,47,117,98,111,58,48,10,10,77,65,84,69,82,73,65,76,95,85,78,73,70,79,82,77,83,10,10,125,59,10,10,35,101,110,100,105,102,10,10,10,86,69,82,84,69,88,95,83,72,65,68,69,82,95,71,76,79,66,65,76,83,10,10,117,105,110,116,32,104,97,115,104,40,117,105,110,116,32,120,41,32,123,10,10,9,120,32,61,32,40,40,120,32,62,62,32,117,105,110,116,40,49,54,41,41,32,94,32,120,41,32,42,32,117,105,110,116,40,48,120,52,53,100,57,102,51,98,41,59,10,9,120,32,61,32,40,40,120,32,62,62,32,117,105,110,116,40,49,54,41,41,32,94,32,120,41,32,42,32,117,105,110,116,40,48,120,52,53,100,57,102,51,98,41,59,10,9,120,32,61,32,40,120,32,62,62,32,117,105,110,116,40,49,54,41,41,32,94,32,120,59,10,9,114,101,116,117,114,110,32,120,59,10,125,10,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,10,35,105,102,100,101,102,32,80,65,82,84,73,67,76,69,83,95,67,79,80,89,10,10,9,111,117,116,95,99,111,108,111,114,61,99,111,108,111,114,59,10,9,111,117,116,95,118,101,108,111,99,105,116,121,95,97,99,116,105,118,101,61,118,101,108,111,99,105,116,121,95,97,99,116,105,118,101,59,10,9,111,117,116,95,99,117,115,116,111,109,32,61,32,99,117,115,116,111,109,59,10,9,111,117,116,95,120,102,111,114,109,95,49,32,61,32,120,102,111,114,109,95,49,59,10,9,111,117,116,95,120,102,111,114,109,95,50,32,61,32,120,102,111,114,109,95,50,59,10,9,111,117,116,95,120,102,111,114,109,95,51,32,61,32,120,102,111,114,109,95,51,59,10,10,35,101,108,115,101,10,10,9,98,111,111,108,32,97,112,112,108,121,95,102,111,114,99,101,115,61,116,114,117,101,59,10,9,98,111,111,108,32,97,112,112,108,121,95,118,101,108,111,99,105,116,121,61,116,114,117,101,59,10,9,102,108,111,97,116,32,108,111,99,97,108,95,100,101,108,116,97,61,100,101,108,116,97,59,10,10,9,102,108,111,97,116,32,109,97,115,115,32,61,32,49,46,48,59,10,10,9,102,108,111,97,116,32,114,101,115,116,97,114,116,95,112,104,97,115,101,32,61,32,102,108,111,97,116,40,103,108,95,86,101,114,116,101,120,73,68,41,47,102,108,111,97,116,40,116,111,116,97,108,95,112,97,114,116,105,99,108,101,115,41,59,10,10,9,105,102,32,40,114,97,110,100,111,109,110,101,115,115,62,48,46,48,41,32,123,10,9,9,117,105,110,116,32,115,101,101,100,32,61,32,99,121,99,108,101,59,10,9,9,105,102,32,40,114,101,115,116,97,114,116,95,112,104,97,115,101,32,62,61,32,115,121,115,116,101,109,95,112,104,97,115,101,41,32,123,10,9,9,9,115,101,101,100,45,61,117,105,110,116,40,49,41,59,10,9,9,125,10,9,9,115,101,101,100,42,61,117,105,110,116,40,116,111,116,97,108,95,112,97,114,116,105,99,108,101,115,41,59,10,9,9,115,101,101,100,43,61,117,105,110,116,40,103,108,95,86,101,114,116,101,120,73,68,41,59,10,9,9,102,108,111,97,116,32,114,97,110,100,111,109,32,61,32,102,108,111,97,116,40,104,97,115,104,40,115,101,101,100,41,32,37,32,117,105,110,116,40,54,53,53,51,54,41,41,32,47,32,54,53,53,51,54,46,48,59,10,9,9,114,101,115,116,97,114,116,95,112,104,97,115,101,43,61,114,97,110,100,111,109,110,101,115,115,32,42,32,114,97,110,100,111,109,32,42,32,49,46,48,32,47,32,102,108,111,97,116,40,116,111,116,97,108,95,112,97,114,116,105,99,108,101,115,41,59,10,9,125,10,10,9,114,101,115,116,97,114,116,95,112,104,97,115,101,42,61,32,40,49,46,48,45,101,120,112,108,111,115,105,118,101,110,101,115,115,41,59,10,9,98,111,111,108,32,114,101,115,116,97,114,116,61,102,97,108,115,101,59,10,9,98,111,111,108,32,115,104,97,100,101,114,95,97,99,116,105,118,101,32,61,32,118,101,108,111,99,105,116,121,95,97,99,116,105,118,101,46,97,32,62,32,48,46,53,59,10,10,9,105,102,32,40,115,121,115,116,101,109,95,112,104,97,115,101,32,62,32,112,114,101,118,95,115,121,115,116,101,109,95,112,104,97,115,101,41,32,123,10,9,9,47,47,32,114,101,115,116,97,114,116,95,112,104,97,115,101,32,62,61,32,112,114,101,118,95,115,121,115,116,101,109,95,112,104,97,115,101,32,105,115,32,117,115,101,100,32,115,111,32,112,97,114,116,105,99,108,101,115,32,101,109,105,116,32,105,110,32,116,104,101,32,102,105,114,115,116,32,102,114,97,109,101,32,116,104,101,121,32,97,114,101,32,112,114,111,99,101,115,115,101,100,10,10,9,9,105,102,32,40,114,101,115,116,97,114,116,95,112,104,97,115,101,32,62,61,32,112,114,101,118,95,115,121,115,116,101,109,95,112,104,97,115,101,32,38,38,32,114,101,115,116,97,114,116,95,112,104,97,115,101,32,60,32,115,121,115,116,101,109,95,112,104,97,115,101,32,41,32,123,10,9,9,9,114,101,115,116,97,114,116,61,116,114,117,101,59,10,35,105,102,100,101,102,32,85,83,69,95,70,82,65,67,84,73,79,78,65,76,95,68,69,76,84,65,10,9,9,9,108,111,99,97,108,95,100,101,108,116,97,32,61,32,40,115,121,115,116,101,109,95,112,104,97,115,101,32,45,32,114,101,115,116,97,114,116,95,112,104,97,115,101,41,32,42,32,108,105,102,101,116,105,109,101,59,10,35,101,110,100,105,102,10,9,9,125,10,10,9,125,32,101,108,115,101,32,105,102,40,100,101,108,116,97,32,62,32,48,46,48,41,32,123,10,9,9,105,102,32,40,114,101,115,116,97,114,116,95,112,104,97,115,101,32,62,61,32,112,114,101,118,95,115,121,115,116,101,109,95,112,104,97,115,101,41,32,123,10,9,9,9,114,101,115,116,97,114,116,61,116,114,117,101,59,10,35,105,102,100,101,102,32,85,83,69,95,70,82,65,67,84,73,79,78,65,76,95,68,69,76,84,65,10,9,9,9,108,111,99,97,108,95,100,101,108,116,97,32,61,32,40,49,46,48,32,45,32,114,101,115,116,97,114,116,95,112,104,97,115,101,32,43,32,115,121,115,116,101,109,95,112,104,97,115,101,41,32,42,32,108,105,102,101,116,105,109,101,59,10,35,101,110,100,105,102,10,9,9,125,32,101,108,115,101,32,105,102,32,40,114,101,115,116,97,114,116,95,112,104,97,115,101,32,60,32,115,121,115,116,101,109,95,112,104,97,115,101,32,41,32,123,10,9,9,9,114,101,115,116,97,114,116,61,116,114,117,101,59,10,35,105,102,100,101,102,32,85,83,69,95,70,82,65,67,84,73,79,78,65,76,95,68,69,76,84,65,10,9,9,9,108,111,99,97,108,95,100,101,108,116,97,32,61,32,40,115,121,115,116,101,109,95,112,104,97,115,101,32,45,32,114,101,115,116,97,114,116,95,112,104,97,115,101,41,32,42,32,108,105,102,101,116,105,109,101,59,10,35,101,110,100,105,102,10,9,9,125,10,9,125,10,10,9,117,105,110,116,32,99,117,114,114,101,110,116,95,99,121,99,108,101,32,61,32,99,121,99,108,101,59,10,10,9,105,102,32,40,115,121,115,116,101,109,95,112,104,97,115,101,32,60,32,114,101,115,116,97,114,116,95,112,104,97,115,101,41,32,123,10,9,9,99,117,114,114,101,110,116,95,99,121,99,108,101,45,61,117,105,110,116,40,49,41,59,10,9,125,10,10,9,117,105,110,116,32,112,97,114,116,105,99,108,101,95,110,117,109,98,101,114,32,61,32,99,117,114,114,101,110,116,95,99,121,99,108,101,32,42,32,117,105,110,116,40,116,111,116,97,108,95,112,97,114,116,105,99,108,101,115,41,32,43,32,117,105,110,116,40,103,108,95,86,101,114,116,101,120,73,68,41,59,10,9,105,110,116,32,105,110,100,101,120,32,61,32,105,110,116,40,103,108,95,86,101,114,116,101,120,73,68,41,59,10,10,9,105,102,32,40,114,101,115,116,97,114,116,41,32,123,10,9,9,115,104,97,100,101,114,95,97,99,116,105,118,101,61,101,109,105,116,116,105,110,103,59,10,9,125,10,10,9,109,97,116,52,32,120,102,111,114,109,59,10,10,35,105,102,32,100,101,102,105,110,101,100,40,69,78,65,66,76,69,95,75,69,69,80,95,68,65,84,65,41,10,9,105,102,32,40,99,108,101,97,114,41,32,123,10,35,101,108,115,101,10,9,105,102,32,40,99,108,101,97,114,32,124,124,32,114,101,115,116,97,114,116,41,32,123,10,35,101,110,100,105,102,10,9,9,111,117,116,95,99,111,108,111,114,61,118,101,99,52,40,49,46,48,41,59,10,9,9,111,117,116,95,118,101,108,111,99,105,116,121,95,97,99,116,105,118,101,61,118,101,99,52,40,48,46,48,41,59,10,9,9,111,117,116,95,99,117,115,116,111,109,61,118,101,99,52,40,48,46,48,41,59,10,9,9,105,102,32,40,33,114,101,115,116,97,114,116,41,10,9,9,9,115,104,97,100,101,114,95,97,99,116,105,118,101,61,102,97,108,115,101,59,10,10,9,9,120,102,111,114,109,32,61,32,109,97,116,52,40,10,9,9,9,9,118,101,99,52,40,49,46,48,44,48,46,48,44,48,46,48,44,48,46,48,41,44,10,9,9,9,9,118,101,99,52,40,48,46,48,44,49,46,48,44,48,46,48,44,48,46,48,41,44,10,9,9,9,9,118,101,99,52,40,48,46,48,44,48,46,48,44,49,46,48,44,48,46,48,41,44,10,9,9,9,9,118,101,99,52,40,48,46,48,44,48,46,48,44,48,46,48,44,49,46,48,41,10,9,9,9,41,59,10,9,125,32,101,108,115,101,32,123,10,9,9,111,117,116,95,99,111,108,111,114,61,99,111,108,111,114,59,10,9,9,111,117,116,95,118,101,108,111,99,105,116,121,95,97,99,116,105,118,101,61,118,101,108,111,99,105,116,121,95,97,99,116,105,118,101,59,10,9,9,111,117,116,95,99,117,115,116,111,109,61,99,117,115,116,111,109,59,10,9,9,120,102,111,114,109,32,61,32,116,114,97,110,115,112,111,115,101,40,109,97,116,52,40,120,102,111,114,109,95,49,44,120,102,111,114,109,95,50,44,120,102,111,114,109,95,51,44,118,101,99,52,40,118,101,99,51,40,48,46,48,41,44,49,46,48,41,41,41,59,10,9,125,10,10,9,105,102,32,40,115,104,97,100,101,114,95,97,99,116,105,118,101,41,32,123,10,9,9,47,47,101,120,101,99,117,116,101,32,115,104,97,100,101,114,10,10,9,9,123,10,86,69,82,84,69,88,95,83,72,65,68,69,82,95,67,79,68,69,10,9,9,125,10,10,35,105,102,32,33,100,101,102,105,110,101,100,40,68,73,83,65,66,76,69,95,70,79,82,67,69,41,10,10,9,9,105,102,32,40,102,97,108,115,101,41,32,123,10,10,9,9,9,118,101,99,51,32,102,111,114,99,101,32,61,32,118,101,99,51,40,48,46,48,41,59,10,9,9,9,102,111,114,40,105,110,116,32,105,61,48,59,105,60,97,116,116,114,97,99,116,111,114,95,99,111,117,110,116,59,105,43,43,41,32,123,10,10,9,9,9,9,118,101,99,51,32,114,101,108,95,118,101,99,32,61,32,120,102,111,114,109,91,51,93,46,120,121,122,32,45,32,97,116,116,114,97,99,116,111,114,115,91,105,93,46,112,111,115,59,10,9,9,9,9,102,108,111,97,116,32,100,105,115,116,32,61,32,108,101,110,103,116,104,40,114,101,108,95,118,101,99,41,59,10,9,9,9,9,105,102,32,40,97,116,116,114,97,99,116,111,114,115,91,105,93,46,114,97,100,105,117,115,32,60,32,100,105,115,116,41,10,9,9,9,9,9,99,111,110,116,105,110,117,101,59,10,9,9,9,9,105,102,32,40,97,116,116,114,97,99,116,111,114,115,91,105,93,46,101,97,116,95,114,97,100,105,117,115,62,48,46,48,32,38,38,32,32,97,116,116,114,97,99,116,111,114,115,91,105,93,46,101,97,116,95,114,97,100,105,117,115,32,62,32,100,105,115,116,41,32,123,10,9,9,9,9,9,111,117,116,95,118,101,108,111,99,105,116,121,95,97,99,116,105,118,101,46,97,61,48,46,48,59,10,9,9,9,9,125,10,10,9,9,9,9,114,101,108,95,118,101,99,32,61,32,110,111,114,109,97,108,105,122,101,40,114,101,108,95,118,101,99,41,59,10,10,9,9,9,9,102,108,111,97,116,32,97,116,116,101,110,117,97,116,105,111,110,32,61,32,112,111,119,40,100,105,115,116,32,47,32,97,116,116,114,97,99,116,111,114,115,91,105,93,46,114,97,100,105,117,115,44,97,116,116,114,97,99,116,111,114,115,91,105,93,46,97,116,116,101,110,117,97,116,105,111,110,41,59,10,10,9,9,9,9,105,102,32,40,97,116,116,114,97,99,116,111,114,115,91,105,93,46,100,105,114,61,61,118,101,99,51,40,48,46,48,41,41,32,123,10,9,9,9,9,9,47,47,116,111,119,97,114,100,115,32,99,101,110,116,101,114,10,9,9,9,9,9,102,111,114,99,101,43,61,97,116,116,114,97,99,116,111,114,115,91,105,93,46,115,116,114,101,110,103,116,104,32,42,32,114,101,108,95,118,101,99,32,42,32,97,116,116,101,110,117,97,116,105,111,110,32,42,32,109,97,115,115,59,10,9,9,9,9,125,32,101,108,115,101,32,123,10,9,9,9,9,9,102,111,114,99,101,43,61,97,116,116,114,97,99,116,111,114,115,91,105,93,46,115,116,114,101,110,103,116,104,32,42,32,97,116,116,114,97,99,116,111,114,115,91,105,93,46,100,105,114,32,42,32,97,116,116,101,110,117,97,116,105,111,110,32,42,109,97,115,115,59,10,10,9,9,9,9,125,10,9,9,9,125,10,10,9,9,9,111,117,116,95,118,101,108,111,99,105,116,121,95,97,99,116,105,118,101,46,120,121,122,32,43,61,32,102,111,114,99,101,32,42,32,108,111,99,97,108,95,100,101,108,116,97,59,10,9,9,125,10,35,101,110,100,105,102,10,10,35,105,102,32,33,100,101,102,105,110,101,100,40,68,73,83,65,66,76,69,95,86,69,76,79,67,73,84,89,41,10,10,9,9,105,102,32,40,116,114,117,101,41,32,123,10,10,9,9,9,120,102,111,114,109,91,51,93,46,120,121,122,32,43,61,32,111,117,116,95,118,101,108,111,99,105,116,121,95,97,99,116,105,118,101,46,120,121,122,32,42,32,108,111,99,97,108,95,100,101,108,116,97,59,10,9,9,125,10,35,101,110,100,105,102,10,9,125,32,101,108,115,101,32,123,10,9,9,120,102,111,114,109,61,109,97,116,52,40,48,46,48,41,59,10,9,125,10,10,9,120,102,111,114,109,32,61,32,116,114,97,110,115,112,111,115,101,40,120,102,111,114,109,41,59,10,10,9,111,117,116,95,118,101,108,111,99,105,116,121,95,97,99,116,105,118,101,46,97,32,61,32,109,105,120,40,48,46,48,44,49,46,48,44,115,104,97,100,101,114,95,97,99,116,105,118,101,41,59,10,10,9,111,117,116,95,120,102,111,114,109,95,49,32,61,32,120,102,111,114,109,91,48,93,59,10,9,111,117,116,95,120,102,111,114,109,95,50,32,61,32,120,102,111,114,109,91,49,93,59,10,9,111,117,116,95,120,102,111,114,109,95,51,32,61,32,120,102,111,114,109,91,50,93,59,10,10,35,101,110,100,105,102,32,47,47,80,65,82,84,73,67,76,69,83,95,67,79,80,89,10,10,125,10,10,		0};

		static const int _vertex_code_start=1;
		static const char _fragment_code[]={
10,47,47,97,110,121,32,99,111,100,101,32,104,101,114,101,32,105,115,32,110,101,118,101,114,32,101,120,101,99,117,116,101,100,44,32,115,116,117,102,102,32,105,115,32,102,105,108,108,101,100,32,106,117,115,116,32,115,111,32,105,116,32,119,111,114,107,115,10,10,10,35,105,102,32,100,101,102,105,110,101,100,40,85,83,69,95,77,65,84,69,82,73,65,76,41,10,10,108,97,121,111,117,116,40,115,116,100,49,52,48,41,32,117,110,105,102,111,114,109,32,85,110,105,102,111,114,109,68,97,116,97,32,123,10,10,77,65,84,69,82,73,65,76,95,85,78,73,70,79,82,77,83,10,10,125,59,10,10,35,101,110,100,105,102,10,10,70,82,65,71,77,69,78,84,95,83,72,65,68,69,82,95,71,76,79,66,65,76,83,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,10,9,123,10,76,73,71,72,84,95,83,72,65,68,69,82,95,67,79,68,69,10,9,125,10,10,9,123,10,70,82,65,71,77,69,78,84,95,83,72,65,68,69,82,95,67,79,68,69,10,9,125,10,125,10,		0};

		static const int _fragment_code_start=234;
		setup(_conditional_strings,2,_uniform_strings,15,_attribute_pairs,0, _texunit_pairs,0,_ubo_pairs,1,_feedbacks,6,_vertex_code,_fragment_code,_vertex_code_start,_fragment_code_start);
	};

};

#endif

