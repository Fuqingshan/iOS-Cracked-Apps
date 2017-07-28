//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WDNativeListBaseListViewModelDelegate.h"

@class NSMutableArray, NSNumber, NSString, WDNativeListModel, WDTipsStructModel;

@interface WDInConcernListViewModel : NSObject <WDNativeListBaseListViewModelDelegate>
{
    _Bool _isFirstAppear;
    _Bool _isLoading;
    NSString *_extra;
    NSNumber *_loginStatus;
    NSNumber *_totalNumber;
    NSString *_message;
    NSNumber *_hasMoreToRefresh;
    NSMutableArray *_tableModelArray;
    WDNativeListModel *_model;
    WDTipsStructModel *_tips;
    NSNumber *_hasMore;
    NSNumber *_refreshBeHotTime;
    NSNumber *_loadMoreBeHotTime;
}

@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSNumber *loadMoreBeHotTime; // @synthesize loadMoreBeHotTime=_loadMoreBeHotTime;
@property(retain, nonatomic) NSNumber *refreshBeHotTime; // @synthesize refreshBeHotTime=_refreshBeHotTime;
@property(retain, nonatomic) NSNumber *hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(retain, nonatomic) WDTipsStructModel *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) WDNativeListModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSMutableArray *tableModelArray; // @synthesize tableModelArray=_tableModelArray;
@property(retain, nonatomic) NSNumber *hasMoreToRefresh; // @synthesize hasMoreToRefresh=_hasMoreToRefresh;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSNumber *totalNumber; // @synthesize totalNumber=_totalNumber;
@property(retain, nonatomic) NSNumber *loginStatus; // @synthesize loginStatus=_loginStatus;
@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
- (void).cxx_destruct;
- (void)setRefreshLoadMoreTime:(id)arg1;
- (void)loadMoreWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)impressionKeyName;
- (void)trackEvent:(id)arg1 forLabel:(id)arg2 extraDict:(id)arg3 containExtra:(_Bool)arg4;
- (void)dealloc;
- (id)initWithListModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
