//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "XYPageViewControllerDataSource.h"
#import "XYPageViewControllerDelegate.h"
#import "XYSegmentControlDelegate.h"

@class NSArray, NSLayoutConstraint, NSString, XYPageViewController, XYSegmentControl;

@interface XYSegmentPageViewController : UIViewController <XYPageViewControllerDelegate, XYPageViewControllerDataSource, XYSegmentControlDelegate>
{
    double segmentControlHeight;
    id <XYSegmentPageViewControllerDelegate> _delegate;
    NSArray *_viewControllers;
    XYSegmentControl *_segmentControl;
    NSArray *_contentTitles;
    XYPageViewController *_pageViewController;
    NSLayoutConstraint *_segmentControlHeightConstraint;
    NSLayoutConstraint *_segmentBorderControlHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *segmentBorderControlHeightConstraint; // @synthesize segmentBorderControlHeightConstraint=_segmentBorderControlHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *segmentControlHeightConstraint; // @synthesize segmentControlHeightConstraint=_segmentControlHeightConstraint;
@property(retain, nonatomic) XYPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(retain, nonatomic) NSArray *contentTitles; // @synthesize contentTitles=_contentTitles;
@property(retain, nonatomic) XYSegmentControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) __weak id <XYSegmentPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double segmentControlHeight; // @synthesize segmentControlHeight;
- (void).cxx_destruct;
- (id)pageViewController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (long long)numberOfControllersInPageViewController:(id)arg1;
- (void)pageViewController:(id)arg1 didTransitionFrom:(id)arg2 toViewController:(id)arg3;
- (void)segmentControl:(id)arg1 willMoveToSegmentAtIndex:(unsigned long long)arg2;
- (void)segmentControl:(id)arg1 didSelectSegmentAtIndex:(unsigned long long)arg2;
@property(nonatomic) UIViewController *selectedViewController;
@property(nonatomic) unsigned long long selectedIndex;
@property(nonatomic) _Bool scrollEnabled;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithContentViewControllers:(id)arg1 titles:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
