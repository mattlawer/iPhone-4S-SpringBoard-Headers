/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface SBAssistantGuideSectionModel : NSObject
{
    NSString *_title;
    NSMutableArray *_phrases;
}

- (id)init;
- (void)dealloc;
@property(retain, nonatomic) NSArray *phrases; // @synthesize phrases=_phrases;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

