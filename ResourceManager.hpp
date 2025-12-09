#pragma once

#include "Resource.hpp"

class ResourceManager
{
    Resource* resource;

    public:
        ResourceManager() : resource(new Resource()) {}

        ~ResourceManager() { delete resource; }

        ResourceManager(const ResourceManager& kopiowane): resource(new Resource(*kopiowane.resource)) {}

        ResourceManager(ResourceManager&& przenoszone): resource(przenoszone.resource)
        {
            przenoszone.resource = nullptr;
        }

        ResourceManager& operator=(const ResourceManager& kopiowane) 
        {
            *resource = *kopiowane.resource;
            return *this;
        }

        ResourceManager& operator=(ResourceManager&& przenoszone)
        {
            if (this != &przenoszone) {
                delete resource; 
                resource       = przenoszone.resource;
                przenoszone.resource = nullptr;
            }
            return *this;
        }


        double get() const {
            return resource->get();
    }
};
