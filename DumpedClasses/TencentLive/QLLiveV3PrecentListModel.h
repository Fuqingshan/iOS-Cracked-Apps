//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLRequestModel.h"

@class NSMutableArray, NSString, QLASIHTTPRequest;

@interface QLLiveV3PrecentListModel : QLRequestModel
{
    NSString *_pID;
    long long _sid;
    NSMutableArray *_precentListDataArc;
    NSString *_actorId;
    double _pointTime;
    long long _presentSource;
    long long _idType;
    NSString *_toolName;
    NSString *_toolDesc;
    long long _freeGiftCount;
    NSString *_giftKey;
    QLASIHTTPRequest *_dataRequest;
}

+ (id)coverCFURLCreateStringByAddingPercentEscapes:(id)arg1 withLegalURL:(id)arg2 withEncodingType:(unsigned int)arg3;
@property(retain) QLASIHTTPRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(copy, nonatomic) NSString *giftKey; // @synthesize giftKey=_giftKey;
@property(nonatomic) long long freeGiftCount; // @synthesize freeGiftCount=_freeGiftCount;
@property(copy, nonatomic) NSString *toolDesc; // @synthesize toolDesc=_toolDesc;
@property(copy, nonatomic) NSString *toolName; // @synthesize toolName=_toolName;
@property(nonatomic) long long idType; // @synthesize idType=_idType;
@property(nonatomic) long long presentSource; // @synthesize presentSource=_presentSource;
@property(nonatomic) double pointTime; // @synthesize pointTime=_pointTime;
@property(copy, nonatomic) NSString *actorId; // @synthesize actorId=_actorId;
@property(readonly, nonatomic) NSMutableArray *precentListDataArc; // @synthesize precentListDataArc=_precentListDataArc;
@property(nonatomic) long long sid; // @synthesize sid=_sid;
@property(copy, nonatomic) NSString *pID; // @synthesize pID=_pID;
- (void).cxx_destruct;
- (void)requestDidFinishLoad:(id)arg1;
- (void)deCodeToolList:(id)arg1;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (void)requestDidRetryRequest:(id)arg1;
- (void)cancelDataRequest;
- (id)init;

@end

