/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABContactView, UIImageView;

@interface ABStarkContactContainerView : UIView {
    ABContactView *_contactView;
    UIImageView *_photoView;
}

@property(readonly) ABContactView * contactView;

- (id)contactView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contact:(id)arg2;
- (void)layoutSubviews;

@end
