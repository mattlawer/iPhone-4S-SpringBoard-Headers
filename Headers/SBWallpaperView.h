/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIImageView.h"

@interface SBWallpaperView : UIImageView
{
    int _orientation;
    int _variant;
    UIImageView *_topGradient;
    UIImageView *_bottomGradient;
    BOOL _usesFilter;
    float _gradientAlpha;
    struct CGRect _wallpaperContentsRect;
    BOOL _postsNotifications;
    BOOL _flushWallpaperAutomatically;
}

- (id)initWithOrientation:(int)arg1 variant:(int)arg2;
- (void)dealloc;
- (void)setImage:(id)arg1;
- (void)_resetImage;
- (void)_wallpaperChanged;
- (void)_setGradientImagesWithOrientation:(int)arg1;
- (void)_setOrientation:(int)arg1 duration:(double)arg2 force:(BOOL)arg3;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
- (void)setOrientation:(int)arg1 duration:(double)arg2;
- (void)setViewAlpha:(float)arg1;
@property(nonatomic) BOOL usesFilter; // @synthesize usesFilter=_usesFilter;
@property(nonatomic) float filterAlpha;
- (float)alpha;
- (void)setAlpha:(float)arg1;
@property(nonatomic) float gradientAlpha; // @synthesize gradientAlpha=_gradientAlpha;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)gradientImageForInterfaceOrientation:(int)arg1;
- (struct CGRect)wallpaperContentsRect;
- (void)replaceWallpaperWithImage:(id)arg1;
- (void)resetCurrentImageToWallpaper;
- (void)didMoveToWindow;
@property(nonatomic) BOOL flushWallpaperAutomatically; // @synthesize flushWallpaperAutomatically=_flushWallpaperAutomatically;
@property(nonatomic) BOOL postsNotifications; // @synthesize postsNotifications=_postsNotifications;
@property(readonly, nonatomic) int variant; // @synthesize variant=_variant;

@end

