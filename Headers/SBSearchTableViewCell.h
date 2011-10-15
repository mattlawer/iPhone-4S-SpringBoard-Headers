/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class NSString, UIFont;

@interface SBSearchTableViewCell : UITableViewCell
{
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    UIFont *_topHitFont;
    NSString *_title;
    NSString *_subtitle;
    NSString *_summary;
    NSString *_auxiliaryTitle;
    NSString *_auxiliarySubtitle;
    BOOL _badged;
    BOOL _usesAlternateBackgroundColor;
    BOOL _isTopHit;
    BOOL _isBelowTopHit;
    BOOL _isFirstInTableView;
    BOOL _isFirstInSection;
    float _sectionHeaderWidth;
    float _edgeInset;
}

+ (id)backgroundColor;
+ (id)alternateBackgroundColor;
+ (id)lineColor;
+ (id)alternateLineColor;
+ (id)topLineShadowColor;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)clearContents;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (BOOL)_drawsContent;
- (void)_drawContentInRect:(struct CGRect)arg1 selected:(BOOL)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)_scriptingInfo;
@property(nonatomic) float edgeInset; // @synthesize edgeInset=_edgeInset;
@property(nonatomic) float sectionHeaderWidth; // @synthesize sectionHeaderWidth=_sectionHeaderWidth;
@property(nonatomic, getter=isFirstInSection) BOOL firstInSection; // @synthesize firstInSection=_isFirstInSection;
@property(nonatomic, getter=isFirstInTableView) BOOL firstInTableView; // @synthesize firstInTableView=_isFirstInTableView;
@property(nonatomic, getter=isBelowTopHit) BOOL belowTopHit; // @synthesize belowTopHit=_isBelowTopHit;
@property(nonatomic, getter=isTopHit) BOOL topHit; // @synthesize topHit=_isTopHit;
@property(nonatomic) BOOL usesAlternateBackgroundColor; // @synthesize usesAlternateBackgroundColor=_usesAlternateBackgroundColor;
@property(nonatomic, getter=isBadged) BOOL badged; // @synthesize badged=_badged;
@property(retain, nonatomic) NSString *auxiliarySubtitle; // @synthesize auxiliarySubtitle=_auxiliarySubtitle;
@property(retain, nonatomic) NSString *auxiliaryTitle; // @synthesize auxiliaryTitle=_auxiliaryTitle;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;

@end

