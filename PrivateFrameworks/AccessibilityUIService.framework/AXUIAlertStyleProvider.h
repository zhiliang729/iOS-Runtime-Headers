/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
 */

@class NSBundle;

@interface AXUIAlertStyleProvider : NSObject <AXUIAlertStyleProvider> {
    NSBundle *_bundle;
}

@property(retain) NSBundle * bundle;

- (float)alertBackgroundCornerRadiusForType:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })alertBackgroundSizeForType:(unsigned int)arg1;
- (int)alertBackgroundStyleForType:(unsigned int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alertContentEdgeInsetsForType:(unsigned int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alertEdgeInsetsForType:(unsigned int)arg1;
- (double)alertFadeAnimationDurationForType:(unsigned int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alertIconImageViewEdgeInsetsForType:(unsigned int)arg1;
- (int)alertPositionForType:(unsigned int)arg1;
- (BOOL)alertShouldBeAsWideAsScreenForType:(unsigned int)arg1;
- (id)alertSubtitleTextLabelBackgroundColorForType:(unsigned int)arg1;
- (id)alertSubtitleTextLabelFontForType:(unsigned int)arg1;
- (float)alertSubtitleTextLabelLineHeightOffsetForType:(unsigned int)arg1;
- (id)alertSubtitleTextLabelShadowColorForType:(unsigned int)arg1;
- (struct UIOffset { float x1; float x2; })alertSubtitleTextLabelShadowOffsetForType:(unsigned int)arg1;
- (id)alertSubtitleTextLabelTextColorForType:(unsigned int)arg1;
- (float)alertSubtitleTextLabelVerticalSpacingHeightWithTextLabelForType:(unsigned int)arg1;
- (id)alertTextLabelBackgroundColorForType:(unsigned int)arg1;
- (id)alertTextLabelFontForType:(unsigned int)arg1;
- (float)alertTextLabelLineHeightOffsetForType:(unsigned int)arg1;
- (id)alertTextLabelShadowColorForType:(unsigned int)arg1;
- (struct UIOffset { float x1; float x2; })alertTextLabelShadowOffsetForType:(unsigned int)arg1;
- (id)alertTextLabelTextColorForType:(unsigned int)arg1;
- (id)bundle;
- (void)dealloc;
- (void)setBundle:(id)arg1;

@end
