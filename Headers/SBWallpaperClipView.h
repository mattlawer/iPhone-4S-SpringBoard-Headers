/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIImageView.h"

@class SBWallpaperView, UIView;

@interface SBWallpaperClipView : UIImageView
{
    SBWallpaperView *_wallpaperView;
    UIImageView *_gradientView;
    int _orientation;
    struct CGPoint _contentOffset;
    UIView *_maskView;
    BOOL _usesFilter;
}

- (id)initWithFrame:(struct CGRect)arg1 wallpaperView:(id)arg2;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)setWallpaperView:(id)arg1 force:(BOOL)arg2;
@property(retain, nonatomic) SBWallpaperView *wallpaperView; // @synthesize wallpaperView=_wallpaperView;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
- (void)_setWallpaperAlpha:(float)arg1;
- (void)_wallpaperImageChanged:(id)arg1;
- (void)_wallpaperFrameChanged:(id)arg1;
- (void)_wallpaperAlphaChanged:(id)arg1;
- (void)_gradientAlphaChanged:(id)arg1;
- (void)_updateWallpaperImage;
- (void)_updateMask;
- (void)_recomputeGeometry;
- (void)setMaskView:(id)arg1;

@end

