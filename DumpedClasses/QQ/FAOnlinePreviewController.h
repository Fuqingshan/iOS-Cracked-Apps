//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FABasePreviewController.h"

#import "FAOnlinePreviewDelegate.h"

@class FAModel, FAOnlinePreview, FAPreviewFootView, FAPreviewPageView, NSString;

@interface FAOnlinePreviewController : FABasePreviewController <FAOnlinePreviewDelegate>
{
    FAOnlinePreview *_onlinePreview;
    FAModel *_fileModel;
    int _previewMode;
    double holdTime;
    FAPreviewFootView *_footView;
    FAPreviewPageView *_pageView;
    int _previewSource;
}

@property(nonatomic) int previewSource; // @synthesize previewSource=_previewSource;
@property(retain, nonatomic) FAModel *fileModel; // @synthesize fileModel=_fileModel;
- (void)handleTapRetry;
- (void)handleGestureFrom:(id)arg1;
- (void)onRightButtonClick:(id)arg1;
- (void)rightbtnAction:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2;
- (void)onOpenFile:(id)arg1 path:(id)arg2 folder:(_Bool)arg3 size:(unsigned long long)arg4;
- (void)onPage:(int)arg1 totalPage:(int)arg2;
- (void)onFinish:(_Bool)arg1 msg:(id)arg2 stage:(int)arg3;
- (id)getWebview;
- (void)stopPreview;
- (void)startPreview;
- (void)loadPageView;
- (void)showFootViewWithTips:(id)arg1 loading:(_Bool)arg2;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)initEvent;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
