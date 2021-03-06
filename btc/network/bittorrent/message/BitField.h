#pragma once

#include "MessageInterface.h"

namespace network{
    namespace bittorrent{
        namespace message{
            typedef class BitField : public MessageInterface{
                private:
                    std::vector<char> data;
                    BitField(std::vector<bool> input);

                public:
                    std::vector<char> message();
                    type what();

                    static BitField create(std::vector<bool> input);                //bit_field factory
                    static bool is(std::vector<char>& incoming);                    //returns true if the incoming corresponds to the bit_field type
                    static std::vector<bool> field(std::vector<char>& incoming);
            }bitfield;
        }
    }
}
