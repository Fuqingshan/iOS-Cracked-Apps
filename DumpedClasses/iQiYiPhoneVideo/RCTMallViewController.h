//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTViewController.h"

@class IOMWebCustomNavigationView;

@interface RCTMallViewController : RCTViewController
{
    _Bool _engineFromFullPlay;
    _Bool _isInTabVc;
    CDUnknownBlockType _closeBlock;
    IOMWebCustomNavigationView *_customNavigationView;
}

@property(retain, nonatomic) IOMWebCustomNavigationView *customNavigationView; // @synthesize customNavigationView=_customNavigationView;
@property(nonatomic) _Bool isInTabVc; // @synthesize isInTabVc=_isInTabVc;
@property(nonatomic) _Bool engineFromFullPlay; // @synthesize engineFromFullPlay=_engineFromFullPlay;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void).cxx_destruct;
- (void)toBack;
- (void)initSchemaParser;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;

@end

