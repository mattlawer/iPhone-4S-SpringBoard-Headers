/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBBaseSoftwareUpdateAlertItem.h"

@class NSError;

@interface SBSoftwareUpdateUnableToInstallAlertItem : SBBaseSoftwareUpdateAlertItem
{
    NSError *_error;
}

- (void)dealloc;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)buildUnavailableSheet;
- (void)buildDefaultSheetWithBody:(id)arg1 isLocked:(BOOL)arg2;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (BOOL)reappearsAfterLock;
- (BOOL)undimsScreen;
- (BOOL)shouldShowInLockScreen;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)dismissOnLock;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;

@end

