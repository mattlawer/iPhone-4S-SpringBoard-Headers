/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString, SBAppContextHostView;

@interface SBAppContextHostManager : NSObject
{
    SBAppContextHostView *_contextHostView;
    NSString *_appBundleID;
    NSMutableArray *_contexts;
    BOOL _hostingEnabled;
    NSMutableArray *_hostRequesters;
    NSMutableDictionary *_hostRequesterInfo;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id)hostViewForRequester:(id)arg1;
- (void)enableHostingForRequester:(id)arg1 orderFront:(BOOL)arg2;
- (void)disableHostingForRequester:(id)arg1;
- (void)disableHostingForAllRequesters;
- (void)orderRequesterFront:(id)arg1;
- (void)setContextId:(unsigned int)arg1 hidden:(BOOL)arg2 forRequester:(id)arg3;
- (id)_realContextHostViewWhichIReallyNeedToAccessAndIKnowWhatImDoingISwear;
- (void)_notePropertiesSetOnRealContextHostViewWhichIReallyNeedToChangeAndIKnowWhatImDoingISwear:(id)arg1 originalProperties:(id)arg2 forRequester:(id)arg3;
- (BOOL)_requesterIsFrontmost:(id)arg1;
- (id)_infoForRequester:(id)arg1;
- (void)_applyRequesterInfo:(id)arg1;
- (void)_removeRequesterInfo:(id)arg1;
- (void)_setContext:(id)arg1 hidden:(BOOL)arg2;
@property(readonly, nonatomic) unsigned int contextCount;
- (void)willOrderInContextWithId:(unsigned int)arg1 windowLevel:(float)arg2 windowOutput:(int)arg3 flush:(BOOL)arg4;
- (void)didOrderOutContextWithId:(unsigned int)arg1;
- (void)setOrderOutPending:(BOOL)arg1 forContextId:(unsigned int)arg2;
- (void *)createIOSurfaceForFrame:(struct CGRect)arg1;
- (void *)createIOSurfaceForFrame:(struct CGRect)arg1 outTransform:(struct CGAffineTransform *)arg2;
- (void *)createIOSurfaceForFrame:(struct CGRect)arg1 excludeContext:(unsigned int)arg2 outTransform:(struct CGAffineTransform *)arg3;
- (void *)createIOSurfaceForFrame:(struct CGRect)arg1 excludeContext:(unsigned int)arg2 usePurpleGfx:(BOOL)arg3 outTransform:(struct CGAffineTransform *)arg4;
- (void)_adjustLayerFrameAndTransform:(id)arg1;
@property(readonly, nonatomic, getter=isHostingEnabled) BOOL hostingEnabled; // @synthesize hostingEnabled=_hostingEnabled;
@property(copy, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;

@end

