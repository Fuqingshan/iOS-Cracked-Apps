//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QLVideoPayActionHandler : NSObject
{
    NSString *_billIDStr;
    CDUnknownBlockType _videoPayActionStatusChangeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType videoPayActionStatusChangeBlock; // @synthesize videoPayActionStatusChangeBlock=_videoPayActionStatusChangeBlock;
@property(copy, nonatomic) NSString *billIDStr; // @synthesize billIDStr=_billIDStr;
- (void).cxx_destruct;
- (void)refreshBillCurrentStatus:(long long)arg1 notification:(id)arg2;
- (void)voucherLoadFinished:(id)arg1;
- (void)concertPayFinished:(id)arg1;
- (void)singleMovieVocherPayFinished:(id)arg1;
- (void)singleMoviePayFinished:(id)arg1;
- (void)loginStateChange:(id)arg1;
- (void)billLoadFailedForNetBroken:(id)arg1;
- (void)billLoadFinished:(id)arg1;
- (void)billLoadFailed:(id)arg1;
- (void)updateBillBegin:(id)arg1;
- (void)billLoadedChanged:(id)arg1;
- (void)vipStateChanged:(id)arg1;
- (_Bool)checkMomentLogin;
- (void)login;
- (void)payWithType:(int)arg1 price:(double)arg2 itemID:(id)arg3 iapProductID:(id)arg4 param:(id)arg5;
- (void)doActionType:(unsigned long long)arg1;
- (void)refreshPayOrderWithVid:(id)arg1 cid:(id)arg2 type:(int)arg3 payStatus:(int)arg4;
- (void)refreshPayOrderWithVid:(id)arg1 type:(int)arg2 payStatus:(int)arg3;
- (void)refreshPayOrderWithCover:(id)arg1 type:(int)arg2 payStatus:(int)arg3;
- (_Bool)isBillPayedCID:(id)arg1 vid:(id)arg2;
- (_Bool)isBillPayedVID:(id)arg1;
- (_Bool)isBillPayedCoverID:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPayActionStatusChangeBlock:(CDUnknownBlockType)arg1;

@end

