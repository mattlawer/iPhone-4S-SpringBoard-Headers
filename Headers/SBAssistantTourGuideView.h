/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class AFUIServerUtteranceView, AFUIUtteranceView, NSString, UIButton, UIImageView, UILabel, UITableView;

@interface SBAssistantTourGuideView : UIView
{
    AFUIServerUtteranceView *_utteranceView;
    UIView *_clippingView;
    UIImageView *_backgroundView;
    UITableView *_domainTableView;
    UITableView *_sectionTableView;
    UIImageView *_topLineView;
    UIImageView *_bottomLineView;
    UIImageView *_topShadow;
    UIImageView *_bottomShadow;
    UIButton *_backButton;
    UILabel *_domainLabel;
    NSString *_serverUtteranceText;
    BOOL _sectionShowing;
    int _mode;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (float)utteranceHeight;
- (void)_updateUtteranceText;
- (void)setUtteranceText:(id)arg1;
- (void)showDisplay:(int)arg1;
- (void)setDomainName:(id)arg1;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void)setFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(readonly, nonatomic) UITableView *sectionTableView; // @synthesize sectionTableView=_sectionTableView;
@property(readonly, nonatomic) UITableView *domainTableView; // @synthesize domainTableView=_domainTableView;
@property(readonly, nonatomic) AFUIUtteranceView *utteranceView; // @synthesize utteranceView=_utteranceView;

@end

