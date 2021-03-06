/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPImageViewStyle : NSObject <LPEmailCompatibleCaptionBarItemChild, NSCopying> {
    UIColor * _backgroundColor;
    LPPointUnit * _backgroundInset;
    LPPointUnit * _cornerRadius;
    double  _darkeningAmount;
    long long  _filter;
    double  _foregroundOpacity;
    LPPadding * _margin;
    UIColor * _maskColor;
    LPPadding * _padding;
    LPSize * _size;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) LPPointUnit *backgroundInset;
@property (nonatomic, retain) LPPointUnit *cornerRadius;
@property (nonatomic) double darkeningAmount;
@property (nonatomic) long long filter;
@property (nonatomic) double foregroundOpacity;
@property (nonatomic, readonly, retain) LPPadding *margin;
@property (nonatomic) UIColor *maskColor;
@property (nonatomic, readonly, retain) LPPadding *padding;
@property (nonatomic, retain) LPSize *size;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)backgroundInset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cornerRadius;
- (double)darkeningAmount;
- (id)emailCompatibleMargin;
- (long long)filter;
- (double)foregroundOpacity;
- (id)init;
- (id)margin;
- (id)maskColor;
- (id)padding;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundInset:(id)arg1;
- (void)setCornerRadius:(id)arg1;
- (void)setDarkeningAmount:(double)arg1;
- (void)setFilter:(long long)arg1;
- (void)setForegroundOpacity:(double)arg1;
- (void)setMaskColor:(id)arg1;
- (void)setSize:(id)arg1;
- (id)size;

@end
