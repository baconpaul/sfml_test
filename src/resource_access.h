/*
 * AudioViz - just baconpaul noodling on stuff
 *
 * Copyright 2024, Paul Walker. Released under the MIT license.
 *
 * The images in the 'res' folder may be copyrighted and released
 * under restricted license. The code in scripts/ and src/ is all
 * MIT. But really, nothing to see here. Just a collaboration on
 * SFML for my current band
 *
 * All source for is available at
 * https://github.com/baconpaul/audioviz
 */

#ifndef AUDIOVIZ_SRC_TEXTURESET_H
#define AUDIOVIZ_SRC_TEXTURESET_H

#include <SFML/Graphics.hpp>

namespace audioviz::resource_access
{
bool load(const std::string &path, sf::Texture &into);
bool load(const std::string &path, sf::Font &into);
}

#endif // AUDIOVIZ_TEXTURESET_H