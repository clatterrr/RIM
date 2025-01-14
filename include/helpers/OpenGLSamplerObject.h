﻿#pragma once

#include "common.h"

namespace GLHelpers {

	class SamplerObject
	{
	public:

		SamplerObject();
		~SamplerObject();

		GLuint					id; // sampler id

		void  create();

		void    setInterpolationMethod(GLenum method);
		void    setInterpolationMethod(GLenum minMethod, GLenum magMethod);
		void    setWrapMethod(GLenum method);
		void    setWrapMethod(GLenum methodS, GLenum methodT, GLenum methodR);
		void    setParameter(GLenum paramName, GLint param);
		void    setParameterf(GLenum paramName, GLfloat param);
		GLint   getParameter(GLenum paramName);
		GLfloat getParameterf(GLenum paramName);

		void  Release();
		void  Bind(GLuint textureUnit);
		static void  Unbind(GLuint textureUnit);
	};

	const SamplerObject NullSamplerObject;
}

