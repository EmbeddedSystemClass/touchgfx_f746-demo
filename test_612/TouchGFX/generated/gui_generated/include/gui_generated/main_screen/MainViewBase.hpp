/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MAINVIEWBASE_HPP
#define MAINVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/main_screen/MainPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/RadioButton.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/RadioButtonGroup.hpp>

class MainViewBase : public touchgfx::View<MainPresenter>
{
public:
    MainViewBase();
    virtual ~MainViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box backgroundBox;
    touchgfx::Image backgroundImage;
    touchgfx::RadioButton radioButton1;
    touchgfx::RadioButton radioButton2;
    touchgfx::RadioButton radioButton3;
    touchgfx::RadioButton radioButton4;
    touchgfx::TextAreaWithOneWildcard selectedText;
    touchgfx::TextAreaWithOneWildcard deselectedText;
    touchgfx::RadioButtonGroup<4> radioButtonGroup;

    /*
     * Wildcard Buffers
     */
    static const uint16_t SELECTEDTEXT_SIZE = 3;
    touchgfx::Unicode::UnicodeChar selectedTextBuffer[SELECTEDTEXT_SIZE];
    static const uint16_t DESELECTEDTEXT_SIZE = 3;
    touchgfx::Unicode::UnicodeChar deselectedTextBuffer[DESELECTEDTEXT_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<MainViewBase, const touchgfx::AbstractButton&> radioButtonSelectedCallback;
    touchgfx::Callback<MainViewBase, const touchgfx::AbstractButton&> radioButtonDeselectedCallback;

    /*
     * Callback Handler Declarations
     */
    void radioButtonSelectedCallbackHandler(const touchgfx::AbstractButton& src);
    void radioButtonDeselectedCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // MAINVIEWBASE_HPP
