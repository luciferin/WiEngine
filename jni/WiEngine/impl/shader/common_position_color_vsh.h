// Auto generated by convert.sh in shaders folder
#define common_position_color_vsh " \
	attribute vec4 a_position;\n \
	attribute vec4 a_color;\n \
	\n \
	uniform	mat4 u_MVPMatrix;\n \
	uniform float u_pointSize;\n \
	\n \
	#ifdef GL_ES\n \
		varying lowp vec4 v_fragmentColor;\n \
	#else\n \
		varying vec4 v_fragmentColor;\n \
	#endif\n \
	\n \
	void main() {\n \
	    gl_Position = u_MVPMatrix * a_position;\n \
		v_fragmentColor = a_color;\n \
		gl_PointSize = u_pointSize;\n \
	}"
