//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, TBCouponDetailModel;

@interface TBCouponDataService : NSObject
{
    long long _envirment;
    NSMutableDictionary *_bizListsDict;
    TBCouponDetailModel *_detailModel;
    NSMutableDictionary *_detailDict;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (void)freeService;
+ (id)sharedService;
- (void).cxx_destruct;
- (void)loadCouponDetailDataWithCouponId:(id)arg1 supplierId:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onFail:(CDUnknownBlockType)arg4;
- (void)loadCouponListDataWithBizType:(long long)arg1 source:(long long)arg2 couponType:(long long)arg3 onSuccess:(CDUnknownBlockType)arg4 onFail:(CDUnknownBlockType)arg5;
- (void)deleteCouponInAllList:(id)arg1;
- (id)getCouponListWithBizType:(long long)arg1;
- (void)reachabilityChanged:(id)arg1;
- (id)getCouponList:(id)arg1 withBizType:(long long)arg2;
- (void)loadBusiness;
@property(nonatomic) long long envirment; // @synthesize envirment=_envirment;
- (void)dealloc;
- (id)init;

@end
