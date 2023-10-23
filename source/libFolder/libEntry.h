#ifndef TEST_LIBRARY_H
#define TEST_LIBRARY_H

#include <iostream>
#include <ostream>
#include "vulkan.h"
#include "vk_enum_string_helper.h"
#include "vulkan_core.h"
<<<<<<< HEAD
#include "glm.hpp"
=======
>>>>>>> 9d5426922dc0b92da5e5a57dcec080d7d734a7a1

namespace TestLibrary
{
    inline VkInstance testInstance;

    inline void TestFunction()
    {
        std::cout << "Hello From Test Function Library!\n";
        std::cout << "VK Test: " << string_VkResult(VK_ERROR_FEATURE_NOT_PRESENT) << "\n";
        
        VkApplicationInfo appInfo = {};							
        appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;		
        appInfo.pApplicationName = "Test App";		
        appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);	
        appInfo.pEngineName = "Test Engine";			
        appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);		
        appInfo.apiVersion = VK_API_VERSION_1_1;				

        // Set the info for the Instance to be created
        VkInstanceCreateInfo instanceCreateInfo = {}; 
        instanceCreateInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
        instanceCreateInfo.pApplicationInfo = &appInfo;
        instanceCreateInfo.enabledLayerCount = 0;
        instanceCreateInfo.pNext = nullptr;

        // Create the Instance
        VkResult result = vkCreateInstance(&instanceCreateInfo, nullptr, &testInstance);
        if (result == VK_SUCCESS)
        {
            std::cout << "Created VKInstance!\n";
        }
        else
        {
            std::cout << "Failed to create VKInstance! Error == " << string_VkResult(result);
        }
<<<<<<< HEAD

        glm::vec3 var1(1,2,3);
        glm::vec3 var2(4,5,6);
        glm::vec3 var3 = var1 + var2;
        std::cout << "GLM test: " << var3.z << "\n";
=======
>>>>>>> 9d5426922dc0b92da5e5a57dcec080d7d734a7a1
    }
}

#endif // TEST_LIBRARY_H
