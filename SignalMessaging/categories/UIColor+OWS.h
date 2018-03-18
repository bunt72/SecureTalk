//
//  Copyright (c) 2018 Open Whisper Systems. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (OWS)

@property (class, readonly, nonatomic) UIColor *ows_systemPrimaryButtonColor;
@property (class, readonly, nonatomic) UIColor *ows_secureTalkBackgroundColor;
@property (class, readonly, nonatomic) UIColor *ows_destructiveRedColor;
//@property (class, readonly, nonatomic) UIColor *ows_fadedBlueColor;
@property (class, readonly, nonatomic) UIColor *ows_darkGreenColor;
@property (class, readonly, nonatomic) UIColor *ows_yellowColor;
@property (class, readonly, nonatomic) UIColor *ows_reminderYellowColor;
@property (class, readonly, nonatomic) UIColor *ows_bubbleBackGroundColor;
@property (class, readonly, nonatomic) UIColor *ows_reminderDarkYellowColor;
@property (class, readonly, nonatomic) UIColor *ows_greenColor;
@property (class, readonly, nonatomic) UIColor *ows_redColor;
@property (class, readonly, nonatomic) UIColor *ows_blackColor;
@property (class, readonly, nonatomic) UIColor *ows_darkIconColor;
@property (class, readonly, nonatomic) UIColor *ows_errorMessageBorderColor;
@property (class, readonly, nonatomic) UIColor *ows_infoMessageBorderColor;
@property (class, readonly, nonatomic) UIColor *ows_toolbarBackgroundColor;

+ (UIColor *)backgroundColorForContact:(NSString *)contactIdentifier;
+ (UIColor *)colorWithRGBHex:(unsigned long)value;

- (UIColor *)blendWithColor:(UIColor *)otherColor alpha:(CGFloat)alpha;

@end

NS_ASSUME_NONNULL_END
