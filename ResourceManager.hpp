#pragma once

#include "Resource.hpp"

class ResourceManager
{
    Resource* resource;

    public:
        ResourceManager() : resource(new Resource()) {}

        ~ResourceManager() { delete resource; }

        ResourceManager(const ResourceManager& kopiowane): resource(new Resource(*kopiowane.resource)) {}

        ResourceManager& operator=(const ResourceManager& kopiowane) 
        {
            *resource = *kopiowane.resource;
            return *this;
        }


        double get() const {
            return resource->get();
    }
};
