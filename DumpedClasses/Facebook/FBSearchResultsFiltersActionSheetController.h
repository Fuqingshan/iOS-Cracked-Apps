//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBNavigationControllerDelegate-Protocol.h"
#import "FBSearchResultsFiltersActionSheetListener-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class FBNavigationController, FBSearchFilter, FBSearchFilterChangeSet, FBSearchFilterGroup, FBSearchResultsFiltersActionSheetListenerAnnouncer, FBSearchResultsFiltersActionSheetToolbox, FBUserSession, FIGActionSheetControllerTransitionDelegate, NSObject, NSString, UIGestureRecognizer;

@interface FBSearchResultsFiltersActionSheetController : UIViewController <FBNavigationControllerDelegate, FBSearchResultsFiltersActionSheetListener, UIGestureRecognizerDelegate>
{
    FBNavigationController *_innerNavigationController;
    FBUserSession *_session;
    NSObject *_scenePath;
    FBSearchFilterGroup *_originalFilterGroup;
    FBSearchFilterChangeSet *_filterChangeSet;
    FBSearchFilterChangeSet *_filterCustomValues;
    FBSearchFilter *_currentFilter;
    FIGActionSheetControllerTransitionDelegate *_actionSheetControllerTransitionDelegate;
    UIGestureRecognizer *_gestureRecognizer;
    FBSearchResultsFiltersActionSheetListenerAnnouncer *_announcer;
    FBSearchResultsFiltersActionSheetToolbox *_toolbox;
    CDUnknownBlockType _completionForFilterGroup;
    CDUnknownBlockType _completionForSingleFilter;
    CDUnknownBlockType _onCancelBlock;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleTypeaheadViewController:(id)arg1 forFilter:(id)arg2 withCustomFilterValue:(id)arg3;
- (void)_reloadData;
- (void)announceActionSheetDidToggleCheckmark:(_Bool)arg1 forFilter:(id)arg2 value:(id)arg3;
- (void)announceActionSheetDidTapSearchTextFieldForFilter:(id)arg1;
- (void)announceActionSheetDidClearValueForFilter:(id)arg1;
- (void)announceActionSheetDidTapFilter:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_applyButtonTapped:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (id)_cancelButtonItem;
- (id)_applyButtonItem;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_setupToolbox;
- (void)_didTapBackgroundView:(id)arg1;
- (id)_initialViewController;
- (void)adjustHeightAnimated:(_Bool)arg1;
- (double)_expectedHeightForRowCount:(unsigned long long)arg1;
- (struct CGRect)_innerFrameForExpectedHeight:(double)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 scenePath:(id)arg2 announcer:(id)arg3;
- (id)initWithSession:(id)arg1 filter:(id)arg2 scenePath:(id)arg3 announcer:(id)arg4 completion:(CDUnknownBlockType)arg5 onCancel:(CDUnknownBlockType)arg6;
- (id)initWithSession:(id)arg1 filterGroup:(id)arg2 scenePath:(id)arg3 announcer:(id)arg4 completion:(CDUnknownBlockType)arg5 onCancel:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

