//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AlibcFcUrlNavigationProtocol.h"
#import "AlibcJumpFailedStrategyDelegate.h"
#import "TBURLActionHandler.h"

@class NSString, TBURLActionRequest;

@interface TBFlowCustomsURLHandler : NSObject <TBURLActionHandler, AlibcFcUrlNavigationProtocol, AlibcJumpFailedStrategyDelegate>
{
    TBURLActionRequest *_actionRequest;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TBURLActionRequest *actionRequest; // @synthesize actionRequest=_actionRequest;
- (void).cxx_destruct;
- (void)failToShowH5WithUrl:(id)arg1;
- (id)urlTrackWithAppInfo:(id)arg1;
- (void)openPageInAppWithUrl:(id)arg1 appInfo:(id)arg2;
- (id)customControlWithKey:(id)arg1;
- (id)processWithRequest:(id)arg1;
- (id)handleURLActionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
