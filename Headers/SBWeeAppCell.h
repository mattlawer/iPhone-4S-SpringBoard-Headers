/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBBulletinLinenBackedCell.h"

@class SBWeeApp, UIView;

@interface SBWeeAppCell : SBBulletinLinenBackedCell
{
    SBWeeApp *_weeApp;
    UIView *_weeAppView;
    BOOL _useTopPadding;
}

+ (float)rowHeightForViewHeight:(float)arg1 withTopPadding:(BOOL)arg2;
- (id)initWithLinenView:(id)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
@property(retain, nonatomic) SBWeeApp *weeApp; // @synthesize weeApp=_weeApp;
- (void)setUsesTopPadding:(BOOL)arg1;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToWindow;
- (void)prepareForReuse;
- (void)_tapped:(id)arg1;

@end

