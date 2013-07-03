/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPopoverSlidingChromeView : UIPopoverBackgroundView  {
}

+ (float)cornerRadius;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentViewInsets;
+ (float)arrowBase;
+ (float)arrowHeight;

- (float)_shadowRadius;
- (float)_shadowOpacity;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_shadowInsets;
- (void)setArrowOffset:(float)arg1;
- (float)arrowOffset;
- (id)_shadowPathForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 arrowDirection:(unsigned int)arg2;
- (void)setArrowDirection:(unsigned int)arg1;
- (unsigned int)arrowDirection;
- (struct CGSize { float x1; float x2; })_shadowOffset;
- (void)layoutSubviews;

@end