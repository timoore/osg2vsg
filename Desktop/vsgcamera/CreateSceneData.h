#pragma once

#include <vsg/nodes/Node.h>

#include <vsg/vk/GraphicsPipeline.h>
#include <vsg/vk/PushConstants.h>
#include <vsg/vk/CommandPool.h>

extern vsg::ref_ptr<vsg::Node> createSceneData(vsg::ref_ptr<vsg::Device> device, vsg::ref_ptr<vsg::CommandPool> commandPool, vsg::ref_ptr<vsg::RenderPass> renderPass, VkQueue graphicsQueue, // viewer/window
                                               vsg::ref_ptr<vsg::mat4Value> projMatrix, vsg::ref_ptr<vsg::mat4Value> viewMatrix, vsg::ref_ptr<vsg::ViewportState> viewport, // camera
                                               vsg::Paths& searchPaths); // scene graph
