#pragma once

//Lib includes
#include <GL/glew.h>
#include <GLFW/glfw3.h>

//Logger includes
//#include "logging/Logging.h" //*** removed due to incompatability ***//

//Graphics includes
#include "../graphics/Window.h"
#include "../graphics/Shader.h"
#include "../graphics/Camera.h"

//buffers includes
#include "../buffers/VAO.h"
#include "../buffers/VBO.h"
#include "../buffers/IBO.h"

//Math includes
#include "../math/vec2.h"
#include "../math/vec3.h"
#include "../math/vec4.h"
#include "../math/mat4.h"

//Voder Includes
#include "../voder/include/Voder.h" //this will currently be an issue due to includes in the file

#include "debuging.h"