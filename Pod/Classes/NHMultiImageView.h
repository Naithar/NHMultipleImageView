//
//  NHMultiImageView.h
//  Pods
//
//  Created by Naithar on 01.05.15.
//
//

#import <UIKit/UIKit.h>

@class NHMultiImageView;

@protocol NHMultiImageViewDelegate <NSObject>

@optional
- (void)multiImageView:(NHMultiImageView*)view didSelectIndex:(NSInteger)index;
- (void)multiImageView:(NHMultiImageView *)view didSaveAtIndex:(NSInteger)index;

@end

@interface NHMultiImageView : UIView

@property (nonatomic, weak) id<NHMultiImageViewDelegate> delegate;

@property (nonatomic, assign) NSUInteger maxImageCount;

@property (nonatomic, assign) UIEdgeInsets contentInsets;
@property (nonatomic, assign) UIEdgeInsets imageInsets;
@property (nonatomic, strong) UIColor *imageBackgroundColor;

@property (nonatomic, assign) CGFloat cornerRadius;

@property (nonatomic, strong) UIFont *textFont;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) UIColor *textContainerBackgroundColor;
@property (nonatomic, strong) UIColor *textContainerBorderColor;
@property (nonatomic, assign) CGFloat textContainerBorderWidth;
@property (nonatomic, strong) UIColor *selectionColor;

@property (nonatomic, strong) UIColor *loadingIndicatorColor;
@property (nonatomic, assign) CGFloat loadingIndicatorLineWidth;
@property (nonatomic, assign) CGFloat loadingIndicatorWidth;

@property (nonatomic, assign) BOOL useMenuController;
@property (nonatomic, assign) NSTimeInterval menuDisplayDelay;

@property (nonatomic, assign) BOOL useBlur;
@property (nonatomic, assign) CGFloat blurRadius;
@property (nonatomic, strong) UIColor *blurColor;
@property (nonatomic, assign) CGFloat blurSaturation;

@property (nonatomic, assign) BOOL useCenterBlurImage;
@property (nonatomic, strong) UIImage *blurCenterImage;

@property (nonatomic, assign) BOOL useCache;

- (void)changePatternTo:(NSArray*)pattern;
- (void)setImageArraySize:(NSUInteger)size;

- (void)addImage:(UIImage *)image;
- (void)addImage:(UIImage*)image toIndex:(NSInteger)index;
- (void)addCenteredImage:(UIImage*)image toIndex:(NSInteger)index;

- (void)setLoadingValue:(CGFloat)value forIndex:(NSInteger)index;
- (void)setLoadingIndicatorHidden:(BOOL)hidden forIndex:(NSInteger)index;

- (void)clearImageArray;

- (NSInteger)currentCount;

@end

@interface UIImage (CustomHash)

- (NSString*)cacheHash;

@end
