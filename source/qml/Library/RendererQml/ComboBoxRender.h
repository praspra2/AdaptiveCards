#pragma once

#include <memory>

#include "AdaptiveCardQmlRenderer.h"
#include "QmlTag.h"

class ComboBoxElement
{
public:
    ComboBoxElement(RendererQml::ChoiceSet choiceSet, std::shared_ptr<RendererQml::AdaptiveRenderContext> context);
    ComboBoxElement() = delete;
    ComboBoxElement(const ComboBoxElement&) = delete;
    ComboBoxElement& operator= (const ComboBoxElement&) = delete;
    std::shared_ptr<RendererQml::QmlTag> getQmlTag();
    void initialize();

private:
    std::shared_ptr<RendererQml::QmlTag> mComboBox;
    const RendererQml::ChoiceSet mChoiceSet;
    const RendererQml::InputChoiceSetDropDownConfig mChoiceSetConfig;
    const std::shared_ptr<RendererQml::AdaptiveRenderContext> mContext;

private:
    void addColorFunction();
    void addBackground();
    std::string getModel(std::vector<RendererQml::Checkbox> Choices);
    std::shared_ptr<RendererQml::QmlTag> getArrowIcon();
    std::shared_ptr<RendererQml::QmlTag> getContentItemText();
    std::shared_ptr<RendererQml::QmlTag> getItemDelegate();
    std::shared_ptr<RendererQml::QmlTag> getPopup();
};
