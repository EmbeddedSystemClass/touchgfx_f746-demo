/**
  ******************************************************************************
  * This file is part of the TouchGFX 4.13.0 distribution.
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

#ifndef WILDCARDTEXTBUTTONSTYLE_HPP
#define WILDCARDTEXTBUTTONSTYLE_HPP

#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

namespace touchgfx
{
/**
 * @class WildcardTextButtonStyle WildcardTextButtonStyle.hpp touchgfx/containers/buttons/WildcardTextButtonStyle.hpp
 *
 * @brief A wildcard text button style.
 *
 *        An wildcard text button style. This class is supposed to be
 *        used with one of the ButtonTrigger classes to create a
 *        functional button. This class will show a text with a
 *        wildcard in one of two colors depending on the state of the
 *        button (pressed or released).
 *
 *        The WildcardTextButtonStyle does not set the size of the
 *        enclosing container (normally AbstractButtonContainer). The
 *        size must be set manually.
 *
 *        To get a background behind the text, use
 *        WildcardTextButtonStyle together with e.g. ImageButtonStyle:
 *        WildcardTextButtonStyle<ImageButtonStyle<ClickButtonTrigger>
 *        > myButton;
 *
 *        The position of the text can be adjusted with setTextXY
 *        (default is centered).
 *
 * @tparam T Generic type parameter. Typically a AbstractButtonContainer subclass.
 *
 * @see AbstractButtonContainer
 *
 * @tparam T Generic type parameter.
 */
template<class T>

/**
 * @class WildcardTextButtonStyle
 *
 * @brief A wildcard text button style.
 */
class WildcardTextButtonStyle : public T
{
public:
    /**
     * @fn WildcardTextButtonStyle::WildcardTextButtonStyle()
     *
     * @brief Default constructor.
     */
    WildcardTextButtonStyle() : T()
    {
        T::add(wildcardText);
    }

    /**
     * @fn virtual WildcardTextButtonStyle::~WildcardTextButtonStyle()
     *
     * @brief Destructor.
     */
    virtual ~WildcardTextButtonStyle() { }

    /**
     * @fn void WildcardTextButtonStyle::setWildcardText(TypedText t)
     *
     * @brief Sets wildcard text.
     *
     * @param t A TypedText to process.
     */
    void setWildcardText(TypedText t)
    {
        wildcardText.setTypedText(t);
        wildcardText.setWidth(T::getWidth());
        wildcardText.setHeight(T::getHeight());
    }

    /**
     * @fn void WildcardTextButtonStyle::setWildcardTextX(int16_t x)
     *
     * @brief Sets wildcard text x coordinate.
     *
     * @param x The x coordinate.
     */
    void setWildcardTextX(int16_t x)
    {
        wildcardText.setX(x);
    }

    /**
     * @fn void WildcardTextButtonStyle::setWildcardTextY(int16_t y)
     *
     * @brief Sets wildcard text y coordinate.
     *
     * @param y The y coordinate.
     */
    void setWildcardTextY(int16_t y)
    {
        wildcardText.setY(y);
    }

    /**
     * @fn void WildcardTextButtonStyle::setWildcardTextXY(int16_t x, int16_t y)
     *
     * @brief Sets wildcard text xy.
     *
     * @param x The x coordinate.
     * @param y The y coordinate.
     */
    void setWildcardTextXY(int16_t x, int16_t y)
    {
        setWildcardTextX(x);
        setWildcardTextY(y);
    }

    /**
     * @fn void WildcardTextButtonStyle::setWildcardTextPosition(int16_t x, int16_t y, , int16_t width, int16_t height)
     *
     * @brief Sets text position.
     *
     * @param x The x coordinate.
     * @param y The y coordinate.
     * @param width The width of the text.
     * @param height The height of the text.
     */
    void setWildcardTextPosition(int16_t x, int16_t y, int16_t width, int16_t height)
    {
        wildcardText.setPosition(x, y, width, height);
    }

    /**
     * @fn void WildcardTextButtonStyle::setWildcardTextRotation(TextRotation rotation)
     *
     * @brief Sets wildcard text rotation.
     *
     * @param rotation The rotation.
     */
    void setWildcardTextRotation(TextRotation rotation)
    {
        wildcardText.setRotation(rotation);
    }

    /**
     * @fn void WildcardTextButtonStyle::setWildcardTextBuffer(Unicode::UnicodeChar* buffer)
     *
     * @brief Sets wildcard text buffer.
     *
     * @param [in,out] buffer If non-null, the buffer.
     */
    void setWildcardTextBuffer(const Unicode::UnicodeChar* buffer)
    {
        wildcardText.setWildcard(buffer);
    }

    /**
     * @fn void WildcardTextButtonStyle::setWildcardTextColors(colortype newColorReleased, colortype newColorPressed)
     *
     * @brief Sets wild card text colors.
     *
     * @param newColorReleased The new color released.
     * @param newColorPressed  The new color pressed.
     */
    void setWildcardTextColors(colortype newColorReleased, colortype newColorPressed)
    {
        colorReleased = newColorReleased;
        colorPressed = newColorPressed;

        handlePressedUpdated();
    }

protected:
    TextAreaWithOneWildcard wildcardText; ///< The wildcard text
    colortype colorReleased;              ///< The color released
    colortype colorPressed;               ///< The color pressed

    /**
     * @fn virtual void WildcardTextButtonStyle::handlePressedUpdated()
     *
     * @brief Handles the pressed updated.
     */
    virtual void handlePressedUpdated()
    {
        wildcardText.setColor(T::getPressed() ? colorPressed : colorReleased);
        T::handlePressedUpdated();
    }

    /**
     * @fn virtual void WildcardTextButtonStyle::handleAlphaUpdated()
     *
     * @brief Handles the alpha updated.
     */
    virtual void handleAlphaUpdated()
    {
        wildcardText.setAlpha(T::getAlpha());
        T::handleAlphaUpdated();
    }
};
} // namespace touchgfx

#endif // WILDCARDTEXTBUTTONSTYLE_HPP
