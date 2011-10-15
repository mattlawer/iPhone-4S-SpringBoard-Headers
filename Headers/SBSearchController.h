/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class SBSearchView;

@interface SBSearchController : NSObject <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate>
{
    SBSearchView *_searchView;
    BOOL _reloadingTableContent;
    BOOL _resultsUpdated;
    void *_addressBook;
}

- (id)init;
- (void)dealloc;
- (void)updateResultsIfNecessary;
- (void)controllerWasDeactivated;
- (void)scrollViewIsScrollingHorizontallyInSearchView;
@property(retain, nonatomic) SBSearchView *searchView; // @synthesize searchView=_searchView;
- (BOOL)_hasSearchResults;
- (BOOL)shouldShowKeyboardOnScroll;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)_populateCell:(id)arg1 withSearchResult:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_deselect;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 wantsHeaderForSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_tableViewDidFadeOut:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)_updateTableContents;
- (void)_updateResults:(id)arg1;
- (void)_clearResultsString:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (id)_auxiliaryTitleForABRecordID:(int)arg1;

@end

