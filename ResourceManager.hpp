#pragma once

#include "Resource.hpp"

class ResourceManager
{
    Resource* resource;

    public:
        ResourceManager() : resource(new Resource()) {}

        ~ResourceManager() { delete resource; }

        double get() const {
            return resource->get();
    }
};
